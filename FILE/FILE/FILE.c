#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>



                                  // 文件的读取
// 1.打开文件
// 2.操作文件
// 3.关闭文件



    //文件指针 - FILE

  // 打开文件
  // 关闭文件
    // fopen - FILE * fopen ( const char * filename, const char * mode );
    // 
//int main()
//{
//    FILE* pf = fopen("E:\\code\\test.txt", "r");
//    if (pf == NULL)
//    {
//        printf("%s", strerror(errno));
//        return 1;
//    }  //打开失败
//    //读文件
//
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//}


   //写文件 - fputc - int fputc ( int character, FILE * stream )
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

    //读文件 - fgetc - int fgetc ( FILE * stream )
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
//    while ((ch=fgetc(pf)) != EOF)    //当读取失败则返回EOF
//    {
//        printf("%c", ch);
//    }
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

    //写一行数据 - fputs - int fputs ( const char * str, FILE * stream )
//int main()
//{
//    FILE* pf = fopen("E:\\code\\test.txt", "w");
//    if (pf == NULL)
//    {
//        printf("%s", strerror(errno));
//        return 1;
//    }
//    fputs("hello world\n", pf);   // 注意写文件会把文件之前的数据销毁 ， 如果不想销毁之前的文件就用 a , a为追加
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

    // 读一行数据 - fgets - char * fgets ( char * str, int num, FILE * stream )
//int main()
//{
//    FILE* pf = fopen("E:\\code\\test.txt", "r");
//    if (pf == NULL)
//    {
//        printf("%s", strerror(errno));
//        perror("fopen");  //这里也可以这样用perror函数，如果没有这个文件则会打印出 ':'加错误信息，这个fopen是自己加上去的，完整打印为 fopen: 错误信息
//        return 1;
//    }
//    char arr[20];
//    fgets(arr, 5, pf);  //读出hell，这里只会读出4个数据，因为这里会读出一个\0  // 读取失败返回NULL
//    printf("%s", arr);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


    //格式化输出函数 - fprintf - int fprintf ( FILE * stream, const char * format, ... )

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

    //格式化输入函数 - fscanf - int fscanf ( FILE * stream, const char * format, ... )
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
//    fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));  //从文件里读取数据
//    //printf("%s %d %f", s.arr, s.age, s.score); //打印到文件里
//    fprintf(stdout, "%s %d %f", s.arr, s.age, s.score);  //打印到屏幕上
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}




//任何一个C程序，只要运行起来就会默认打开3个流
//FILE* stdio - 标准输入流（键盘）
//FILE* stdout - 标准输出流（屏幕）
//FILE* stderr - 标准错误流（屏幕）



    //二进制输出 fwrite - size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream )
//struct S
//{
//    char arr[20];
//    int age;
//    float score;
//};
//int main()
//{
//    struct S s = { "lisi",25,50.4 };
//    //以二进制的形式写到文件中
//    FILE* pf = fopen("E:\\code\\test.txt", "wb");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //以二进制的方式写
//    fwrite(&s, sizeof(struct S), 1, pf);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

    //二进制输入 - fread - size_t fread ( void * ptr, size_t size, size_t count, FILE * stream )
//int main()
//{
//    struct S s = { "lisi",25,50.4 };
//    //以二进制的形式写到文件中
//    FILE* pf = fopen("E:\\code\\test.txt", "rb");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //以二进制的方式读
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
//    //把s中的格式化数据转化成字符串放到buf中
//    sprintf(buf, "%s %d %f", s.arr, s.age, s.score);
//    printf("%s",buf);
//    //从字符串buf中获取一个格式化的数据到tmp中
//    sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));
//    printf("%s %d %f", tmp.arr, tmp.age, tmp.score);
//    return 0; 
//}


    //文件的随机读写
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
    fseek(pf, 2, SEEK_SET);  //SEEK_SET为起始位置 ，中间的数字为偏移量
    int ch = fgetc(pf);
    printf("%c\n", ch); //c
    printf("%d", ftell(pf)); //3  //ftell可以计算文件当前指针的偏移量


    //fseek(pf, 2, SEEK_CUR);  //SEEK_CUR上次指针的位置
    //ch = fgetc(pf);
    //printf("%c", ch); //f
    // 
    // 
    //fseek(pf, -1, SEEK_END); //SEEK_END为末尾位置
    //ch = fgetc(pf);
    //printf("%c", ch); //f
    //printf("%d", ftell(pf)); //6

    rewind(pf);  //让文件指针回到起始位置
    fclose(pf);
    pf = NULL;
    return 0;
}