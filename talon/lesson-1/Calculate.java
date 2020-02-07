import java.util.Scanner;

public class Calculate {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);
    int sum = 0;

    for (int i = 0; i < 4; i++) {
      System.out.println("Please, insert an intever value: ");
      sum += read.nextInt();
    }

    System.out.println("The sum value should be " + sum);

    read.close();
  }
}
