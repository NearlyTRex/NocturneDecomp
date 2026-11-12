// Name: core_basicene.cpp_FUN_0059f5b0
// Address: 0059f5b0
// Address Range: [[0059f5b0, 0059f656]]
// Convention: unknown
// Signature: void core_basicene_cpp_FUN_0059f5b0(int param_1,float param_2)

#include "nocturne.h"

void core_basicene_cpp_FUN_0059f5b0(int param_1,float param_2)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x113b8) == 0) {
    return;
  }
  param_2 = *(float *)(param_1 + 0x113cc) - param_2;
  *(float *)(param_1 + 0x113cc) = param_2;
  if (0.0 < param_2) {
    fVar1 = (*(float *)(param_1 + 0x113c0) - *(float *)(param_1 + 0x113bc)) *
            ((*(float *)(param_1 + 0x113c8) - *(float *)(param_1 + 0x113cc)) /
            *(float *)(param_1 + 0x113c8)) + *(float *)(param_1 + 0x113bc);
    *(float *)(param_1 + 0x113c4) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x113c4) = 0;
      if (*(float *)(param_1 + 0x113c4) <= 1.0) {
        return;
      }
    }
    else if (*(float *)(param_1 + 0x113c4) <= 1.0) {
      return;
    }
    *(uint *)(param_1 + 0x113c4) = 0x3f800000;
    return;
  }
  *(uint *)(param_1 + 0x113b8) = 0;
  *(uint *)(param_1 + 0x113c4) = *(uint *)(param_1 + 0x113c0);
  return;
}
