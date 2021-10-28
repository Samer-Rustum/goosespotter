#include <iostream>

int main(){
    char c{0x02};

    c+= 0x30;
    printf("%x \n", c);
    c>>=4;
    printf("%x \n", c);
    return 0;
}
//100010
//1000100