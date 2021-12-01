#include"Main.h"
#include"./Sort/SelectionSort.cpp"
#include"./Sort/InsertionSort.cpp"
#include"./Sort/BubbleSort.cpp"
#include"./Sort/HeapSort.cpp"
#include"./Sort/MergeSort.cpp"
#include"./Sort/QuickSort.cpp"
#include"./Sort/ShakerSort.cpp"
#include"./Sort/ShellSort.cpp"
#include"./Sort/Coutingsort.cpp"
#include"./Sort/FlashSort.cpp"
#include"./Sort/RadixSort.cpp"
#include"DataGenerator.cpp"
#include<chrono>

void Amode(int n,char** argv)
{
    //ComandLine2
    if ( n == 4)
    {
        //...
        //Parsing Option
        string Algorithm = argv[0];
        int GivenInput = stoi(argv[1]);
        string InputOrder = argv[2];
        string OutputParam = argv[3];

        string order;

        //Init Array
        int A[GivenInput];
        memset(A,0,sizeof(A));

        if ( InputOrder == "-rand")
        {
            GenerateRandomData(A,GivenInput);
            order = "Randomize";
        }
        else if (InputOrder == "-nsorted")
        {
            GenerateNearlySortedData(A,GivenInput);
            order = "Nearly Sorted";
        }
        else if (InputOrder == "-sorted")
        {
            GenerateSortedData(A,GivenInput);
            order = "Sorted";
        }
        else if (InputOrder == "-rev")
        {
            GenerateReverseData(A,GivenInput);
            order = "Reverse";
        }

        //Generate input array
        ofstream f;
        f.open("input.txt");
        f<<GivenInput<<endl;
        for (int i = 0; i < GivenInput; i++) f<<A[i]<<" ";
        f.close();

        //Sorting
        unsigned __int64 comparison = 0;
        int temp = 0;
        double runtime = 0.0;
        ofstream fo;
        fo.open("output.txt");
        if (Algorithm == "selection-sort")
        {
            auto start = chrono::steady_clock::now();
            SelectionSort(A,GivenInput,temp,comparison); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count();
            fo<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) fo<<A[i]<<" ";
        }
        else if (Algorithm == "insertion-sort")
        {
            auto start = chrono::steady_clock::now();
            InsertionSort(A,GivenInput,temp,comparison); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count();
            fo<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) fo<<A[i]<<" ";
        }
        else if (Algorithm == "bubble-sort")
        {
            auto start = chrono::steady_clock::now();
            BubbleSort(A,GivenInput,temp,comparison); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count();
            fo<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) fo<<A[i]<<" ";
        }
        else if (Algorithm == "heap-sort")
        {
            auto start = chrono::steady_clock::now();
            HeapSort(A,GivenInput,temp,comparison); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count();
            fo<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) fo<<A[i]<<" ";
        }
        else if (Algorithm == "merge-sort")
        {
            auto start = chrono::steady_clock::now();
            MergeSort(A,GivenInput,temp,comparison); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count();
            fo<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) fo<<A[i]<<" ";
        }
        else if (Algorithm == "quick-sort")
        {
            auto start = chrono::steady_clock::now();
            QuickSort(A,GivenInput,temp,comparison); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count();
            fo<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) fo<<A[i]<<" ";
        }
        else if (Algorithm == "radix-sort")
        {
            auto start = chrono::steady_clock::now();
            RadixSort(A,GivenInput,temp,comparison); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count();
            fo<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) fo<<A[i]<<" ";
        }
        else if (Algorithm == "shaker-sort")
        {
            auto start = chrono::steady_clock::now();
            ShakerSort(A,GivenInput,temp,comparison); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count();
            fo<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) fo<<A[i]<<" ";
        }
        else if (Algorithm == "shell-sort")
        {
            auto start = chrono::steady_clock::now();
            ShellSort(A,GivenInput,temp,comparison); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count();
            fo<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) fo<<A[i]<<" ";
        }
        else if (Algorithm == "counting-sort")
        {
            auto start = chrono::steady_clock::now();
            CountingSort(A,GivenInput,range(A,GivenInput),temp,comparison); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count();
            fo<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) fo<<A[i]<<" ";
        }
        else if (Algorithm == "flash-sort")
        {
            auto start = chrono::steady_clock::now();
            FlashSort(A,GivenInput,temp,comparison); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count();
            fo<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) fo<<A[i]<<" ";
        }

        //Output Console
        cout<<"ALGORITHM MODE"<<endl;
        cout<<"Algorithm: "<<Algorithm<<endl;
        cout<<"Input size "<<GivenInput<<endl;
        cout<<"Input order: "<<order<<endl;
        cout<<"-----------------------"<<endl;
        if (OutputParam == "-time") cout<<"Running time: "<<runtime<<endl;
        else if (OutputParam == "-comp") cout<<"Comparison: "<<comparison<<endl;
        else if (OutputParam == "-both")
        {
            cout<<"Running time: "<<runtime<<endl;
            cout<<"Comparison: "<<comparison<<endl;
        }
        fo.close();
    }
    //CommandLine 3
    else if (is_number(argv[1]) == 1)
    {
        //Parsing Option

        string Algorithm = argv[0];
        int GivenInput = stoi(argv[1]);
        string OutputParam = argv[2];

        int check = 1;

        //Comparison and RUntime;
        unsigned __int64 Rcomp = 0;double Rrun = 0.0;
        unsigned __int64 NScomp = 0;double NSrun = 0.0;
        unsigned __int64 Scomp = 0;double Srun = 0.0;
        unsigned __int64 REcomp = 0;double RErun = 0.0;

         //Init Array
        int A[GivenInput];
        memset(A,0,sizeof(A));
        //Sorting
        ofstream fo;
        fo.open("Output.txt");
        if (Algorithm == "selection-sort")
        {
            Rcomp = 0; Rrun = 0.0;
            NScomp = 0; NSrun = 0.0;
            Scomp = 0; Srun = 0.0;
            REcomp = 0; RErun = 0.0;
            int temp = 0;

            int R[GivenInput]; memset(R,0,sizeof(R));GenerateRandomData(R,GivenInput);
            ofstream f1;
            f1.open("input_1.txt");
            f1<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f1<<R[i]<<" ";
            auto start = chrono::steady_clock::now();
            SelectionSort(R,GivenInput,temp,Rcomp); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            Rrun = chrono::duration <double, milli> (diff).count();

            int NS[GivenInput]; memset(NS,0,sizeof(NS));GenerateNearlySortedData(NS,GivenInput);
            ofstream f2;
            f2.open("input_2.txt");
            f2<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f2<<A[i]<<" ";
            auto start1 = chrono::steady_clock::now();
            SelectionSort(NS,GivenInput,temp,NScomp); 
            auto end1 = chrono::steady_clock::now();
            auto diff1 = end1 - start1;
            NSrun = chrono::duration <double, milli> (diff1).count();

            int S[GivenInput]; memset(S,0,sizeof(S));GenerateSortedData(S,GivenInput);
            ofstream f3;
            f3.open("input_3.txt");
            f3<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f3<<S[i]<<" ";
            auto start2 = chrono::steady_clock::now();
            SelectionSort(S,GivenInput,temp,Scomp);
            auto end2 = chrono::steady_clock::now();
            auto diff2 = end2 - start2;
            Srun = chrono::duration <double, milli> (diff2).count();

            int RE[GivenInput]; memset(RE,0,sizeof(RE));GenerateReverseData(RE,GivenInput);
            ofstream f4;
            f4.open("input_4.txt");
            f4<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f4<<RE[i]<<" ";
            auto start3 = chrono::steady_clock::now();
            SelectionSort(RE,GivenInput,temp,REcomp);
            auto end3 = chrono::steady_clock::now();
            auto diff3 = end3 - start3;
            RErun = chrono::duration <double, milli> (diff3).count();

            f1.close();
            f2.close();
            f3.close();
            f4.close();
            //...
        }
        else if (Algorithm == "insertion-sort")
        {
            Rcomp = 0; Rrun = 0.0;
            NScomp = 0; NSrun = 0.0;
            Scomp = 0; Srun = 0.0;
            REcomp = 0; RErun = 0.0;
            int temp = 0;

            int R[GivenInput];GenerateRandomData(R,GivenInput);
            ofstream f1;
            f1.open("input_1.txt");
            f1<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f1<<R[i]<<" ";
            auto start = chrono::steady_clock::now();
            InsertionSort(R,GivenInput,temp,Rcomp); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            Rrun = chrono::duration <double, milli> (diff).count();

            int NS[GivenInput]; memset(NS,0,sizeof(NS));GenerateNearlySortedData(NS,GivenInput);
            ofstream f2;
            f2.open("input_2.txt");
            f2<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f2<<NS[i]<<" ";
            auto start1 = chrono::steady_clock::now();
            InsertionSort(NS,GivenInput,temp,NScomp); 
            auto end1 = chrono::steady_clock::now();
            auto diff1 = end1 - start1;
            NSrun = chrono::duration <double, milli> (diff1).count();

            int S[GivenInput]; memset(S,0,sizeof(S));GenerateSortedData(S,GivenInput);
            ofstream f3;
            f3.open("input_3.txt");
            f3<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f3<<S[i]<<" ";
            auto start2 = chrono::steady_clock::now();
            InsertionSort(S,GivenInput,temp,Scomp);
            auto end2 = chrono::steady_clock::now();
            auto diff2 = end2 - start2;
            Srun = chrono::duration <double, milli> (diff2).count();

            int RE[GivenInput]; memset(RE,0,sizeof(RE));GenerateReverseData(RE,GivenInput);
            ofstream f4;
            f4.open("input_4.txt");
            f4<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f4<<RE[i]<<" ";
            auto start3 = chrono::steady_clock::now();
            InsertionSort(RE,GivenInput,temp,REcomp);
            auto end3 = chrono::steady_clock::now();
            auto diff3 = end3 - start3;
            RErun = chrono::duration <double, milli> (diff3).count();

            f1.close();
            f2.close();
            f3.close();
            f4.close();
            //...
        }
        else if (Algorithm == "bubble-sort")
        {
            Rcomp = 0; Rrun = 0.0;
            NScomp = 0; NSrun = 0.0;
            Scomp = 0; Srun = 0.0;
            REcomp = 0; RErun = 0.0;
            int temp = 0;

            int R[GivenInput]; memset(R,0,sizeof(R));GenerateRandomData(R,GivenInput);
            ofstream f1;
            f1.open("input_1.txt");
            f1<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f1<<R[i]<<" ";
            auto start = chrono::steady_clock::now();
            BubbleSort(R,GivenInput,temp,Rcomp); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            Rrun = chrono::duration <double, milli> (diff).count();

            int NS[GivenInput]; memset(NS,0,sizeof(NS));GenerateNearlySortedData(NS,GivenInput);
            ofstream f2;
            f2.open("input_2.txt");
            f2<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f2<<NS[i]<<" ";
            auto start1 = chrono::steady_clock::now();
            BubbleSort(NS,GivenInput,temp,NScomp); 
            auto end1 = chrono::steady_clock::now();
            auto diff1 = end1 - start1;
            NSrun = chrono::duration <double, milli> (diff1).count();

            int S[GivenInput]; memset(S,0,sizeof(S));GenerateSortedData(S,GivenInput);
            ofstream f3;
            f3.open("input_3.txt");
            f3<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f3<<S[i]<<" ";
            auto start2 = chrono::steady_clock::now();
            BubbleSort(S,GivenInput,temp,Scomp);
            auto end2 = chrono::steady_clock::now();
            auto diff2 = end2 - start2;
            Srun = chrono::duration <double, milli> (diff2).count();

            int RE[GivenInput]; memset(RE,0,sizeof(RE));GenerateReverseData(RE,GivenInput);
            ofstream f4;
            f4.open("input_4.txt");
            f4<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f4<<RE[i]<<" ";
            auto start3 = chrono::steady_clock::now();
            BubbleSort(RE,GivenInput,temp,REcomp);
            auto end3 = chrono::steady_clock::now();
            auto diff3 = end3 - start3;
            RErun = chrono::duration <double, milli> (diff3).count();

            f1.close();
            f2.close();
            f3.close();
            f4.close();
            //...
        }
        else if (Algorithm == "heap-sort")
        {
            Rcomp = 0; Rrun = 0.0;
            NScomp = 0; NSrun = 0.0;
            Scomp = 0; Srun = 0.0;
            REcomp = 0; RErun = 0.0;
            int temp = 0;

            int R[GivenInput]; memset(R,0,sizeof(R));GenerateRandomData(R,GivenInput);
            ofstream f1;
            f1.open("input_1.txt");
            f1<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f1<<R[i]<<" ";
            auto start = chrono::steady_clock::now();
            HeapSort(R,GivenInput,temp,Rcomp); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            Rrun = chrono::duration <double, milli> (diff).count();

            int NS[GivenInput]; memset(NS,0,sizeof(NS));GenerateNearlySortedData(NS,GivenInput);
            ofstream f2;
            f2.open("input_2.txt");
            f2<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f2<<NS[i]<<" ";
            auto start1 = chrono::steady_clock::now();
            HeapSort(NS,GivenInput,temp,NScomp); 
            auto end1 = chrono::steady_clock::now();
            auto diff1 = end1 - start1;
            NSrun = chrono::duration <double, milli> (diff1).count();

            int S[GivenInput]; memset(S,0,sizeof(S));GenerateSortedData(S,GivenInput);
            ofstream f3;
            f3.open("input_3.txt");
            f3<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f3<<S[i]<<" ";
            auto start2 = chrono::steady_clock::now();
            HeapSort(S,GivenInput,temp,Scomp);
            auto end2 = chrono::steady_clock::now();
            auto diff2 = end2 - start2;
            Srun = chrono::duration <double, milli> (diff2).count();

            int RE[GivenInput]; memset(RE,0,sizeof(RE));GenerateReverseData(RE,GivenInput);
            ofstream f4;
            f4.open("input_4.txt");
            f4<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f4<<RE[i]<<" ";
            auto start3 = chrono::steady_clock::now();
            HeapSort(RE,GivenInput,temp,REcomp);
            auto end3 = chrono::steady_clock::now();
            auto diff3 = end3 - start3;
            RErun = chrono::duration <double, milli> (diff3).count();

            f1.close();
            f2.close();
            f3.close();
            f4.close();
            //...
        }
        else if (Algorithm == "merge-sort")
        {
           Rcomp = 0; Rrun = 0.0;
            NScomp = 0; NSrun = 0.0;
            Scomp = 0; Srun = 0.0;
            REcomp = 0; RErun = 0.0;
            int temp = 0;

            int R[GivenInput]; memset(R,0,sizeof(R));GenerateRandomData(R,GivenInput);
            ofstream f1;
            f1.open("input_1.txt");
            f1<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f1<<R[i]<<" ";
            auto start = chrono::steady_clock::now();
            MergeSort(R,GivenInput,temp,Rcomp); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            Rrun = chrono::duration <double, milli> (diff).count();

            int NS[GivenInput]; memset(NS,0,sizeof(NS));GenerateNearlySortedData(NS,GivenInput);
            ofstream f2;
            f2.open("input_2.txt");
            f2<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f2<<NS[i]<<" ";
            auto start1 = chrono::steady_clock::now();
            MergeSort(NS,GivenInput,temp,NScomp); 
            auto end1 = chrono::steady_clock::now();
            auto diff1 = end1 - start1;
            NSrun = chrono::duration <double, milli> (diff1).count();

            int S[GivenInput]; memset(S,0,sizeof(S));GenerateSortedData(S,GivenInput);
            ofstream f3;
            f3.open("input_3.txt");
            f3<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f3<<S[i]<<" ";
            auto start2 = chrono::steady_clock::now();
            MergeSort(S,GivenInput,temp,Scomp);
            auto end2 = chrono::steady_clock::now();
            auto diff2 = end2 - start2;
            Srun = chrono::duration <double, milli> (diff2).count();

            int RE[GivenInput]; memset(RE,0,sizeof(RE));GenerateReverseData(RE,GivenInput);
            ofstream f4;
            f4.open("input_4.txt");
            f4<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f4<<RE[i]<<" ";
            auto start3 = chrono::steady_clock::now();
            MergeSort(RE,GivenInput,temp,REcomp);
            auto end3 = chrono::steady_clock::now();
            auto diff3 = end3 - start3;
            RErun = chrono::duration <double, milli> (diff3).count();

            f1.close();
            f2.close();
            f3.close();
            f4.close();
            //...
        }
        else if (Algorithm == "quick-sort")
        {
          Rcomp = 0; Rrun = 0.0;
            NScomp = 0; NSrun = 0.0;
            Scomp = 0; Srun = 0.0;
            REcomp = 0; RErun = 0.0;
            int temp = 0;

            int R[GivenInput]; memset(R,0,sizeof(R));GenerateRandomData(R,GivenInput);
            ofstream f1;
            f1.open("input_1.txt");
            f1<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f1<<R[i]<<" ";
            auto start = chrono::steady_clock::now();
            QuickSort(R,GivenInput,temp,Rcomp); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            Rrun = chrono::duration <double, milli> (diff).count();

            int NS[GivenInput]; memset(NS,0,sizeof(NS));GenerateNearlySortedData(NS,GivenInput);
            ofstream f2;
            f2.open("input_2.txt");
            f2<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f2<<NS[i]<<" ";
            auto start1 = chrono::steady_clock::now();
            QuickSort(NS,GivenInput,temp,NScomp); 
            auto end1 = chrono::steady_clock::now();
            auto diff1 = end1 - start1;
            NSrun = chrono::duration <double, milli> (diff1).count();

            int S[GivenInput]; memset(S,0,sizeof(S));GenerateSortedData(S,GivenInput);
            ofstream f3;
            f3.open("input_3.txt");
            f3<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f3<<S[i]<<" ";
            auto start2 = chrono::steady_clock::now();
            QuickSort(S,GivenInput,temp,Scomp);
            auto end2 = chrono::steady_clock::now();
            auto diff2 = end2 - start2;
            Srun = chrono::duration <double, milli> (diff2).count();

            int RE[GivenInput]; memset(RE,0,sizeof(RE));GenerateReverseData(RE,GivenInput);
            ofstream f4;
            f4.open("input_4.txt");
            f4<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f4<<RE[i]<<" ";
            auto start3 = chrono::steady_clock::now();
            QuickSort(RE,GivenInput,temp,REcomp);
            auto end3 = chrono::steady_clock::now();
            auto diff3 = end3 - start3;
            RErun = chrono::duration <double, milli> (diff3).count();

            f1.close();
            f2.close();
            f3.close();
            f4.close();
            //...
        }
        else if (Algorithm == "radix-sort")
        {
           Rcomp = 0; Rrun = 0.0;
            NScomp = 0; NSrun = 0.0;
            Scomp = 0; Srun = 0.0;
            REcomp = 0; RErun = 0.0;
            int temp = 0;

            int R[GivenInput]; memset(R,0,sizeof(R));GenerateRandomData(R,GivenInput);
            ofstream f1;
            f1.open("input_1.txt");
            f1<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f1<<R[i]<<" ";
            auto start = chrono::steady_clock::now();
            RadixSort(R,GivenInput,temp,Rcomp); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            Rrun = chrono::duration <double, milli> (diff).count();

            int NS[GivenInput]; memset(NS,0,sizeof(NS));GenerateNearlySortedData(NS,GivenInput);
            ofstream f2;
            f2.open("input_2.txt");
            f2<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f2<<NS[i]<<" ";
            auto start1 = chrono::steady_clock::now();
            RadixSort(NS,GivenInput,temp,NScomp); 
            auto end1 = chrono::steady_clock::now();
            auto diff1 = end1 - start1;
            NSrun = chrono::duration <double, milli> (diff1).count();

            int S[GivenInput]; memset(S,0,sizeof(S));GenerateSortedData(S,GivenInput);
            ofstream f3;
            f3.open("input_3.txt");
            f3<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f3<<S[i]<<" ";
            auto start2 = chrono::steady_clock::now();
            RadixSort(S,GivenInput,temp,Scomp);
            auto end2 = chrono::steady_clock::now();
            auto diff2 = end2 - start2;
            Srun = chrono::duration <double, milli> (diff2).count();

            int RE[GivenInput]; memset(RE,0,sizeof(RE));GenerateReverseData(RE,GivenInput);
            ofstream f4;
            f4.open("input_4.txt");
            f4<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f4<<RE[i]<<" ";
            auto start3 = chrono::steady_clock::now();
            RadixSort(RE,GivenInput,temp,REcomp);
            auto end3 = chrono::steady_clock::now();
            auto diff3 = end3 - start3;
            RErun = chrono::duration <double, milli> (diff3).count();

            f1.close();
            f2.close();
            f3.close();
            f4.close();
            //...
        }
        else if (Algorithm == "shaker-sort")
        {
           Rcomp = 0; Rrun = 0.0;
            NScomp = 0; NSrun = 0.0;
            Scomp = 0; Srun = 0.0;
            REcomp = 0; RErun = 0.0;
            int temp = 0;

            int R[GivenInput]; memset(R,0,sizeof(R));GenerateRandomData(R,GivenInput);
            ofstream f1;
            f1.open("input_1.txt");
            f1<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f1<<R[i]<<" ";
            auto start = chrono::steady_clock::now();
            ShakerSort(R,GivenInput,temp,Rcomp); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            Rrun = chrono::duration <double, milli> (diff).count();

            int NS[GivenInput]; memset(NS,0,sizeof(NS));GenerateNearlySortedData(NS,GivenInput);
            ofstream f2;
            f2.open("input_2.txt");
            f2<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f2<<NS[i]<<" ";
            auto start1 = chrono::steady_clock::now();
            ShakerSort(NS,GivenInput,temp,NScomp); 
            auto end1 = chrono::steady_clock::now();
            auto diff1 = end1 - start1;
            NSrun = chrono::duration <double, milli> (diff1).count();

            int S[GivenInput]; memset(S,0,sizeof(S));GenerateSortedData(S,GivenInput);
            ofstream f3;
            f3.open("input_3.txt");
            f3<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f3<<S[i]<<" ";
            auto start2 = chrono::steady_clock::now();
            ShakerSort(S,GivenInput,temp,Scomp);
            auto end2 = chrono::steady_clock::now();
            auto diff2 = end2 - start2;
            Srun = chrono::duration <double, milli> (diff2).count();

            int RE[GivenInput]; memset(RE,0,sizeof(RE));GenerateReverseData(RE,GivenInput);
            ofstream f4;
            f4.open("input_4.txt");
            f4<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f4<<RE[i]<<" ";
            auto start3 = chrono::steady_clock::now();
            ShakerSort(RE,GivenInput,temp,REcomp);
            auto end3 = chrono::steady_clock::now();
            auto diff3 = end3 - start3;
            RErun = chrono::duration <double, milli> (diff3).count();

            f1.close();
            f2.close();
            f3.close();
            f4.close();
            //...
        }
        else if (Algorithm == "shell-sort")
        {
           Rcomp = 0; Rrun = 0.0;
            NScomp = 0; NSrun = 0.0;
            Scomp = 0; Srun = 0.0;
            REcomp = 0; RErun = 0.0;
            int temp = 0;

            int R[GivenInput]; memset(R,0,sizeof(R));GenerateRandomData(R,GivenInput);
            ofstream f1;
            f1.open("input_1.txt");
            f1<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f1<<R[i]<<" ";
            auto start = chrono::steady_clock::now();
            ShellSort(R,GivenInput,temp,Rcomp); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            Rrun = chrono::duration <double, milli> (diff).count();

            int NS[GivenInput]; memset(NS,0,sizeof(NS));GenerateNearlySortedData(NS,GivenInput);
            ofstream f2;
            f2.open("input_2.txt");
            f2<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f2<<NS[i]<<" ";
            auto start1 = chrono::steady_clock::now();
            ShellSort(NS,GivenInput,temp,NScomp); 
            auto end1 = chrono::steady_clock::now();
            auto diff1 = end1 - start1;
            NSrun = chrono::duration <double, milli> (diff1).count();

            int S[GivenInput]; memset(S,0,sizeof(S));GenerateSortedData(S,GivenInput);
            ofstream f3;
            f3.open("input_3.txt");
            f3<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f3<<S[i]<<" ";
            auto start2 = chrono::steady_clock::now();
            ShellSort(S,GivenInput,temp,Scomp);
            auto end2 = chrono::steady_clock::now();
            auto diff2 = end2 - start2;
            Srun = chrono::duration <double, milli> (diff2).count();

            int RE[GivenInput]; memset(RE,0,sizeof(RE));GenerateReverseData(RE,GivenInput);
            ofstream f4;
            f4.open("input_4.txt");
            f4<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f4<<RE[i]<<" ";
            auto start3 = chrono::steady_clock::now();
            ShellSort(RE,GivenInput,temp,REcomp);
            auto end3 = chrono::steady_clock::now();
            auto diff3 = end3 - start3;
            RErun = chrono::duration <double, milli> (diff3).count();

            f1.close();
            f2.close();
            f3.close();
            f4.close();
            //...
        }
        else if (Algorithm == "counting-sort")
        {
          Rcomp = 0; Rrun = 0.0;
            NScomp = 0; NSrun = 0.0;
            Scomp = 0; Srun = 0.0;
            REcomp = 0; RErun = 0.0;
            int temp = 0;

            int R[GivenInput]; memset(R,0,sizeof(R));GenerateRandomData(R,GivenInput);
            ofstream f1;
            f1.open("input_1.txt");
            f1<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f1<<R[i]<<" ";
            auto start = chrono::steady_clock::now();
            CountingSort(R,GivenInput,range(R,GivenInput),temp,Rcomp); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            Rrun = chrono::duration <double, milli> (diff).count();

            int NS[GivenInput]; memset(NS,0,sizeof(NS));GenerateNearlySortedData(NS,GivenInput);
            ofstream f2;
            f2.open("input_2.txt");
            f2<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f2<<NS[i]<<" ";
            auto start1 = chrono::steady_clock::now();
            CountingSort(NS,GivenInput,range(NS,GivenInput),temp,NScomp); 
            auto end1 = chrono::steady_clock::now();
            auto diff1 = end1 - start1;
            NSrun = chrono::duration <double, milli> (diff1).count();

            int S[GivenInput]; memset(S,0,sizeof(S));GenerateSortedData(S,GivenInput);
            ofstream f3;
            f3.open("input_3.txt");
            f3<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f3<<S[i]<<" ";
            auto start2 = chrono::steady_clock::now();
            CountingSort(S,GivenInput,range(S,GivenInput),temp,Scomp);
            auto end2= chrono::steady_clock::now();
            auto diff2 = end2 - start2;
            Srun = chrono::duration <double, milli> (diff2).count();

            int RE[GivenInput]; memset(RE,0,sizeof(RE));GenerateReverseData(RE,GivenInput);
            ofstream f4;
            f4.open("input_4.txt");
            f4<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f4<<RE[i]<<" ";
            auto start3 = chrono::steady_clock::now();
            CountingSort(RE,GivenInput,range(RE,GivenInput),temp,REcomp);
            auto end3 = chrono::steady_clock::now();
            auto diff3 = end3 - start3;
            RErun = chrono::duration <double, milli> (diff3).count();

            f1.close();
            f2.close();
            f3.close();
            f4.close();
            //...
        }
        else if (Algorithm == "flash-sort")
        {
           Rcomp = 0; Rrun = 0.0;
            NScomp = 0; NSrun = 0.0;
            Scomp = 0; Srun = 0.0;
            REcomp = 0; RErun = 0.0;
            int temp = 0;

            int R[GivenInput]; memset(R,0,sizeof(R));GenerateRandomData(R,GivenInput);
            ofstream f1;
            f1.open("input_1.txt");
            f1<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f1<<R[i]<<" ";
            auto start = chrono::steady_clock::now();
            FlashSort(R,GivenInput,temp,Rcomp); 
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            Rrun = chrono::duration <double, milli> (diff).count();

            int NS[GivenInput]; memset(NS,0,sizeof(NS));GenerateNearlySortedData(NS,GivenInput);
            ofstream f2;
            f2.open("input_2.txt");
            f2<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f2<<NS[i]<<" ";
            auto start1= chrono::steady_clock::now();
            FlashSort(NS,GivenInput,temp,NScomp); 
            auto end1 = chrono::steady_clock::now();
            auto diff1 = end1 - start1;
            NSrun = chrono::duration <double, milli> (diff1).count();

            int S[GivenInput]; memset(S,0,sizeof(S));GenerateSortedData(S,GivenInput);
            ofstream f3;
            f3.open("input_3.txt");
            f3<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f3<<S[i]<<" ";
            auto start2 = chrono::steady_clock::now();
            FlashSort(S,GivenInput,temp,Scomp);
            auto end2 = chrono::steady_clock::now();
            auto diff2 = end2 - start2;
            Srun = chrono::duration <double, milli> (diff2).count();

            int RE[GivenInput]; memset(RE,0,sizeof(RE));GenerateReverseData(RE,GivenInput);
            ofstream f4;
            f4.open("input_4.txt");
            f4<<GivenInput<<endl;
            for (int i = 0; i < GivenInput; i++) f4<<RE[i]<<" ";
            auto start3 = chrono::steady_clock::now();
            FlashSort(RE,GivenInput,temp,REcomp);
            auto end3 = chrono::steady_clock::now();
            auto diff3 = end3 - start3;
            RErun = chrono::duration <double, milli> (diff3).count();

            f1.close();
            f2.close();
            f3.close();
            f4.close();
            //...
        }
        else check == 0;

        //Output Console
        if ( check == 1 )
        {
            cout<<"ALGORITHM MODE"<<endl;
            cout<<"Algorithm: "<<Algorithm<<endl;
            cout<<"Input size: "<<GivenInput<<endl;
            if (OutputParam == "-time")
            {   
                cout<<"Input order: Randomize"<<endl;
                cout<<"-----------------------"<<endl;
                cout<<"Running time: "<<Rrun<<endl;
                cout<<endl;
                cout<<"Input order: Nearly Sorted"<<endl;
                cout<<"-----------------------"<<endl;
                cout<<"Running time: "<<NSrun<<endl;
                cout<<endl;
                cout<<"Input order: Sorted"<<endl;
                cout<<"-----------------------"<<endl;
                cout<<"Running time: "<<Srun<<endl;
                cout<<endl;
                cout<<"Input order: Reversed"<<endl;
                cout<<"-----------------------"<<endl;
                cout<<"Running time: "<<RErun<<endl;
                
            }
            else if (OutputParam == "-comp")
            {
                cout<<"Input order: Randomize"<<endl;
                cout<<"-----------------------"<<endl;
                cout<<"Comparison: "<<Rcomp<<endl;
                cout<<endl;
                cout<<"Input order: Nearly Sorted"<<endl;
                cout<<"-----------------------"<<endl;
                cout<<"Comparison: "<<NScomp<<endl;
                cout<<endl;
                cout<<"Input order: Sorted"<<endl;
                cout<<"-----------------------"<<endl;
                cout<<"Comparison: "<<Scomp<<endl;
                cout<<endl;
                cout<<"Input order: Reversed"<<endl;
                cout<<"-----------------------"<<endl;
                cout<<"Comparison: "<<REcomp<<endl;
            }
            else if (OutputParam == "-both")
            {
                cout<<"Input order: Randomize"<<endl;
                cout<<"-----------------------"<<endl;
                cout<<"Running time: "<<Rrun<<endl;
                cout<<"Comparison: "<<Rcomp<<endl;
                cout<<endl;
                cout<<"Input order: Nearly Sorted"<<endl;
                cout<<"-----------------------"<<endl;
                cout<<"Running time: "<<NSrun<<endl;
                cout<<"Comparison: "<<NScomp<<endl;
                cout<<endl;
                cout<<"Input order: Sorted"<<endl;
                cout<<"-----------------------"<<endl;
                cout<<"Running time: "<<Srun<<endl;
                cout<<"Comparison: "<<Scomp<<endl;
                cout<<endl;
                cout<<"Input order: Reversed"<<endl;
                cout<<"-----------------------"<<endl;
                cout<<"Running time: "<<RErun<<endl;
                cout<<"Comparison: "<<REcomp<<endl;
            }
        }
        else cout<<"Cannot Recognize Algorithm ";
    }
    //CommandLine 1
    else {
        //Parsing Option
        string Algorithm = argv[0];
        string GivenInput = argv[1];
        string OutputParam = argv[2];

        int check =1;

        //Given Input
        ifstream fi;
        fi.open(GivenInput.c_str(),ios::in);
        int n;
        fi>>n;
        int A[n];
        for(int i=0;i<n;i++) fi>>A[i];

        //Sorting
        ofstream fo;
        unsigned __int64 compare = 0;int assignment = 0;
        double runtime = 0.0;
        fo.open("output.txt");
        if (Algorithm == "selection-sort")
        {
            auto start = chrono::steady_clock::now();
            SelectionSort(A,n,assignment,compare);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm == "insertion-sort")
        {
            auto start = chrono::steady_clock::now();
            InsertionSort(A,n,assignment,compare);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm == "bubble-sort")
        {
            auto start = chrono::steady_clock::now();
            BubbleSort(A,n,assignment,compare);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm == "heap-sort")
        {
            auto start = chrono::steady_clock::now();
            HeapSort(A,n,assignment,compare);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm == "merge-sort")
        {
            auto start = chrono::steady_clock::now();
            MergeSort(A,n,assignment,compare);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm == "quick-sort")
        {
            auto start = chrono::steady_clock::now();
            QuickSort(A,n,assignment,compare);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm == "radix-sort")
        {
            auto start = chrono::steady_clock::now();
            RadixSort(A,n,assignment,compare);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm == "shaker-sort")
        {
            auto start = chrono::steady_clock::now();
            ShakerSort(A,n,assignment,compare);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm == "shell-sort")
        {
            auto start = chrono::steady_clock::now();
            ShellSort(A,n,assignment,compare);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm == "counting-sort")
        {
            auto start = chrono::steady_clock::now();
            CountingSort(A,n,range(A,n),assignment,compare);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm == "flash-sort")
        {
            auto start = chrono::steady_clock::now();
            FlashSort(A,n,assignment,compare);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime = chrono::duration <double, milli> (diff).count(); 
        }
        else {
            check = 0;
            
        }

        if (check == 1)
        {
            //Write file
            for (int i = 0; i < n; i++) fo<<A[i]<<" ";
            //Output Console
            cout<<"ALGORITHM MODE"<<endl;
            cout<<"Algorithm: "<<Algorithm<<endl;
            cout<<"Input file: "<<GivenInput<<endl;
            cout<<"Input size: "<<n<<endl;
            cout<<"-----------------------"<<endl;
            if (OutputParam == "-time") cout<<"Running time: "<<runtime<<" ms"<<endl;
            else if (OutputParam == "-comp") cout<<"Comparison: "<<compare<<endl;
            else if (OutputParam == "-both")
            {
                cout<<"Running time: "<<runtime<<endl;
                cout<<"Comparison: "<<compare<<endl;
            }
            fo.close();
        }
        else cout<<" Cannot Recognize algorithm ";
    }
}

void Cmode(int n,char** argv) {
    if (n == 4 ) {
         //Parsing Option
        string Algorithm1 = argv[0];
        string Algorithm2 = argv[1];
        int InputSize = stoi(argv[2]);
        string InputOrder = argv[3];

        int check =1;

        string order;

        //Init Array
        int A[InputSize];
        int B[InputSize];
        memset(A,0,sizeof(A));
        memset(B,0,sizeof(B));
        int n = InputSize;

        if ( InputOrder == "-rand")
        {
            GenerateRandomData(A,InputSize);
            for (int i = 0; i < n;i++) B[i] = A[i];
            order = "Randomize";
        }
        else if (InputOrder == "-nsorted")
        {
            GenerateNearlySortedData(A,InputSize);
            for (int i = 0; i < n;i++) B[i] = A[i];
            order = "Nearly Sorted";
        }
        else if (InputOrder == "-sorted")
        {
            GenerateSortedData(A,InputSize);
            for (int i = 0; i < n;i++) B[i] = A[i];
            order = "Sorted";
        }
        else if (InputOrder == "-rev")
        {
            GenerateReverseData(A,InputSize);
            for (int i = 0; i < n;i++) B[i] = A[i];
            order = "Reverse";
        }

        //Generate input array
        ofstream f;
        f.open("input.txt");
        f<<n<<endl;
        for (int i = 0; i < n; i++) f<<A[i]<<" ";
        f.close();

        //Sorting
        unsigned __int64 compare1 = 0;int assignment1 = 0;
        double runtime1 = 0.0;

        unsigned __int64 compare2 = 0;int assignment2 = 0;
        double runtime2 = 0.0;

        //Algoritthm1
        if (Algorithm1 == "selection-sort")
        {
            auto start = chrono::steady_clock::now();
            SelectionSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "insertion-sort")
        {
            auto start = chrono::steady_clock::now();
            InsertionSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "bubble-sort")
        {
            auto start = chrono::steady_clock::now();
            BubbleSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "heap-sort")
        {
            auto start = chrono::steady_clock::now();
            HeapSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "merge-sort")
        {
            auto start = chrono::steady_clock::now();
            MergeSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "quick-sort")
        {
            auto start = chrono::steady_clock::now();
            QuickSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "radix-sort")
        {
            auto start = chrono::steady_clock::now();
            RadixSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "shaker-sort")
        {
            auto start = chrono::steady_clock::now();
            ShakerSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "shell-sort")
        {
            auto start = chrono::steady_clock::now();
            ShellSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "counting-sort")
        {
            auto start = chrono::steady_clock::now();
            CountingSort(A,n,range(A,n),assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "flash-sort")
        {
            auto start = chrono::steady_clock::now();
            FlashSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else {
            check = 0;
            
        }

        for(int i=0;i<n;i++) A[i] = B[i];

        //Algorithm2
         if (Algorithm2 == "selection-sort")
        {
            auto start = chrono::steady_clock::now();
            SelectionSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2== "insertion-sort")
        {
            auto start = chrono::steady_clock::now();
            InsertionSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "bubble-sort")
        {
            auto start = chrono::steady_clock::now();
            BubbleSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "heap-sort")
        {
            auto start = chrono::steady_clock::now();
            HeapSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "merge-sort")
        {
            auto start = chrono::steady_clock::now();
            MergeSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "quick-sort")
        {
            auto start = chrono::steady_clock::now();
            QuickSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "radix-sort")
        {
            auto start = chrono::steady_clock::now();
            RadixSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "shaker-sort")
        {
            auto start = chrono::steady_clock::now();
            ShakerSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "shell-sort")
        {
            auto start = chrono::steady_clock::now();
            ShellSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "counting-sort")
        {
            auto start = chrono::steady_clock::now();
            CountingSort(A,n,range(A,n),assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "flash-sort")
        {
            auto start = chrono::steady_clock::now();
            FlashSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else {
            check = 0;
            
        }

        if (check == 1)
        {
            //Output Console
            cout<<"ALGORITHM MODE"<<endl;
            cout<<"Algorithm: "<<Algorithm1<<" | "<<Algorithm2<<endl;
            cout<<"Input size: "<<n<<endl;
            cout<<"Input order: "<<order<<endl;
            cout<<"-----------------------"<<endl;
            cout<<"Running time: "<<runtime1<<" ms"<<" | "<<runtime2<<" ms"<<endl;
            cout<<"Comparison: "<<compare1<<" | "<<compare2<<endl;
        }
        else cout<<" Cannot Recognize algorithm ";
    }
    else if (n == 3){
         //Parsing Option
        string Algorithm1 = argv[0];
        string Algorithm2 = argv[1];
        string InputFile = argv[2];

        int check =1;

        //Given Input
        ifstream fi;
        fi.open(InputFile.c_str(),ios::in);
        int n;
        fi>>n;
        int A[n];
        for(int i=0;i<n;i++) fi>>A[i];

        //Sorting
        ofstream fo;

        unsigned __int64 compare1 = 0;int assignment1 = 0;
        double runtime1 = 0.0;

        unsigned __int64 compare2 = 0;int assignment2 = 0;
        double runtime2 = 0.0;

        fo.open("output.txt");
        //Algoritthm1
        if (Algorithm1 == "selection-sort")
        {
            auto start = chrono::steady_clock::now();
            SelectionSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "insertion-sort")
        {
            auto start = chrono::steady_clock::now();
            InsertionSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "bubble-sort")
        {
            auto start = chrono::steady_clock::now();
            BubbleSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "heap-sort")
        {
            auto start = chrono::steady_clock::now();
            HeapSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "merge-sort")
        {
            auto start = chrono::steady_clock::now();
            MergeSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "quick-sort")
        {
            auto start = chrono::steady_clock::now();
            QuickSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "radix-sort")
        {
            auto start = chrono::steady_clock::now();
            RadixSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "shaker-sort")
        {
            auto start = chrono::steady_clock::now();
            ShakerSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "shell-sort")
        {
            auto start = chrono::steady_clock::now();
            ShellSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "counting-sort")
        {
            auto start = chrono::steady_clock::now();
            CountingSort(A,n,range(A,n),assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm1 == "flash-sort")
        {
            auto start = chrono::steady_clock::now();
            FlashSort(A,n,assignment1,compare1);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime1 = chrono::duration <double, milli> (diff).count(); 
        }
        else {
            check = 0;
            
        }

        for(int i=0;i<n;i++) fi>>A[i];

        //Algorithm2
         if (Algorithm2 == "selection-sort")
        {
            auto start = chrono::steady_clock::now();
            SelectionSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2== "insertion-sort")
        {
            auto start = chrono::steady_clock::now();
            InsertionSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "bubble-sort")
        {
            auto start = chrono::steady_clock::now();
            BubbleSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "heap-sort")
        {
            auto start = chrono::steady_clock::now();
            HeapSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "merge-sort")
        {
            auto start = chrono::steady_clock::now();
            MergeSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "quick-sort")
        {
            auto start = chrono::steady_clock::now();
            QuickSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "radix-sort")
        {
            auto start = chrono::steady_clock::now();
            RadixSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "shaker-sort")
        {
            auto start = chrono::steady_clock::now();
            ShakerSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "shell-sort")
        {
            auto start = chrono::steady_clock::now();
            ShellSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "counting-sort")
        {
            auto start = chrono::steady_clock::now();
            CountingSort(A,n,range(A,n),assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else if (Algorithm2 == "flash-sort")
        {
            auto start = chrono::steady_clock::now();
            FlashSort(A,n,assignment2,compare2);
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            runtime2 = chrono::duration <double, milli> (diff).count(); 
        }
        else {
            check = 0;
            
        }

        if (check == 1)
        {
            //Write file
            for (int i = 0; i < n; i++) fo<<A[i]<<" ";
            //Output Console
            cout<<"ALGORITHM MODE"<<endl;
            cout<<"Algorithm: "<<Algorithm1<<" | "<<Algorithm2<<endl;
            cout<<"Input file: "<<InputFile<<endl;
            cout<<"Input size: "<<n<<endl;
            cout<<"-----------------------"<<endl;
            cout<<"Running time: "<<runtime1<<" ms"<<" | "<<runtime2<<" ms"<<endl;
            cout<<"Comparison: "<<compare1<<" | "<<compare2<<endl;
            fo.close();
        }
        else cout<<" Cannot Recognize algorithm ";
    }

}

main(int argc, char** argv)
{
    if (argv[1][0] == '-' && argv[1][1] == 'a') 
    {
        char** temp = new char*[argc-1];
        for (int i = 0; i< argc-1;i++) temp[i] = argv[i+2];
        // for (int i = 0; i< argc-2;i++) 
        // {
        //     cout<<i<<": "<<temp[i]<<endl;
        // }
        Amode(argc-2, temp);
    }
    else if(argv[1][0] == '-' && argv[1][1] == 'c') 
    {
        char** temp = new char*[argc-1];
        for (int i = 0; i< argc-1;i++) temp[i] = argv[i+2];
        // for (int i = 0; i< argc-2;i++) 
        // {
        //     cout<<i<<": "<<temp[i]<<endl;
        // }
        Cmode(argc-2, temp);
    }
    else cout<<"Unrecognize mode";
}   