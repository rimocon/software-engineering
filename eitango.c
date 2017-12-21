#include<stdio.h>

//関数の定義
void eiken();
void toeic();
void exit();

char eibun[200];
char kotae [200];
char nihonbun[200];
char seiseki[100][2];
int main(){
	int choice=0;
	printf("select mode\n");
	printf("1--ZETTAI　TOEIC　QUESTION\n");
	printf("2--ZETTAI　EIKEN　QUESTION\n");
	printf("3-- exit\n");

	scanf("%i",&choice);

	switch(choice){

		case 1:
			toeic();
			break;
		case 2:
			eiken();
			break;
		case 3:
			exit();
			break;
		default :
			printf("無効な入力です\n");
			break;
		}
}

void toeic(){
	int i,j,k;
	FILE *fi,*fj,*fk;
	fi=fopen("toeic-eibun.txt","r");
	while(fscanf(fi,"%s",&eibun[i])!=EOF){
		i++;
	}
	fclose(fi);

	fj=fopen("toeic-nihonbun.txt","r");
	while(fscanf(fj,"%s",&nihonbun[j])!=EOF){
		j++;
	}
	fclose(fj);

	fk=fopen("toiec-kotae.txt","r");
	while(fscanf(fk,"%s",&kotae[k])!=EOF){
		k++;
	}
	fclose(fk);
	printf("SINE\n");
	//for(i=0;i<200;i++){
	//	printf("%s",eibun[i]);
}

	
void eiken(){
}
