// Name: FUN_00528970
// Address: 00528970
// Address Range: [[00528970, 005289aa]]
// Convention: unknown
// Signature: void FUN_00528970(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00528970(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_005288c0(param_1,param_2,100);
  if ((iVar1 == 0) && (_DAT_01ed6808 != 0)) {
    FUN_00491b00(0x01C6E360,param_2);
    return;
  }
  return;
}
