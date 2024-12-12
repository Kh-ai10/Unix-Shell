#include <stdio.h>
#include <unistd.h>
#define MAX_LINE 80 /* Lệnh có độ dài tối đa */

int main(void) {
    char *args[MAX_LINE / 2 + 1]; /* Đối số dòng lệnh */
    int should_run = 1;          /* Cờ để xác định thời điểm thoát khỏi chương trình */

    while (should_run) {
        printf("osh> ");
        fflush(stdout);

        /**
         * Sau khi đọc dữ liệu đầu vào của người dùng, các bước thực hiện như sau:
         * (1) Phân nhánh một tiến trình con bằng fork().
         * (2) Tiến trình con sẽ gọi execvp().
         * (3) Tiến trình cha sẽ gọi wait() trừ khi lệnh bao gồm &.
         */
    }

    return 0;
}
