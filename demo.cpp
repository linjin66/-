#include<stdio.h>
int a, y[10][10], x[10][10], min=0, num = 0, l = 0;
void migong(int m, int n)
{
	if (m == a - 2 && n == a - 2)
	{
		if (l == 0)//��¼��һ���ߵ��յ�·�ߵĳ��ȣ�������ֵ��min�� 
		{
			min = num;
		}
		if (num < min)//���ߵ��յ�ĳ�����min���Ա� 
		{
			min = num;
		}
		l++;//�ߵ��յ�·������ 
		return;
	} 
	if (x[m][n] == 0 && y[m][n] == 0)//������ 
	{
		num++;//��¼�߹��Ĳ��� 
		x[m][n] = 1;//���߹��ķ�λ��ǣ���ֹ��һ���ƶ��ظ��� 
		migong(m + 1, n);//������ 

		x[m][n] = 0;//����η�λ��� 
		num--;
	}
	if (x[m][n] == 0 && y[m][n] == 0)//������ 
	{
		num++;
		x[m][n] = 1; 
		migong(m - 1, n); 

		x[m][n] = 0; 
		num--;
	}
	if (x[m][n] == 0 && y[m][n] == 0)//������ 
	{
		num++; 
		x[m][n] = 1;
		migong(m, n + 1); 

		x[m][n] = 0; 
		num--;
	}
	if (x[m][n] == 0 && y[m][n] == 0)//������ 
	{
		num++; 
		x[m][n] = 1; 
		migong(m, n - 1);

		x[m][n] = 0;
		num--;
	}
}
int main()
{
	scanf_s("%d", &a);//�����Թ����� 
	for (int c = 0; c < a; c++)//�����Թ�ͼ�� 
	{
		for (int d = 0; d < a; d++)
		{
			scanf_s("%d", &y[c][d]);
		}
	}
	migong(1, 1);//��������괫������ 
	if (min)
		printf("%d", min);
	else
		printf("No solution");


}
