// Name: FUN_00401fe0
// Address: 00401fe0
// Address Range: [[00401fe0, 00402033]]
// Convention: unknown
// Signature: void FUN_00401fe0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401fe0(uint param_1,uint param_2,uint param_3)

{
  if (DAT_0061049c != 0) {
    FUN_00401c70(param_1,param_2,param_3,_DAT_01c4f010,_DAT_01c4f014);
    return;
  }
  FUN_00401d00(param_1,param_2,param_3,_DAT_01c4f010,_DAT_01c4f014);
  return;
}
