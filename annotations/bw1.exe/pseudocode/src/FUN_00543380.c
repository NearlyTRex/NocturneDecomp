// Name: FUN_00543380
// Address: 00543380
// Address Range: [[00543380, 005433ba]]
// Convention: unknown
// Signature: void FUN_00543380(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00543380(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_005432d0(param_1,param_2,100);
  if ((iVar1 == 0) && (_DAT_01e810a8 != 0)) {
    FUN_004a6c90(0x01C51D80,param_2);
    return;
  }
  return;
}
