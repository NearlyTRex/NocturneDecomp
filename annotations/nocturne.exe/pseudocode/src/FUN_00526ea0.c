// Name: FUN_00526ea0
// Address: 00526ea0
// Address Range: [[00526ea0, 00526efb]]
// Convention: unknown
// Signature: undefined4 FUN_00526ea0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00526ea0(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_005234b0(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x20) = 1;
  *(uint *)(iVar1 + 0x1c) = param_2;
  FUN_00524830(iVar1,0);
  if ((*(int *)(iVar1 + 0x6c) != 0) && (_DAT_02dc8318 != (int *)0x0)) {
    (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,iVar1,2);
  }
  FUN_00528890();
  return 1;
}
