#include <iostream>

using namespace std;

void mostrarvec(int vec[], int dim)
{
	for (int i = 0; i < dim; ++i)
		cout << vec[i] << '\t';
    cout << endl;
}

void mostrarmat(int m[][5], int dfil)
{
        const int dcol = 5; // solo por prolijidad

        for (int i = 0; i < dfil; ++i) {
                for (int j = 0; j < dcol; ++j)
                        cout << m[i][j] << '\t';
                cout << endl;
        }

}

void reverVec(int vec[],const int dim)
{
    int temp;
    for(int i = 0; i < dim / 2; i++)
    {
        temp = vec[i];
        vec[i] = vec[dim-1-i];
        vec[dim-1-i] = temp;
    }
}

void matTransp(int mat[][5],int dimFil)
{
    int dimCol = 5;
    int matAux[5][5] = {};

    for(int i = 0; i < dimFil; i++)
    {
        for(int j = 0; j < dimCol; j++)
        {
            matAux[i][j] = mat[j][i];
        }
    }
    mat[dimFil][dimCol] = {};

    for(int i = 0; i < dimFil; i++)
    {
        for(int j = 0; j < dimCol; j++)
        {
            mat[i][j] = matAux[i][j];
        }
    }
}


int main()
{
    const int dim5 {5};
    const int dim10 {10};

    int vec5[dim5] {4, 11, 19, 8, 3};
    int vec10[dim10] {23, 15, 1, 7, 6, 27, 2, 14, 12, 9};

    int matriz[dim5][dim5] {36, 7, 19, 28, 45,
                            17, 33, 42, 3, 25,
                            22, 41, 32, 11, 9,
                            39, 47, 14, 4, 23,
                            16, 38, 8, 27, 44};

    cout << endl;
    cout << "PUNTO NRO 1:" << endl;
    cout << "Vector original de 5 elementos:" << endl;
    mostrarvec(vec5,dim5);
    cout << "Vector reverso de 5 elementos:" << endl;
    reverVec(vec5,dim5);
    mostrarvec(vec5,dim5);
    cout << "Vector original de 10 elementos:" << endl;
    mostrarvec(vec10,dim10);
    cout << "Vector reverso de 10 elementos:" << endl;
    reverVec(vec10,dim10);
    mostrarvec(vec10,dim10);

    cout << endl;
    cout << "PUNTO NRO 2:" << endl;
    cout << "Matriz original:" << endl;
    mostrarmat(matriz,dim5);
    cout << "Matriz transpuesta:" << endl;
    matTransp(matriz,dim5);
    mostrarmat(matriz,dim5);

    return 0;
}