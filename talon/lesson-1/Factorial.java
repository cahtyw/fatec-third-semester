import java.util.Scanner;

public class Factorial {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int product = 1;

    System.out.println("Factorial of: ");

    int factorial = input.nextInt();

    for (int i = 1; i <= factorial; i++) {
      product *= i;
    }

    System.out.println("! = " + product);

    input.close();
  }
}
