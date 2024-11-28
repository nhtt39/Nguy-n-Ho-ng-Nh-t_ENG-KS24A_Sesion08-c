#include <stdio.h>

int main() {
	//Bai tap 1
    int arr[] = {1, 2, 3, 4, 5}; 
    int n3 = sizeof(arr) / sizeof(arr[0]); 
    for (int i = n3 - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
    //Bai tap 2
    int arr1[] = {1, 4, 7, 9, 12, 15};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int x, found = 0;
    printf("\nNhap phan tu can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < n1; i++) {
        if (arr1[i] == x) {
            printf("Vi tri phan tu trong mang la %d\n", i);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Phan tu khong ton tai trong mang\n");
    }
    
    //Bai tap 3
    int n2;
    printf("Nhap hang va cot cho mang 2 chieu ");
    scanf("%d", &n2);
    int arr2[n2][n2];
    printf("Nhap cac gia tri cho mang 2 chieu:\n");
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < n2; j++) {
            printf("Nhap gia tri cho phan tu arr[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d\t ", arr2[i][j]);
        }
        printf("\n");
    }

	//Bai tap 4
	int arr3[3][3] = {{1, 5, 9},{2, 8, 4},{7, 3, 6}};
    int max = arr3[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr3[i][j] > max) {
                max = arr3[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    //Bai tap 5
    int arr4[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};  
    int sum = 0;   
    for (int i = 0; i < 4; i++) {
        sum += arr4[i][0];
        sum += arr4[i][3];
    }

    for (int j = 1; j < 3 ; j++) {
        sum += arr4[0][j];
        sum += arr4[3][j];
    }
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    //Bai tap 6
    int arr5[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};
    int sum1 = 0;
    printf("Cac phan tu tren duong cheo chinh cua ma tran la:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr5[i][i]);
        sum1 += arr5[i][i];
    }
    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", sum1);
    
    //Bai tap 7 giong bai 6
    
    //Bai tap 8
    int arr6[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};
    int sum2 = 0;
    printf("Cac phan tu tren duong cheo phu cua ma tran la:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr6[i][4 - i - 1]);
        sum2 += arr6[i][4 - i - 1];
    }
    printf("\nTong cac phan tu tren duong cheo phu la: %d\n", sum2);
    
    //Bai tap 9
    int arr7[] = {1, 3, 2, 3, 4, 1, 5, 3, 2};
    int n = sizeof(arr7) / sizeof(arr7[0]);
    int maxC = 0;
    int maxN;
    for (int i = 0; i < n; i++){
    	int count = 1;
    	for (int j = i + 1; j < n; j++){
    		if(arr7[i]==arr7[j]){
    			count ++;
    		}
    	if (count > maxC){
    		maxC = count;
    		maxN = arr7[i];
    	}
    	}
    }printf("Phan tu xuat hien nhieu nhat la : %d \n",maxN);
    printf("So lan xuat hien la : %d\n",maxC);
    
    return 0;
}

