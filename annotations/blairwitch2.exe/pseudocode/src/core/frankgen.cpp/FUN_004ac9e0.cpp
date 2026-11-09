// Name: core_frankgen.cpp_FUN_004ac9e0
// Address: 004ac9e0
// Address Range: [[004ac9e0, 004aca3b]]
// Convention: unknown
// Signature: void core_frankgen_cpp_FUN_004ac9e0(int param_1,float param_2,float param_3)

#include "nocturne.h"

void core_frankgen_cpp_FUN_004ac9e0(int param_1,float param_2,float param_3)

{
  float fVar1;
  float10 fVar2;
  double dVar3;
  
  fVar1 = param_2 * param_3 + *(float *)(param_1 + 0x5e8);
  *(float *)(param_1 + 0x5e8) = fVar1;
  dVar3 = floor((double)fVar1);
  fVar2 = (float10)dVar3;
  round();
  *(float *)(param_1 + 0x5e8) = *(float *)(param_1 + 0x5e8) - (float)(int)ROUND(fVar2);
  return;
}
