#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
	setlocale(LC_ALL, "RU");
	int n, m;

	// ������ 1. ���������� ������ N ���������
	/*std::cout << " ������ 1.\n ����������� ������:\n";
	const int size1 = 10;
	int arr1[size1]{};

	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % 10 + 1;// [1..10]
		std::cout << arr1[i] << ' ';
	}
	std::cout << std::endl;

	std::cout << " ������� ���������� ��������� ��� ����������: ";
	std::cin >> n;

	while (n < 2 || n > size1) {
		std::cout << " ������ �����! ��������� ���� -> ";
		std::cin >> n;
	}
	// ����������� ����������.
	for (int i = n - 1; i > 0; i--)
		for (int j = 0; i < j; i++)
			if (arr1[j] > arr1[j + 1])
				std::swap(arr1[j], arr1[j + 1]);

	std::cout << " �������� ������: \n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";
	*/

	// ������ 2. ����������� � ������.
	/*std::cout << " ������ 2.\n ����������� � ������: \n";
	const int january_days = 31;
	int january_temperature[january_days]{};
	for (int day_number = 0; day_number < january_days; day_number++) {
		january_temperature[day_number] = rand() % (-5 + 1 - (-30)) + (-30);
		std::cout << january_temperature[day_number] << ", ";
	}
	std::cout << "\b\b.\n ������� ����� -> ";
	std::cin >> n;
	int sum = 0;// ����� ���������� ������
	int counter = 0;// ��� �������� ���-�� ���������� ������ N
	for (int day_number = 0; day_number < january_days; day_number++) {
	sum += january_temperature[day_number];
	if (january_temperature[day_number] < n)
		counter++;
}
	std::cout << " C�. �����������: " << sum / (january_days) << std::endl;
	std::cout << " ���-�� ���� ����� ����������� ���� n " << n << ": " << counter << " \n\n";
	*/

	// ������ 3. ��������� � ��������.
	/*std::cout << " ������ 3.\n ������� ������ ���������-> ";
	std::cin >> n;
	std::cout << " ������� ����� ���������-> ";
	std::cin >> m;

	const int size3 = 20;
	int arr3[size3]{};

	std::cout << " ����:\n";
	srand(time(NULL));
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 100;
		//if (arr3[i] >= n && arr3[i] <= m)
		//	std::cout << i + 1 << ". " << arr3[i] << "!\n";
		//else
		//	std::cout << i + 1 << ". " << arr3[i] << "\n";
		std::cout << i + 1 << ". " << arr3[i] << (arr3[i] >= n && arr3[i] <= m ? "!" : "") << '\n';
	}
	*/






	return 0;
}