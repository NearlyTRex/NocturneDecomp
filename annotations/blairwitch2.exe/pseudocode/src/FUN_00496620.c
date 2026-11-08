// Name: FUN_00496620
// Address: 00496620
// Address Range: [[00496620, 0049669c]]
// Convention: unknown
// Signature: void FUN_00496620(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00496620(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  FUN_00510ef0(param_1);
  fVar4 = SQRT((float10)*(float *)(param_1 + 0x14) * (float10)*(float *)(param_1 + 0x14) +
               (float10)*(float *)(param_1 + 0xc) * (float10)*(float *)(param_1 + 0xc) +
               (float10)*(float *)(param_1 + 0x10) * (float10)*(float *)(param_1 + 0x10)) *
          (float10)_DAT_005d5422;
  iVar3 = FUN_005b7ff0();
  iVar2 = _DAT_01c2a370;
  lVar1 = (longlong)iVar3 * (longlong)(int)ROUND(fVar4);
  *(uint *)(param_1 + 0x40) =
       *(int *)(param_1 + 0x40) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)(iVar2 / 2) * (longlong)(int)ROUND(fVar4);
  *(int *)(param_1 + 0x44) =
       *(int *)(param_1 + 0x44) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  return;
}
