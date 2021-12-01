#pragma once
#ifndef __MAIN
#include<iostream>
#include<fstream>
#include <typeinfo>
#include <cstring>
#include <string>

using namespace std;

void heapify(int arr[], int n, int i, int& count_assign, unsigned __int64& count_cmp);
int range(int A[],int n);
void swap(int& first_value, int& second_value, int& assign, unsigned __int64& compare);

void SelectionSort(int A[],int n, int& assign,unsigned __int64 & comp);
void InsertionSort(int A[],int n, int& assign,unsigned __int64& comp);
void BubbleSort(int A[],int n, int& assign,unsigned __int64& comp);
void HeapSort(int A[],int& n, int& assign,unsigned __int64& comp);
void MergeSort(int A[],int n, int& assign,unsigned __int64& comp);
void QuickSort(int A[],int n, int& assign,unsigned __int64& comp);
void RadixSort(int A[],int n, int& assign,unsigned __int64& comp);
void ShakerSort(int A[],int n, int& assign,unsigned __int64& comp);
void ShellSort(int A[],int n, int& assign,unsigned __int64& comp);
void CountingSort(int A[],int n,int range, int& assign,unsigned __int64& comp);
void FlashSort(int A[],int n, int& assign,unsigned __int64& comp);

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}


void GenerateRandomData(int A[],int n);
void GenerateNearlySortedData(int A[],int n);
void GenerateSortedData(int A[],int n);
void GenerateReverseData(int A[],int n);

#endif // !__MAIN