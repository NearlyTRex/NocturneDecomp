// Name: FUN_00527130
// Address: 00527130
// Address Range: [[00527130, 00527184]]
// Convention: unknown
// Signature: undefined4 FUN_00527130(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00527130(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_005234b0(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x48) = param_2;
  FUN_00524830(iVar1,0);
  if ((*(int *)(iVar1 + 0x6c) != 0) && (_DAT_02dc8318 != (int *)0x0)) {
    (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,iVar1,0x10);
  }
  FUN_00528890();
  return 1;
}
