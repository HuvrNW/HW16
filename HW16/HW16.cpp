#include <iostream>
#include <ctime>
#include <cstdlib>

double mean(double a, double b);

template <typename T>
void fill_arr(T arr[], const int length, int begin, int end);

template <typename T>
void show_arr(T arr[], const int length);

double arrMeanValue(int arr[], const int length);

void powers(int n, int m);

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;

	// Task 1 F Mean()
	std::cout << "\t\tTask 1.\n F Mean().\n Enter two numbers: ";
	std::cin >> x >> y;
	std::cout << mean(x, y) << "\n\n";
	
	//Task 2 F arrMeanValue()
	std::cout << "\t\tTask 2.\n F arrMeanValue().\n Massiv: \n";
	 const int size2 = 10;
	int arr2[size2];
	fill_arr(arr2, size2, 0, 99);
	show_arr(arr2, size2);
	std::cout << " The average value of all elements = " << arrMeanValue(arr2, size2) << "\n\n";
	
	//Task 3 powers(N, M)
	std::cout << "\t\tTask 3.\n powers(N, M).\n Enter 2 numbers --> ";
	std::cin >> x >> y;
	powers(x, y);
	


	return 0;
}

double mean(double a, double b) {
	return (a + b) / 2;
}

template <typename T>
void fill_arr(T arr[], const int length, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end + 1 - begin) + begin;
} // Zapoln9et massiv

template <typename T>
void show_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
} // Vyvodit massiv

double arrMeanValue(int arr[], const int length) {
	double sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	return sum / length;
}

void powers(int n, int m) {
	int x = 1;
	std::cout << n << "^0" << " = 1 " << "\n";
	std::cout << n << "^1" << " = " << n << "\n";
	for (int i = 2; i <= m; i++) {
		x *= n;
		std::cout << n << "^" << i << " = " << x * n << "\n";
		
	}
}