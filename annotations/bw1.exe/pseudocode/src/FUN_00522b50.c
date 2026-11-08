// Name: FUN_00522b50
// Address: 00522b50
// Address Range: [[00522b50, 00522b89]]
// Convention: unknown
// Signature: void FUN_00522b50(undefined4 param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00522b50(uint param_1,float param_2,uint param_3)

{
  if (param_2 < (float)_DAT_005ea892) {
    return;
  }
  FUN_00522b90(param_1,param_2,param_3);
  FUN_00522dd0(param_1,param_2);
  return;
}
