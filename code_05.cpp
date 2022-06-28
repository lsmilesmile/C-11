#include <cstdio>
#include <cstdlib>
#include <cstring>

void fun() {
    std::cout<<"1" << std::endl;
}


void fun2() {
    std::cout<<"2" << std::endl;
}


void fun3() {
    std::cout << "3" << std::endl;
}


int main() {
    int c; // 用int而不是char来处理EOF
    FILE* pf = fopen("data.txt", "r");
    if (!pf) {
        perror("File opening failed\n");
        return -1;
    }

    // fgetc当读取失败时或者遇到文件结束时，都会返回EOF
    while ((c = fgetc(pf)) != EOF){
        putchar(c);
    }
    // 判断是为啥结束
    if (ferror(pf))
        puts("I/O error when reading.");
    else if (feof(pf))
        puts("Ends of file reached successfully\n");

    return 0;
}