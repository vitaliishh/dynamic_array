#pragma once

#include <iostream>

using namespace std;

template<typename T> void d_deleteByIdx(T*& arr, int& size, int idx);
template<typename T1, typename T2> void d_insert(T1*& arr, int& size, int idx, T2 value);
template<typename T1, typename T2> void d_push_back(T1*& arr, int& size, T2 value);
template<typename T> void d_pop_back(T*& arr, int& size);
template<typename T1, typename T2> void d_push_front(T1*& arr, int& size, T2 value);
template<typename T> void d_pop_front(T*& arr, int& size);
template<typename T> void d_clear_all(T*& arr, int& size);
template <typename T> void d_printArr(T* arr, int size);


template<typename T>
inline void d_deleteByIdx(T*& arr, int& size, int idx) {

	T* newArr = new T[size - 1];

	int u = 0;

	for (int i = 0; i < size; i++)
	{
		if (i != idx)
		{
			newArr[u] = arr[i];
			u++;
		}

	}

	delete[] arr;

	size--;
	arr = newArr;
}

template<typename T1, typename T2>
inline void d_insert(T1*& arr, int& size, int idx, T2 value) {

	T1* newArr = new T1[size + 1];

	for (int i = 0; i < size + 1; i++)
	{

		if (i == idx)
		{
			newArr[i] = value;

			for (int j = i + 1; j < size + 1; j++)
			{
				newArr[j] = arr[j - 1];
			}

			break;
		}
		else
		{
			newArr[i] = arr[i];
		}
	}

	delete[] arr;

	size++;
	arr = newArr;
}

template<typename T1, typename T2>
inline void d_push_back(T1*& arr, int& size, T2 value) {

	T1* newArr = new T1[size + 1];

	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}

	newArr[size] = value;

	delete[] arr;

	size++;
	arr = newArr;
}

template<typename T>
inline void d_pop_back(T*& arr, int& size) {

	T* newArr = new T[size - 1];

	for (int i = 0; i < size - 1; i++)
	{
		newArr[i] = arr[i];
	}

	delete[] arr;

	size--;
	arr = newArr;
}

template<typename T1, typename T2>
inline void d_push_front(T1*& arr, int& size, T2 value) {
	T1* newArr = new T1[size + 1];

	newArr[0] = value;

	for (int i = 0; i < size; i++)
	{
		newArr[i + 1] = arr[i];
	}

	delete[] arr;

	size++;
	arr = newArr;

}

template<typename T>
inline void d_pop_front(T*& arr, int& size) {
	T* newArr = new T[size - 1];

	for (int i = 1; i < size; i++)
	{
		newArr[i - 1] = arr[i];
	}

	delete[] arr;

	size--;
	arr = newArr;
}

template<typename T>
inline void d_clear_all(T*& arr, int& size) {
	T* newArr = new T[0];

	delete[] arr;

	int n = size;

	for (int i = 0; i < n; i++)
	{
		size--;
	}

	arr = newArr;
}


template <typename T>
inline void d_printArr(T* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

