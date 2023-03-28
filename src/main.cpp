#include <iostream>
#include <liste.h>


int main(void)
{
	Cellule a{25.5};
	Cellule b{10.16,&a,NULL};

	std::cout << a.getValue() << " : " << b.getPreview()->getValue() << "\n";

	return 0;
}
