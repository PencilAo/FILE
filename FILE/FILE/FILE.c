#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>



                                  // �ļ��Ķ�ȡ
// 1.���ļ�
// 2.�����ļ�
// 3.�ر��ļ�



    //�ļ�ָ�� - FILE

  // ���ļ�
  // �ر��ļ�
    // fopen - FILE * fopen ( const char * filename, const char * mode );
    // 
//int main()
//{
//    FILE* pf = fopen("E:\\code\\test.txt", "r");
//    if (pf == NULL)
//    {
//        printf("%s", strerror(errno));
//        return 1;
//    }  //��ʧ��
//    //���ļ�
//
//    //�ر��ļ�
//    fclose(pf);
//    pf = NULL;
//}


   //д�ļ� - fputc - int fputc ( int character, FILE * stream )
//int main()
//{
//    FILE* pf = fopen("E:\\code\\test.txt", "w");
//    if (pf == NULL)
//    {
//        printf("%s", strerror(errno));
//        return 1;
//    }
//    char i;
//    for (i = 'a'; i <= 'z'; i++)
//    {
//        fputc(i, pf);
//    }
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

    //���ļ� - fgetc - int fgetc ( FILE * stream )
//int main()
//{
//    FILE* pf = fopen("E:\\code\\test.txt", "r");
//    if (pf == NULL)
//    {
//        printf("%s", strerror(errno));
//        return 1;
//    }
//    //int ch = fgetc(pf);
//    //printf("%c", ch);
//    int ch;
//    while ((ch=fgetc(pf)) != EOF)    //����ȡʧ���򷵻�EOF
//    {
//        printf("%c", ch);
//    }
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

    //дһ������ - fputs - int fputs ( const char * str, FILE * stream )
//int main()
//{
//    FILE* pf = fopen("E:\\code\\test.txt", "w");
//    if (pf == NULL)
//    {
//        printf("%s", strerror(errno));
//        return 1;
//    }
//    fputs("hello world\n", pf);   // ע��д�ļ�����ļ�֮ǰ���������� �� �����������֮ǰ���ļ����� a , aΪ׷��
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

    // ��һ������ - fgets - char * fgets ( char * str, int num, FILE * stream )
//int main()
//{
//    FILE* pf = fopen("E:\\code\\test.txt", "r");
//    if (pf == NULL)
//    {
//        printf("%s", strerror(errno));
//        perror("fopen");  //����Ҳ����������perror���������û������ļ�����ӡ�� ':'�Ӵ�����Ϣ�����fopen���Լ�����ȥ�ģ�������ӡΪ fopen: ������Ϣ
//        return 1;
//    }
//    char arr[20];
//    fgets(arr, 5, pf);  //����hell������ֻ�����4�����ݣ���Ϊ��������һ��\0  // ��ȡʧ�ܷ���NULL
//    printf("%s", arr);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


    //��ʽ��������� - fprintf - int fprintf ( FILE * stream, const char * format, ... )

//struct S
//{
//    char arr[20];
//    int age;
//    float score;
//};
//int main()
//{
//    struct S s = { "lisi",20,50.3 };
//    FILE* pf = fopen("E:\\code\\test.txt", "w");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    printf("%s %d %f", s.arr, s.age, s.score);
//    fprintf(pf,"%s %d %f",s.arr,s.age,s.score);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

    //��ʽ�����뺯�� - fscanf - int fscanf ( FILE * stream, const char * format, ... )
//int main()
//{
//    struct S s = {0};
//    FILE* pf = fopen("E:\\code\\test.txt", "r");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
////  scanf("%s %d %f", s.arr, &(s.age), &(s.score));
//    fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));  //���ļ����ȡ����
//    //printf("%s %d %f", s.arr, s.age, s.score); //��ӡ���ļ���
//    fprintf(stdout, "%s %d %f", s.arr, s.age, s.score);  //��ӡ����Ļ��
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}




//�κ�һ��C����ֻҪ���������ͻ�Ĭ�ϴ�3����
//FILE* stdio - ��׼�����������̣�
//FILE* stdout - ��׼���������Ļ��
//FILE* stderr - ��׼����������Ļ��



    //��������� fwrite - size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream )
//struct S
//{
//    char arr[20];
//    int age;
//    float score;
//};
//int main()
//{
//    struct S s = { "lisi",25,50.4 };
//    //�Զ����Ƶ���ʽд���ļ���
//    FILE* pf = fopen("E:\\code\\test.txt", "wb");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //�Զ����Ƶķ�ʽд
//    fwrite(&s, sizeof(struct S), 1, pf);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

    //���������� - fread - size_t fread ( void * ptr, size_t size, size_t count, FILE * stream )
//int main()
//{
//    struct S s = { "lisi",25,50.4 };
//    //�Զ����Ƶ���ʽд���ļ���
//    FILE* pf = fopen("E:\\code\\test.txt", "rb");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //�Զ����Ƶķ�ʽ��
//    fread(&s, sizeof(struct S), 1, pf);
//    printf("%s %d %f", s.arr, s.age, s.score);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}
//
//struct S
//{
//    char arr[20];
//    int age;
//    float score;
//};
//int main()
//{
//    struct S s = { "lisi",25,26.6 };
//    struct S tmp = { 0 };
//    char buf[100];
//    //��s�еĸ�ʽ������ת�����ַ����ŵ�buf��
//    sprintf(buf, "%s %d %f", s.arr, s.age, s.score);
//    printf("%s",buf);
//    //���ַ���buf�л�ȡһ����ʽ�������ݵ�tmp��
//    sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));
//    printf("%s %d %f", tmp.arr, tmp.age, tmp.score);
//    return 0; 
//}


    //�ļ��������д
// 1.fseek
// 2.ftell
// 3.rewind


       // fseek - int fseek ( FILE * stream, long int offset, int origin );
int main()
{
    FILE* pf = fopen("E:\\code\\test.txt", "r"); //abcdef
    if (pf == NULL)
    {
        printf("%s", strerror(errno));
        return 1;
    }
    //ch = fgetc(pf);
    //printf("%c", ch); //a
    //ch = fgetc(pf);
    //printf("%c", ch); //b
    fseek(pf, 2, SEEK_SET);  //SEEK_SETΪ��ʼλ�� ���м������Ϊƫ����
    int ch = fgetc(pf);
    printf("%c\n", ch); //c
    printf("%d", ftell(pf)); //3  //ftell���Լ����ļ���ǰָ���ƫ����


    //fseek(pf, 2, SEEK_CUR);  //SEEK_CUR�ϴ�ָ���λ��
    //ch = fgetc(pf);
    //printf("%c", ch); //f
    // 
    // 
    //fseek(pf, -1, SEEK_END); //SEEK_ENDΪĩβλ��
    //ch = fgetc(pf);
    //printf("%c", ch); //f
    //printf("%d", ftell(pf)); //6

    rewind(pf);  //���ļ�ָ��ص���ʼλ��
    fclose(pf);
    pf = NULL;
    return 0;
}