//#include<stdio.h>
//int my_strlen(char arr[])
//{
//	int count=0;
//	while(*arr!='\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	char tmp=arr[0];
//	int len=my_strlen(arr);
//	arr[0]=arr[len-1];
//    arr[len-1]='\0';
//	if(my_strlen(arr+1)>=2)
//	reverse_string(arr+1);
//	arr[len-1]=tmp;
//}
//int main()
//{
//	char arr[]="abcdef";
//	//int sz=sizeof(arr)/sizeof(arr[0])-1;
//	reverse_string(arr);
//	printf("%s ",arr);
//   return 0;
//}
//#include<stdio.h>
//double DigitSum(int a,int k)
//{
//	if(k==0)
//	{
//	   return 1;
//	}
//	else if(k<0)
//	{
//		return (1.0/(DigitSum(a,-k)));
//	}
//	else 
//	return DigitSum(a,(k-1))*a;
//}
//
//int main()
//{
//	int a=0,k=0;
//	scanf("%d %d",&a,&k);
//	printf("%lf ",DigitSum(a,k));
//	return 0;
//}

//#include<stdio.h>
// typedef struct stu
//{
//  char name[20];
//  short age;
//  char num[12];
//}stu;
// void print(stu* s)
// {
//	 printf("%s\n",s->name);
//	 printf("%d\n",s->age);
//	 printf("%s\n",s->num);
// }
//int main()
//{
//	// char arr[10]="hello bit";
//	stu s={"张三",20,"15533455948"};
//	print(&s);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[10]={0};
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		arr[i]=i;
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	int n=0;
//	int j=1;
//	int k=0;
//	for(n=1;n<=4;n++)
//	{
//		int j=1;
//	for(i=1;i<=n;i++)
//	{
//		j=i*j;
//	}
//	k=k+j;
//	}
//	printf("%d ",k);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	for(i=0;i<=12;i++)
//	{
//		printf("hehe\n");
//		arr[i]=0;
//	}
//	return 0;
//}

//#include<stdio.h>
////#define NDEBUG //禁用assert的调用
//#include<assert.h>
//
//char* my_strcpy( char*  arr1,const char*  arr2)
//{
//	char* ret=arr1;
//	assert(arr1!=NULL);
//	assert(arr2!=NULL);
//   while(*arr1++=*arr2++)
//   {
//	 ;
//   }
//   return ret;
//}
//int main()
//{
//	char arr1[]="###############";
//	char arr2[]="bit";
//	//int sz=sizeof(arr2)/sizeof(arr2[0]);
//	printf("%s\n",my_strcpy(arr1,arr2));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int cnt=5;
//	int puy=6;
// int*  tmp=&cnt;
// int*  cmp=&cnt;
// int*  * const p=&tmp;
// //*p=&puy;
// **p=6;
//	printf("%d ",cnt);
//}
//#include<stdio.h>
//#include<assert.h>
//size_t my_strlen(const char* arr)
//{
//	size_t count=0;
//	assert(arr);
//	while(*arr++)
//	{
//	   ++count;
//	}
//	return count;
//}
//int main()
//{
//	char arr[]="hello bit";
//	
//	printf("%d\n",my_strlen(arr));
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a=1999;
//	int b=2299;
//	int i=0;
//	int count=0;
//	for(i=0;i<=31;i++)
//	{
//		if((((a^b)>>i)&1)==1)
//			count++;
//	}
//	printf("%d\n",count);
//	return 0;

//#include <stdio.h>
//int main()
//{
//	int a=0;
//	int i=0,count=0;
//	scanf("%d",&a);
//	for(i=0;i<=31;i++)
//	{
//		if(((a>>i)&1)==1)
//			count++;
//	}
//	printf("%d\n",count);
//	return 0;
//}
//}
//#include<stdio.h>
//
//
//int main()
//{
//	int count=0;
//	size_t n=0;
//	scanf("%d",&n);
//	while(n)
//	{
//		if(n%2==1)
//			count++;
//		n/=2;
//	}
//	printf("%d\n",count);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a=1999;
//	int b=2299;
//	int i=a^b;
//	int count=0;
//	while(i)
//	{
//			count++;
//		i=i&(i-1);
//	}
//	printf("%d\n",count);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int n=10;
	int i=0;
	for(i=31;i>=1;i-=2)
	{
	
		printf("%d ",((n>>i)&1));
	}
	printf("\n");
	for(i=30;i>=0;i-=2)
	{
		printf("%d ",((n>>i)&1));
	}
	return 0;
}