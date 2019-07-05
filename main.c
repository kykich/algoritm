#include <stdio.h>


// run lola run
float Index_masbody (int m, float h){
   float indx = m / (h * h);
    return indx;
}
// ages 1 to 150
void Ages()
{
    int ages;
    scanf ("%d \n", &ages);
     int end = ages % 10;
     if (end == 1){
            printf("Возраст %d год", ages);
        }else if ( 2 <= end && end <5) {
            printf("Возраст %d года", ages);
        }else {
            printf("Возраст %d  лет", ages);
    }
}
// Chess
void BW_Chess(int x1, int y1, int x2, int y2)
{
    if ()

}


int main(int argc, const char** argv) {
  printf("Indx mass body %.2f\n", Index_masbody(108, 1.76));
  Ages();
  return 0;
}
