#include <stdio.h>
char input[1000];
int count[26]={0};
int i=0;

int main(){
	printf("Input a Line:\n");
	fgets(input,1000,stdin);
	//printf("convert to lower case:%s\n",input);
	//printf("%d\n",input[1]);
	printf("Convert to lower case:");
	while(input[i]!=10){
		printf("%c",input[i]|=0x20);
		if (input[i]>96) count[input[i]-97]++;	
		i++;
	}
	printf("\n");
	for (i=0;i<26;i++){
		if(count[i]>0) printf("%c have appeared %d time.\n",i+97,count[i]);
	}
	return 0;
}
