//#include"stdio.h"
//int main() {
//	double i;
//	double bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
//	printf("你的利润是多少:\n");
//	scanf_s("%lf", &i);//lf是double
//	bonus1 = 100000 * 0.1;//100000的津贴
//	bonus2 = bonus1 + 100000 * 0.075;//200000的津贴
//	bonus4 = bonus2 + 200000 * 0.05;//400000的津贴
//	bonus6 = bonus4 + 200000 * 0.03;//600000的津贴
//	bonus10 = bonus6 + 400000 * 0.015;//1000000的津贴
//	if (i <= 100000)
//	{
//		bonus = i * 0.1;
//	}
//	else if (i <= 200000)
//	{
//		bonus = bonus1 + (i - 100000) * 0.075;
//	}
//	else if (i <= 400000)
//	{
//		bonus = bonus2 + (i - 200000) * 0.05;
//	}
//	else if (i <= 600000)
//	{
//		bonus = bonus4 + (i - 400000) * 0.03;
//	}
//	else if (i <= 1000000)
//	{
//		bonus = bonus6 + (i - 600000) * 0.015;
//	}
//	else
//	{
//		bonus = bonus10 + (i - 1000000) * 0.01;
//	}
//	printf("奖金总数为：%f\n", bonus);
//	return 0;//int main 必须要有返回值
//}