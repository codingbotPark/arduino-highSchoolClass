// 라즈베리 파이에서 불 키고 끄기

char a = 5; // 1byte
int aa = 3; // 4byte

// ------------

char c[2][2][3] = {{{1,2,3},{4,5,6}},
                    {{7,8,9},{0,1,2}}};

// 요기서 {7,8,9} 의 8은
//*(a[0][1] + 1)    *을 붙여서 값

// {{7,8,9},{0,1,2}} 는 *(a + 1)

// ------------

// 포인터 배열 = 포인터가 저장된 배열 예) char *a[2]
// 배열 포인터 = 배열을 나타낸 포인터 예) a[1][1] = {0,1,2}

// ------------

char *d[2] = {"123","abc"}; // d[0]     d[0]+1