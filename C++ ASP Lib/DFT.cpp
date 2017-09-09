/*============================================================
        Project: Discrete Fourier Transform
        Author: Anthony Reid
============================================================*/

#include "DFT.h"

class DFT
{
  DFT(auto[] x)
  {
    const int N = x.size();
    X = new std::complex<float>[N];
    for(int k = 0; k < N; k++)
    {
      float freq_rad = (2*PI*k)/N;
      std::complex<float> X[k] = 0;
      for(int n = 0; n < N; n++)
      {
        std::complex<float> sk = std::exp(-1i * freq_rad * n);
        std::complex<float> X_freq = x[n] * sk;
        X[k] = X[k] + X_freq;
      }  
    }
  }

  DFT(std::complex<auto>[] x)
  {
    const int N = x.size();
    X = new std::complex<float>[N];

    for(int k = 0; k < N; k++)
    {
      float freq_rad = (2*PI*k)/N;
      std::complex<float> X[k] = 0;

      for(int n = 0; n < N; n++)
      {
        std::complex<float> sk = std::exp(-1i * freq_rad * n);
        std::complex<float> X_freq = x[n] * sk;
        X[k] = X[k] + X_freq;
      }
    }
  }

  std::complex<float>[] get_Xk()
  {
    return X;
  }
}
