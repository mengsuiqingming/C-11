#include <iostream>
#include <string>

//template <typename T>
auto print(std::ostream& os) -> decltype(os)
{
	return os;
}
	template <typename T, typename... Args>
auto print(std::ostream& os, const T& t, const Args&... rest) -> decltype(os)
{
	os << t;
	return print(os, rest...);
}

int main()
{
	print(std::cout,"XXY is studying  ", "---------------------->");
	print(std::cout, ' ',' ','C',"++");
	print(std::cout, "11  ", '\n');
	return 0;
}
