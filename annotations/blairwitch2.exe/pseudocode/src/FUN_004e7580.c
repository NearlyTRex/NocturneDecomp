// Name: FUN_004e7580
// Address: 004e7580
// Address Range: [[004e7580, 004e75fd]]
// Convention: unknown
// Signature: void FUN_004e7580(int param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e7580(int param_1,int param_2,float param_3)

{
  float fVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x149c + param_2 * 0x60;
  if (*(int *)(param_1 + 0x74c + *(int *)(iVar2 + 0x5c) * 100) == 0) {
    fVar1 = param_3 / _DAT_005f98cc + *(float *)(iVar2 + 0x18);
    *(float *)(iVar2 + 0x18) = fVar1;
    if (1.0 < fVar1) {
      *(uint *)(iVar2 + 0x18) = 0x3f800000;
      return;
    }
  }
  else {
    fVar1 = *(float *)(iVar2 + 0x18) - param_3 / _DAT_005f98cc;
    *(float *)(iVar2 + 0x18) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(iVar2 + 0x18) = 0;
      return;
    }
  }
  return;
}
