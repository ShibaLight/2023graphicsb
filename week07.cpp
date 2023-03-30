#include <opencv/highgui.h>
int main()
{
    IplImage * img =cvLoadImage("week072.jpg");
    cvShowImage("week07", img);
    cvWaitKey(0);
}
