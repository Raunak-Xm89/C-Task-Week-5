// Raunak Thapa Magar Section 37G
#include <stdio.h>

int EvenOdd();
int marks();
void ArraySum();
void ArraysumSub();
void TopMarks();
void RowSum();
int main() {
    // You may call the functions as you like
    return 0;
}
int EvenOdd(){
    int arr [] = {1,2,3,4,5,6,};
    int EvenCount = 0, OddCount = 0,Zero = 0;

    for (int i = 0; i < ((sizeof(arr)/sizeof (arr[0])));i++ ){
        if(arr[i]== 0){
            Zero++;
        }
        else if(arr[i]%2 == 0){
            EvenCount++;
        } else{
            OddCount++;
        }
    }
    printf("The Array has %d Even numbers and %d odd numbers, There are %d 0s\n",EvenCount,OddCount,Zero);

}
int marks(){
    int arr [] ={} ;
    int total =0;
    for (int i = 1; i <=5; ++i) {
        printf("Enter the Marks for Student %d\n", i);
        for (int j = 0; j < 3; ++j) {
            int m = 0;
            int c = 1;
            printf("Enter the marks for Subject %d for Student %i\n",c,i);
            c++;
            scanf("%d",&m);
            total = total +m;
            arr[j] = m;
        }
        int avg = total/3;
        printf("The average marks of student %d is %d and the total is %d\n",i,avg,total);
    }
}
int Arraysumsub(int arr []){
    int sum = 0;
    for (int i = 0; i < 5 ; ++i) {
        sum = sum + arr[i];
    }
    return sum;
}
void ArraySum(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {6,7,8,9,11};
    int arrSum[] ={};
    int arr1sum = Arraysumsub(arr1);
    int arr2sum = Arraysumsub(arr2);
    arrSum[0] = arr1sum;
    arrSum[1] = arr2sum;
    for (int i = 0; i < 2 ; ++i) {
        printf("%d ",arrSum[i]);

    }
}
void TopMarks(){
    int marks [] ={1,2,3,4,5};
    int tmax= 0;
    for (int i = 0; i < (sizeof(marks)/sizeof (marks[0]));i++) {
        if (marks[i]>=tmax){
            tmax = marks[i];
        }
    }
    printf("The highest marks is %d\n",tmax);
}
void RowSum(){
    int arr [3][3] = {{1,2,3,},
                      {4,5,6},
                      {7,8,9}
    };
    int sum,r;
    for(int row = 0; row < (sizeof(arr)/sizeof (arr[0])); row++){
        r = row+1;
        int sum = 0;
        for (int col = 0; col < sizeof (arr)/sizeof (arr[0]); ++col) {
             sum = arr[row][col] + sum;
        }
        printf("The sum of row no. %d is %d\n",r,sum);
        r++;
    }
}
