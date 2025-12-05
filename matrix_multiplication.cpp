#include <iostream>
#include <vector>
using namespace std;


int main() {
    int rowsA, columnsA, rowsB, columnsB;
    
    cout << "Enter number of rows for matrix A: ";
    cin >> rowsA;
    cout << "Enter number of columns for matrix A: ";
    cin >> columnsA;
    
    cout << "Enter number of rows for matrix B: ";
    cin >> rowsB;
    cout << "Enter number of columns for matrix B: ";
    cin >> columnsB;
    
    if (columnsA != rowsB){
        cout << "Multiplication of (A x B) is not possible in this situation\n";
        
    }else{
        
        // Taking Matrix 1
        vector<vector<int>> matrix1(rowsA, vector<int>(columnsA));
        cout << "Enter Values for matrix 1\n";
        for (int i = 0; i < rowsA; i++){
            cout << "Row " << i+1 << " = ";
            for (int j = 0; j < columnsA; j++){
                cin >> matrix1[i][j];
            } 
        }
        
        // Taking Matrix 2
         vector<vector<int>> matrix2(rowsB, vector<int>(columnsB));
        cout << "Enter Values for matrix 2\n";
        for (int i = 0; i < rowsB; i++){
            cout << "Row " << i+1 << " = ";
            for (int j = 0; j < columnsB; j++){
                cin >> matrix2[i][j];
            } 
        }
        
        // Calculations
        vector<vector<int>> matrixR(rowsA, vector<int>(columnsB));
        
        for (int i = 0; i < rowsA; i++){
           
            for (int j = 0; j < columnsB; j++){
                 int rowSum = 0;
                for (int k = 0; k < columnsA; k++){
                    rowSum += matrix1[i][k]*matrix2[k][j];
                }
                
                matrixR[i][j] = rowSum;
            }
            
        }
        
        // Printing Result
        for (int i = 0; i < rowsA; i++){
            for (int j = 0; j < columnsB; j++){
                cout << matrixR[i][j] << "  ";
            }
            cout << "\n";
        }
       
    }

    return 0;
}