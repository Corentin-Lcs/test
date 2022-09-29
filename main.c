#include <stdio.h>
#include <string.h>

int main(){
  char para1[50];
  char para2[50];
  char str1[] = "bonjour";
  char str2[] = "george";
  scanf("%s %s", para1, para2);
  if(strcmp(para1, str1) == 0 && strcmp(para2, str2) == 0){
    printf("tout le monde");
  }
  return 0;
}