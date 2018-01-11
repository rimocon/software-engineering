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
	FILE *fi,*fj,*fk;
	char eibun[200];
	char kotae [200];
	char nihonbun[200];
	char answer[200];
	char score[40];

	fi=fopen("toeic-eibun.txt","r");
	fj=fopen("toeic-nihonbun.txt","r");
	fk=fopen("toeic-kotae.txt","r");

	while(fgets(eibun,200,fi)!=0 && fgets(nihonbun,200,fj)!=0 && fgets(kotae,200,fk)!=0){
		printf("問題の英文:     %s",eibun);
		printf("問題の日本語訳: %s",nihonbun);
		printf("あなたの答え: ");
		fgets(answer,200,stdin);
		printf("解答: %s",kotae);
		if(strcmp(answer,kotae)==0){
			printf("正解\n");
		}else{
			printf("不正解\n");
		}
		
	}
	fclose(fi);
	fclose(fj);
	fclose(fk);

}

void eiken(){
	printf("sine\n");
}
//void exit(){
//	printf("sine\n");
//}




