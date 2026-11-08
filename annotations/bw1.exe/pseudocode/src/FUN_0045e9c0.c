// Name: FUN_0045e9c0
// Address: 0045e9c0
// Address Range: [[0045e9c0, 0045ea59]]
// Convention: unknown
// Signature: void FUN_0045e9c0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045e9c0(int param_1,float param_2)

{
  int extraout_EDX;
  int extraout_EDX_00;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_2 * (float10)_DAT_005d88fb;
  fVar2 = (float10)param_2 * (float10)param_2 * (float10)_DAT_005d8903;
  *(float *)(param_1 + 0x30) = param_2;
  FUN_005c03a0();
  FUN_005c03a0();
  *(int *)(extraout_EDX + 0x10) = (int)ROUND(fVar2);
  *(int *)(extraout_EDX + 0xc) = (int)ROUND(fVar1);
  if (*(int *)(extraout_EDX + 0x10) < 0x10000) {
    *(uint *)(extraout_EDX + 0x10) = 0x10000;
  }
  *(float *)(extraout_EDX + 0x18) = param_2 * param_2;
  fVar1 = ((float10)*(byte *)(extraout_EDX + 0x1c) * (float10)_DAT_005d8903) /
          (float10)(*(int *)(extraout_EDX + 0x10) >> 0x10);
  *(float *)(extraout_EDX + 0x34) = 1.0 / param_2;
  *(float *)(extraout_EDX + 0x38) = 1.0 / (param_2 * param_2);
  FUN_005c03a0();
  *(int *)(extraout_EDX_00 + 0x14) = (int)ROUND(fVar1);
  return;
}
