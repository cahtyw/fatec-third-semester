import java.util.Scanner;

public class OddsOrEvens {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    System.out.println("Please, insert an integer value: ");
    int number = input.nextInt();

    System.out.println("The result is " + ((number % 2 == 0) ? "even." : "odd."));

    input.close();
  }
}
