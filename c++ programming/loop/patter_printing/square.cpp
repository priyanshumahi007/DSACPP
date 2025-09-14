/* OUTPUT
# # # # # 
#       # 
#       # 
#       # 
# # # # # 
*/

#include <iostream>
using namespace std;

int main() {
    int n = 5; // size of square (you can change it)

    for (int i = 0; i < n; i++) {          // row loop
        for (int j = 0; j < n; j++) {      // column loop
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << "# ";   // print border
            else
                cout << "  ";   // print spaces inside
        }
        cout << endl;
    }

    return 0;
}