// Name: FUN_005a2600
// Address: 005a2600
// Address Range: [[005a2600, 005a2626]]
// Convention: unknown
// Signature: undefined4 FUN_005a2600(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a2600(int param_1,uint param_2)

{
  uint uVar1;
  
  if (*(float *)(param_1 + 0x113c4) < (float)_DAT_005eff67) {
    return 0;
  }
  uVar1 = FUN_00488020(param_1,param_2);
  return uVar1;
}
