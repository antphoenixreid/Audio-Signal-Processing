/*============================================================
	Project: Discrete Fourier Transform
	Author: Anthony Reid
============================================================*/

#include <complex>

// define variable
#define PI 3.141695

class DFT
{
public:
  DFT(int[]);
  DFT(std::complex<int>[]);
  std::complex<float>* get_Xk();
protected:
private:
  std::complex<float>[] X = NULL;
}
