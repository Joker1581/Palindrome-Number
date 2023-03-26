#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// int digits_of_num(int num){
//     int i = 0;
//     while (num > 0)
//     {
//         /* code */
//         num /= 10;
//         i++;
//     }
//     return i;
// }

//递归的方式
// void reverse_string(char* arr)
// {
// 	int len = strlen(arr);
// 	char tmp = *arr;
// 	*arr = *(arr+len-1);
 
// 	*(arr+len-1) = '\0';
// 	if(strlen(arr+1)>=2)
// 		reverse_string(arr+1);
 
// 	*(arr+len-1) = tmp;
// }

bool isPalindrome(int x){
    if(x<0 || (x!=0 && x%10) ==0 ) return false;
    int check=0;
    while(x>check){
        check = check*10 + x%10;
        x/=10;
    }
    return (x==check || x==check/10);
}

int main(){
    printf("%d", isPalindrome(123));
    
}