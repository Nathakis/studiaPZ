#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

// ZAJÊCIA I
	

int main() {
	random_device rd;		//tylko raz na pocz¹tku
	mt19937_64 gen(rd());	//seed z rd
	//mo¿na te¿ tak:
	//mt19937::result_type seed = time(0);
	//mt19937_64 gen(seed);
	//generator p³aski w oparciu o typ <short>

	uniform_int_distribution<short>dis;

	//kilka liczb, konwertujemy na string

	for (auto n = 0; n < 10; ++n) {
		cout << dis(gen) << ' ' << to_string(dis(gen)) << ' ';
		endl(cout);
	}
}
