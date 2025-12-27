#include <stdio.h>
int main(void)
{
	printf("=== 편의점 계산기 만들기 ===\n\n");

	int price, count, peopleCount, total;
	float lastPrice;
	printf("물건의 가격을 입력해주세요 : ");
	scanf_s("%d", &price);

	printf("몇 개를 사실 예정인가요 :");
	scanf_s("%d", &count);

	total = price * count;
	printf("총 가격은 %d입니다.\n", total);

	printf("몇 명에서 결제하실 예정인가요 : ");
	scanf_s("%d", &peopleCount);

	lastPrice = (float)total / peopleCount;
	printf("인당 내실 금액은 %f입니다.", lastPrice);

	return 0;
}