#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc,char* argv[])
{
	int ch,count=1;
	//�����ļ�ָ�� 
	FILE* pt;
	//�ж������ļ��Ƿ�ɹ� 
	if(argc ==3){
		//�ж��ܷ�ɹ����ļ�
		if((pt=fopen(argv[2],"r"))!=NULL){
			if(strcmp(argv[1],"-c")==0){//�����ַ��� 
			count=0;
			while((ch=getc(pt))!= EOF){ // EOF��ʾ�ļ����� 
				count++; 
			}
			printf("�ַ�����%d��\n",count);
		} 
		else{//���㵥���� 
			while((ch = getc(pt))!=EOF){
				if((ch==' ')||(ch == ','))
				count++;
			}
			printf("��������%d��\n",count); 
		}
			
		} 
		} 
		fclose(pt);
		return 0; 
		
	
 } 
