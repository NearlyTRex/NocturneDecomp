// Name: core_dtrace.cpp_FUN_00477ac0
// Address: 00477ac0
// Address Range: [[00477ac0, 00477b61]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_00477ac0(int param_1,float *param_2)

#include "nocturne.h"

void core_dtrace_cpp_FUN_00477ac0(int param_1,float *param_2)

{
  int *unaff_ESI;
  byte bVar1;
  float10 fVar2;
  float10 fVar3;
  int aiStackY_1004 [1016];
  int local_1c;
  int local_18;
  int local_14;
  double local_10;
  
  bVar1 = 0;
  local_10 = floor
                       ((double)((*param_2 - *(float *)(param_1 + 0x10)) /
                                *(float *)(param_1 + 0x34)));
  fVar2 = ((float10)param_2[1] - (float10)*(float *)(param_1 + 0x14)) /
          (float10)*(float *)(param_1 + 0x38);
  fVar3 = (float10)local_10;
  round();
  local_1c = (int)ROUND(fVar3);
  local_10 = floor((double)fVar2);
  fVar2 = ((float10)param_2[2] - (float10)*(float *)(param_1 + 0x18)) /
          (float10)*(float *)(param_1 + 0x3c);
  fVar3 = (float10)local_10;
  round();
  local_18 = (int)ROUND(fVar3);
  local_10 = floor((double)fVar2);
  fVar2 = (float10)local_10;
  round();
  local_14 = (int)ROUND(fVar2);
  *unaff_ESI = local_1c;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(int *)((int)&stack0xffffffe8 + (uint)bVar1 * -8);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(int *)((int)&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}
