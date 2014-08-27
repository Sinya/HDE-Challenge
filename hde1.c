#include <stdio.h>
// int sum = 0;

int sum_num(int count){
    int num;
    if (count > 0) {
        scanf("%d",&num);
        if (num > 0)
            return num*num + sum_num(count-1);
        else
            return sum_num(count-1);
    }
    else {
        return 0;
    }
}

void read_case(int time){
    int num_count;
    if (time > 0) {
        scanf("%d",&num_count);
        printf("%d\n",sum_num(num_count));
        read_case(time-1);
    }
    else {
        return;
    }
}

int main (){
    int time;
    scanf("%d",&time);
    read_case(time);
}