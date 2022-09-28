#include <iostream>

void memset(void* src, char chr, size_t count)
{
	if (!src)
	{
		return;
	}
	char *ptr = (char *)src;
	while (count)
	{
		*ptr = chr;
		ptr++;
		count--;
	}
}

int main()
{
	char arr[] = "test arr";
	memset(arr, 'x', 3);
	std::cout << arr << std::endl;
	return 0;
}
