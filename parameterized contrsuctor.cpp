/*Sanidhya Singh
24070123140
ENTC B2*/

#include <iostream>
using namespace std;

class Cuboid {
    double height;
    double width;
    double length;
public:
    Cuboid(double h, double w, double l) {
        height = h;
        width = w;
        length = l;
    }
    double volume() {
        return height * width * length;
    }
};
int main() {

    Cuboid cub(2.0, 3.0, 5.0);
    cout << "Volume of the cuboid: " << cub.volume() << endl;

    return 0;
}

/*Output
Volume of the cuboid: 30
*/