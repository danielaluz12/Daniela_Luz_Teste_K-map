// program to try to group ones in a matrix
#include <iostream>
using namespace std;
 

// função para achar retangulo
bool isRectangle(const vector<vector<int> >& m)
{
    // finding row and column size
    int count;
    int rows = m.size();
    if (rows == 0)
        return false;
    int columns = m[0].size();
 
    // scanning the matrix
    for (int y1 = 0; y1 < rows; y1++)
      for (int x1 = 0; x1 < columns; x1++)
 
          // if any index found 1 then try
          // for all rectangles
          // se achou 1
          if (m[y1][x1] == 1)
            // para row baixo 
            for (int y2 = y1 + 1; y2 < rows; y2++)
            //checa cada coluna
              for (int x2 = x1 + 1; x2 < columns; x2++)
                if (m[y1][x2] == 1 && m[y2][x1] == 1 &&
                                       m[y2][x2] == 1)
                  count++;
                  return true;
    return false;
}
 
// Driver code
int main()
{
    int RR = 0,CC = 0;
    int area;
    
    cout<<"Enter no of rows of the matrix";
    cin>>RR;
    cout<< "Enter no of columns of the matrix";
    cin>>CC;

    //user input  for matriz
    vector<vector<int>> matrix(RR, vector<int>(CC));

    
   
    for (int i = 0; i<RR; i++)
    {
        for(int j = 0; j<CC; j++)
        {
        cout<<"Enter the number for Matrix 1";
            cin>>matrix[i][j];
        }
    }
   
    area = isRectangle(matrix);
    cout<< "area"<< area;
    
}