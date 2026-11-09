// Name: core_dirmat.cpp_FUN_0045fd80
// Address: 0045fd80
// Address Range: [[0045fd80, 0045fda6]]
// Convention: unknown
// Signature: void core_dirmat_cpp_FUN_0045fd80(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

void core_dirmat_cpp_FUN_0045fd80(float *param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)*param_3);
  fVar2 = (float10)fsin((float10)*param_3);
  *param_2 = (float)fVar1;
  *param_1 = (float)fVar2;
  return;
}
