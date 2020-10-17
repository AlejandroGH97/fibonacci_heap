#define cimg_display 1
#define cimg_use_png 1
#define cimg_use_jpeg 1
#include "CImg.h"

using namespace std;
using namespace cimg_library;

int main() {
    CImg<unsigned char> A("face.png"), visu(255,255,3,0);

    A.display();

    return 0;
}
