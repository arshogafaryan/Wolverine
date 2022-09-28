#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream src_file;
	std::fstream dst_file;
	std::string buf;
	std::string line;
	std::string str;
	src_file.open("text.txt");
	dst_file.open("out.txt");
	if (!src_file.is_open())
	{
		std::cout << "File wasn't oppened" << std::endl;
	}

	int i = 0;
	bool cond1, cond2, cond3;
	while (std::getline(src_file, buf))
	{
		i = 0;
		while (buf[i] != '\0') {
		cond1 = buf[i + 1] == ' ' || buf[i + 1] == ',' || buf[i + 1] == '\t';
		cond2 = buf[i] == ' ' || buf[i] == ',' || buf[i] == '\t';
		cond3 = buf[i] != ' ' && buf[i] != ',' && buf[i] != '\t';
		if (cond1 && cond3)
		{
			dst_file << buf[i] << '\n';
			i++;
			continue;
		}
		if (cond2)
		{
			i++;
			continue;
		}
		if (cond3)
		{
			dst_file << buf[i];
			i++;
			continue;
		}
		i++;
		}
		dst_file << '\n';
	}
}
