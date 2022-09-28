#include <iostream>

void memcpy(void* src, void* dst, size_t len)
{
	if (!src || !dst)
		return;
	char* ps = (char*)src;
	char* pd = (char*)dst;
	while (len)
	{
		*pd = *ps;
		pd++;
		ps++;
		len--;
	}
}

int main()
{
	char arr1[] = "test arr";
	char arr2[] = "     ";
	memcpy(arr1, arr2, 4);
	std::cout << arr1 << std::endl << arr2 << std::endl;
	return 0;
}

