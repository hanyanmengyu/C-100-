//#include <stdio.h>
//int main()
//{
//    int day, month, year;
//    int sum = 0;
//    printf("\n�������ꡢ�¡��գ���ʽΪ����,��,�գ�0��\n");
//    scanf_s("%d,%d,%d", &year, &month, &day);  // ��ʽΪ��2015,12,10
//    switch (month) // �ȼ���ĳ����ǰ�·ݵ�������
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
//    sum = sum + day; // �ټ���ĳ�������
//    if ((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && month > 2) {// �ж��ǲ�������
//        sum++;
//    }
//    printf("������һ��ĵ� %d �졣\n", sum);
//    return 0;
//    
//}