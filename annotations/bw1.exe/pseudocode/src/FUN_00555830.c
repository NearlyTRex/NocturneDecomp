// Name: FUN_00555830
// Address: 00555830
// Address Range: [[00555830, 005558b9]]
// Convention: unknown
// Signature: void FUN_00555830(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555830(uint param_1,int param_2)

{
  int extraout_ECX;
  int iVar1;
  int extraout_EDX;
  float10 fVar2;
  float fVar3;
  uint local_14;
  
  FUN_00454830(0x1fe37ec,param_2);
  fVar3 = (float)param_2 * (float)_DAT_005f0bee;
  iVar1 = 0;
  do {
    fVar2 = (float10)iVar1 * (float10)_DAT_005f0bee;
    FUN_005c18f4(fVar3);
    fVar2 = fVar2 * (float10)_DAT_005f0bf6;
    FUN_005c03a0();
    local_14 = (int)ROUND(fVar2);
    if (local_14 < 0x100) {
      local_14 = 0x100;
    }
    iVar1 = extraout_EDX + 1;
    *(int *)(extraout_ECX + 0x1fe6344) = local_14;
  } while (iVar1 < 0x10000);
  return;
}
