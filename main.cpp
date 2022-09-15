#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
	//typo N_ELEMENTS
    int *b = new int[NELEMENTS];
	//no ; at the end of the line
    std::cout << '1-100 ertekek duplazasa'
	//bad loop construction
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
	//bad loop construction
    for (int i = 0; i; i++)
    {
		//no value to display, no ; at the end of the line
        std::cout << "Ertek:"
    }
    std::cout << "Atlag szamitasa: " << std::endl;
	//var only declared, no value
    int atlag;
	//no ; at the end of the loop condition
    for (int i = 0; i < N_ELEMENTS, i++)
    {
		//no ;
        atlag += b[i]
    }
	// there's 
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
