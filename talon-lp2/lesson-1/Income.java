import java.util.Scanner;

public class Income {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    System.out.println("Please, insert your old sallary: ");
    double income = read.nextDouble();

    System.out.println("Your new sallary is: " + income * 1.25);

    read.close();
  }
}
