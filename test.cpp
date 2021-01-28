#include <iostream>
#include <cstring>

char* say() {
	char a[] = "hola";
	if (std::strcmp(a, "hola") == 0)
		return (char*)"ii";
	else
		return (char*)"bbb";
}

int main() {
	std::cout << say();
}
