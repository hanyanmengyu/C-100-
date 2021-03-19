//#include <stdio.h>
//int main()
//{
//    int day, month, year;
//    int sum = 0;
//    printf("\n请输入年、月、日，格式为：年,月,日（0）\n");
//    scanf_s("%d,%d,%d", &year, &month, &day);  // 格式为：2015,12,10
//    switch (month) // 先计算某月以前月份的总天数
//    {
//    case 1:sum = 0; break;
//    case 2:sum = 31; break;
//    case 3:sum = 59; break;
//    case 4:sum = 90; break;
//    case 5:sum = 120; break;
//    case 6:sum = 151; break;
//    case 7:sum = 181; break;
//    case 8:sum = 212; break;
//    case 9:sum = 243; break;
//    case 10:sum = 273; break;
//    case 11:sum = 304; break;
//    case 12:sum = 334; break;
//    default:printf("data error"); break;
//    }
//    sum = sum + day; // 再加上某天的天数
//    if ((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && month > 2) {// 判断是不是闰年
//        sum++;
//    }
//    printf("这是这一年的第 %d 天。\n", sum);
//    return 0;
//    
//}