#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

//関数の定義

void toeic();
void eiken();
void exit();

int main(){
	int choice=0;
	printf("select mode\n");
	printf("1--ZETTAI　TOEIC　QUESTION\n");
	printf("2--ZETTAI　EIKEN　QUESTION\n");
	printf("3--exit\n");

	scanf("%i",&choice);

	switch(choice){

		case 1:
			toeic();
			break;
		case 2:
			eiken();
			break;
		//case 3:
		//	exit();
		//	break;
		default :
			printf("無効な入力です\n");
			break;
		}
}

void toeic(){
	int i;
	FILE *fi;
	char eibun[200];
	char kotae [200];
	char nihonbun[200];
	char seiseki[100][2];
	fi=fopen("toeic-eibun.txt","r");
	for(i=0;i<20;i++){
		fscanf(fi,"%s",&(eibun[i]));
	}
	fclose(fi);
	for(i=0;i<20;i++){
		printf("%s\n",eibun[i]);
	}
}

void eiken(){
	printf("sine\n");
	}
//void exit(){
//	printf("sine\n");
//}

	

	
