// Name: FUN_0050e400
// Address: 0050e400
// Address Range: [[0050e400, 0050e489]]
// Convention: unknown
// Signature: void FUN_0050e400(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050e400(uint param_1,int param_2)

{
  int extraout_ECX;
  int iVar1;
  int extraout_EDX;
  float10 fVar2;
  float fVar3;
  uint local_14;
  
  FUN_00447a70(0x1fb8508,param_2);
  fVar3 = (float)param_2 * (float)_DAT_00590872;
  iVar1 = 0;
  do {
    fVar2 = (float10)iVar1 * (float10)_DAT_00590872;
    FUN_00565ad6(fVar3);
    fVar2 = fVar2 * (float10)_DAT_0059087a;
    FUN_00563a30();
    local_14 = (int)ROUND(fVar2);
    if (local_14 < 0x100) {
      local_14 = 0x100;
    }
    iVar1 = extraout_EDX + 1;
    *(int *)(extraout_ECX + 0x1fbb060) = local_14;
  } while (iVar1 < 0x10000);
  return;
}
