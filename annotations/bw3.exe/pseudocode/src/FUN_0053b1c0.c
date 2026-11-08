// Name: FUN_0053b1c0
// Address: 0053b1c0
// Address Range: [[0053b1c0, 0053b249]]
// Convention: unknown
// Signature: void FUN_0053b1c0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053b1c0(uint param_1,int param_2)

{
  int extraout_ECX;
  int iVar1;
  int extraout_EDX;
  float10 fVar2;
  float fVar3;
  uint local_14;
  
  FUN_00450980(0x2038f4c,param_2);
  fVar3 = (float)param_2 * (float)_DAT_005d0897;
  iVar1 = 0;
  do {
    fVar2 = (float10)iVar1 * (float10)_DAT_005d0897;
    FUN_005a4764(fVar3);
    fVar2 = fVar2 * (float10)_DAT_005d089f;
    FUN_005a3120();
    local_14 = (int)ROUND(fVar2);
    if (local_14 < 0x100) {
      local_14 = 0x100;
    }
    iVar1 = extraout_EDX + 1;
    *(int *)(extraout_ECX + 0x203baa4) = local_14;
  } while (iVar1 < 0x10000);
  return;
}
