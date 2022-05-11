#include <stdio.h>
long long add(int a, int b);
long long mul(int a, int b);
long long sub(int a, int b);

int main() {
	char c;
	int a, b;
	scanf("%c %d %d", &c, &a, &b);
	long long result = 0;
	switch(c){
		case '+':
			result = add(a,b);
			printf("%d + %d = %lld\n", a, b, add(a, b));
			break;
		case '-':
			result = sub(a,b);
			printf("%d - %d = %lld\n", a, b, sub(a, b));
			break;
		case '*':
			result = mul(a,b);
			printf("%d * %d = %lld\n", a, b, mul(a, b));
			break;
	}
}

