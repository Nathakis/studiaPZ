#include <iostream>
#include <string>

using namespace std;

int main() {
	const char* t = "tekst do inicjalizacji";

	string s1;
	s1 = t;
	string s2(s1);
	string s3(t, 8);
	string s4(s2, 4, 8);
	string s5(100, '*');
	string s6 = "konstrukcja";
	
}
