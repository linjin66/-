#include<stdio.h>
int a,b[10][10],min=0,x[10][10],num=0,l=0;
void migong(int m,int n)
{
	if(m==a-2 && n==a-2)
	{
		if(l==0)//记录第一次走到终点路线的长度，将他赋值给min。 
		{
			min=num;
		}
		if(num<min)//将走到终点的长度与min来对比 
		{
			min=num;
		}
		l++;//走到终点路线条数 
		return;
	}
	//接下来是移动方位控制 
	if(b[m][n]==0 && x[m][n]==0)//向上走 
	{
		num++;//记录走过的步数 
		x[m][n]=1;//将走过的方位标记，防止下一次移动重复。 
		migong(m+1,n);//向上走 
		
		x[m][n]=0;//将这次方位标记 
		num--;
	}
	if(b[m][n]==0 && x[m][n]==0)//向下走 
	{
	    num++;//记录走过的步数 
		x[m][n]=1;//将走过的方位标记，防止下一次移动重复。 
		migong(m-1,n);//向上走 
	
		x[m][n]=0;//将这次方位标记 
		num--;
	}
	if(b[m][n]==0 && x[m][n]==0)//向右走 
	{
	    num++;//记录走过的步数 
		x[m][n]=1;//将走过的方位标记，防止下一次移动重复。 
		migong(m,n+1);//向上走 
		
		x[m][n]=0;//将这次方位标记 
		num--;
	}
	if(b[m][n]==0 && x[m][n]==0)//向左走 
	{
	    num++;//记录走过的步数 
		x[m][n]=1;//将走过的方位标记，防止下一次移动重复。 
		migong(m,n-1);//向上走 

		x[m][n]=0;//将这次方位标记 
		num--;
	}
}
int main()
{
	scanf("%d",&a);//输入迷宫长度 
	for(int c=0;c<a;c++)//构造迷宫图形 
	{
		for(int d=0;d<a;d++)
		{
			scanf("%d",&b[c][d]);
		}
	}
	migong(1,1);//将入口坐标传给函数 
	if(min) 
	printf("%d",min);
	else
	printf("No solution");
	
	
}

