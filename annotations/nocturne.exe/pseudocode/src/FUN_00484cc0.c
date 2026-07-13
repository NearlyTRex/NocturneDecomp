// Name: FUN_00484cc0
// Address: 00484cc0
// Address Range: [[00484cc0, 00484d37]]
// Convention: unknown
// Signature: void FUN_00484cc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484cc0(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  FUN_004ef120(param_1);
  fVar4 = SQRT((float10)*(float *)(param_1 + 0x14) * (float10)*(float *)(param_1 + 0x14) +
               (float10)*(float *)(param_1 + 0xc) * (float10)*(float *)(param_1 + 0xc) +
               (float10)*(float *)(param_1 + 0x10) * (float10)*(float *)(param_1 + 0x10)) *
          (float10)_DAT_00581134;
  iVar3 = FUN_00563a30();
  iVar2 = _DAT_01bd1d80;
  lVar1 = (longlong)iVar3 * (longlong)(int)ROUND(fVar4);
  *(uint *)(param_1 + 0x38) =
       *(int *)(param_1 + 0x38) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)(iVar2 / 2) * (longlong)(int)ROUND(fVar4);
  *(int *)(param_1 + 0x3c) =
       *(int *)(param_1 + 0x3c) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  return;
}
