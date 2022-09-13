
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        while (sc.hasNext()) {

            int num = sc.nextInt();
            int[] arr = new int[num+1];

            for (int i = 1; i < num+1; i++) {
                arr[0] = num;
                arr[i] = sc.nextInt();
            }

            if (isJolly(arr)) {
                System.out.println("Jolly");
            } else {
                System.out.println("Not Jolly");
            }
        }
        //Jolly 알고리즘 : 수열의 n - 1 까지의 인접한 수의 차의 절대값이 모두 수열 안에 있을때 Jolly라고 한다.

        
    }

    public static boolean isJolly(int[] arr){
        int difference = 0 ;
        int isJolly[] = new int[arr[0]];
        for(int i = 1 ; i < isJolly.length ;i++) {
            difference = (int)Math.abs(arr[i] - arr[i+1] );
            if(difference > 0 && difference < isJolly.length){
                if(isJolly[difference] == 1)
                    return false;
                else
                    isJolly[difference] += 1;
            } else {
                return false;
            }
        }
        return true;
    }
}
