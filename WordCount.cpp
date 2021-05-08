#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc,char* argv[])
{
	int ch,count=1;
	//声明文件指针 
	FILE* pt;
	//判断输入文件是否成功 
	if(argc ==3){
		//判断能否成功打开文件
		if((pt=fopen(argv[2],"r"))!=NULL){
			if(strcmp(argv[1],"-c")==0){//计算字符数 
			count=0;
			while((ch=getc(pt))!= EOF){ // EOF表示文件结束 
				count++; 
			}
			printf("字符数：%d个\n",count);
		} 
		else{//计算单词数 
			while((ch = getc(pt))!=EOF){
				if((ch==' ')||(ch == ','))
				count++;
			}
			printf("单词数：%d个\n",count); 
		}
			
		} 
		} 
		fclose(pt);
		return 0; 
		
	
 } 
