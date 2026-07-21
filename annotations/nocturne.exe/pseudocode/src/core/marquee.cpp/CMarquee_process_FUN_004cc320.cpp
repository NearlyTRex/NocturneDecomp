// Name: core_marquee.cpp_CMarquee_process_FUN_004cc320
// Address: 004cc320
// Address Range: [[004cc320, 004cc3c2]]
// Convention: unknown
// Signature: void core_marquee_cpp_CMarquee_process_FUN_004cc320(int param_1,float param_2)

#include "nocturne.h"

void core_marquee_cpp_CMarquee_process_FUN_004cc320(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(int *)(param_1 + 0x19c);
  if (*(int *)(param_1 + 0x198) == 1) {
    fVar2 = (param_2 * fVar1) / *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x174);
    *(float *)(param_1 + 0x174) = fVar2;
    if (fVar1 < fVar2) {
      *(float *)(param_1 + 0x174) = *(float *)(param_1 + 0x174) - fVar1;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x198) == 0) {
    fVar1 = param_2 / *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x174);
    *(float *)(param_1 + 0x174) = fVar1;
    if ((float)*(int *)(param_1 + 0x178) < fVar1) {
      *(float *)(param_1 + 0x174) = *(float *)(param_1 + 0x174) - (float)*(int *)(param_1 + 0x178);
      return;
    }
  }
  return;
}
