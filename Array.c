#include <stdio.h>

main() {
	int i = 10, j = 12, k = 13, l = 19, m = 21; //10으로 초기화, 정수 선언, 변수 5개

	int intArray[5][10] = { {10, 12, 13, 19, 21, 33}, 
		{ 13, 45, 56 } };
	//Array = 하나의 변수에 n개를 모두 저장, [10][5][10]면 500개 저장가능
//앞줄은 변수선언
		

	printf("intArray 크기는 %d 입니다\n", sizeof(intArray));
	printf("정수형 변수의 크기는 %d입니다\n", sizeof(i));
	printf("intArray 배열 변수에는 %d개의 정수를 저장할 수 있습니다.\n", sizeof(intArray)/sizeof(int));

	printf("변수 j의 값은 %d입니다\n", j);
	i = 11; //변수값 11로 바꿈
	j = k;

	printf("배열 intArray[1][3]의 2번째 값은 %d입니다\n", intArray[1][3]); //\n=줄바꿈, [1][2]면 56출력
	intArray[1][3] = 11;
	printf("배열 intArray[1][3]의 2번째 값은 %d입니다\n", intArray[1][3]);

	intArray[1][2] = 11; //인덱스는 항상 0에서 부터 시작, 1이면 두번째 파트
	intArray[1][3] = k; //13의 값이 바뀜

	m = intArray[1][4];

	m = intArray[1][5]; //인덱스를 벗어낫기 때문에 값이 나오지 않음, 영역을 벗어나면 x



}