#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

#define DATAMAX 30

void toeic();
void eiken();
void exit();

typedef struct{
	char eibun[200];
	char kotae[200];
	char nihonbun[200];
	int  score;
}record;

record data[DATAMAX];

int main(){

	int i=0,score=0;
	FILE *fi,*fj,*fk;
	char answer[DATAMAX];

	fi=fopen("toeic-eibun.txt","r");
	fj=fopen("toeic-nihonbun.txt","r");
	fk=fopen("toeic-kotae.txt","r");

	for(i=0;i<DATAMAX;i++){
		fgets(data[i].eibun,200,fi);
		fgets(data[i].nihonbun,200,fj);
		fgets(data[i].kotae,200,fk);
	}
	fclose(fi);
	fclose(fj);
	fclose(fk);

	for(i=0;i<DATAMAX;i++){
		printf("%s",data[i].eibun);
		printf("%s",data[i].nihonbun);
		fgets(answer,DATAMAX,stdin);

		if(strcmp(answer,data[i].kotae)==0){
			printf("正解\n");
			score++;

		}else{
			printf("不正解\n");
		}
		printf("答え: %s",data[i].kotae);
	}
	printf("正解数は %d / %d \n",score,DATAMAX);


}






