// Name: FUN_004aefc0
// Address: 004aefc0
// Address Range: [[004aefc0, 004af03c]]
// Convention: unknown
// Signature: void FUN_004aefc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004aefc0(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  FUN_00532250(param_1);
  fVar4 = SQRT((float10)*(float *)(param_1 + 0x14) * (float10)*(float *)(param_1 + 0x14) +
               (float10)*(float *)(param_1 + 0xc) * (float10)*(float *)(param_1 + 0xc) +
               (float10)*(float *)(param_1 + 0x10) * (float10)*(float *)(param_1 + 0x10)) *
          (float10)_DAT_005df264;
  iVar3 = FUN_005c03a0();
  iVar2 = _DAT_01c43530;
  lVar1 = (longlong)iVar3 * (longlong)(int)ROUND(fVar4);
  *(uint *)(param_1 + 0x40) =
       *(int *)(param_1 + 0x40) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)(iVar2 / 2) * (longlong)(int)ROUND(fVar4);
  *(int *)(param_1 + 0x44) =
       *(int *)(param_1 + 0x44) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  return;
}
