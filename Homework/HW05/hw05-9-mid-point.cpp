/*
    ผู้ใช้กรอกพิกัดจำนวน 2 จุดลงในโปรแกรม ให้คุณเขียนโปรแกรมคำนวณหาจุดกึ่งกลางของ 2 จุดนี้

    Test case:
        Input A Point :
            2 2
        Input B Point :
            4 4

    Output:
        Mid Point of A and B is ( 3.0, 3.0 )

    Test case:
        Input A Point :
            -3 9
        Input B Point :
            4 -19

    Output:
        Mid Point of A and B is ( 0.5, -5.0 )

    Test case:
        Input A Point :
            6 -8
        Input B Point :
            3 3

    Output:
        Mid Point of A and B is ( 4.5, -2.5 )
*/
#include <iostream>
#include <iomanip> // เพิ่มไลบรารีนี้เพื่อใช้งาน setprecision
using namespace std;

int main() {
    double x1, y1, x2, y2;
    
    cout << "Input A Point :" << endl;
    cin >> x1 >> y1;
    
    cout << "Input B Point :" << endl;
    cin >> x2 >> y2;
    
    double midX = (x1 + x2) / 2;
    double midY = (y1 + y2) / 2;
    
    cout << fixed << setprecision(1); // ตั้งค่าให้แสดงทศนิยม 1 ตำแหน่ง
    cout << "Output:" << endl;
    cout << "Mid Point of A and B is ( " << midX << ", " << midY << " )" << endl;
    
    return 0;
}
