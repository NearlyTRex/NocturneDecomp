// Name: FUN_00534580
// Address: 00534580
// Address Range: [[00534580, 00534609]]
// Convention: unknown
// Signature: void FUN_00534580(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00534580(uint param_1,int param_2)

{
  int extraout_ECX;
  int iVar1;
  int extraout_EDX;
  float10 fVar2;
  float fVar3;
  uint local_14;
  
  FUN_00443180(0x1fc7838,param_2);
  fVar3 = (float)param_2 * (float)_DAT_005e5bca;
  iVar1 = 0;
  do {
    fVar2 = (float10)iVar1 * (float10)_DAT_005e5bca;
    FUN_005b9484(fVar3);
    fVar2 = fVar2 * (float10)_DAT_005e5bd2;
    FUN_005b7ff0();
    local_14 = (int)ROUND(fVar2);
    if (local_14 < 0x100) {
      local_14 = 0x100;
    }
    iVar1 = extraout_EDX + 1;
    *(int *)(extraout_ECX + 0x1fca390) = local_14;
  } while (iVar1 < 0x10000);
  return;
}
