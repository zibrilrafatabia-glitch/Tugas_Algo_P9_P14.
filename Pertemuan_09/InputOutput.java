import java.util.Scanner;
public class InputOutput {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("--- P9: Input Output ---");
        System.out.print("Masukkan Nama: ");
        String nama = input.nextLine();
        System.out.println("Selamat Datang, " + nama);
    }
}