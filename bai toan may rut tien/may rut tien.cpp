#include <stdio.h>

int main() {
int n, denom[] = {500000,200000,100000, 50000, 20000, 10000};
int num[] = {0,0, 0, 0, 0, 0};

printf("Nhap so tien can rut: ");
scanf("%d", &n);

for(int i=0; i<6; i++) {
if(n >= denom[i]) {
num[i] = n/denom[i];
n = n%denom[i];
}
}

printf("Danh sach so luong tung loai tien:\n");
for(int i=0; i<6; i++) {
printf("%d x %d\n", num[i], denom[i]);
}

return 0;
}
