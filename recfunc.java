public class Main {
    public static String reverseString(String str) {
        if (str.isEmpty()) return "";
        return reverseString(str.substring(1)) + str.charAt(0);
    }
}
