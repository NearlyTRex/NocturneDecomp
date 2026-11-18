// Name: core_dirmat.cpp_sinCos_FUN_0045bef0
// Address: 0045bef0
// Address Range: [[0045bef0, 0045bf16]]
// Convention: __cdecl
// Signature: void __cdecl core_dirmat_cpp_sinCos_FUN_0045bef0(float *sin_out,float *cos_out,float *angle)

#include "nocturne.h"

void __cdecl core_dirmat_cpp_sinCos_FUN_0045bef0(float *sin_out,float *cos_out,float *angle)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)*angle);
  fVar2 = (float10)fsin((float10)*angle);
  *cos_out = (float)fVar1;
  *sin_out = (float)fVar2;
  return;
}
