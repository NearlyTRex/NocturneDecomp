// Name: FUN_00550f50
// Address: 00550f50
// Address Range: [[00550f50, 00550fa2]]
// Convention: unknown
// Signature: undefined4 FUN_00550f50(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00550f50(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0054d3a0(param_1,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x3c) = param_2;
    *(byte *)(iVar1 + 0x118) = *(byte *)(iVar1 + 0x118) | 0x10;
    if ((*(int *)(iVar1 + 0x60) != 0) && (_DAT_02648e80 != (int *)0x0)) {
      (**(code **)(*_DAT_02648e80 + 0x44))(_DAT_02648e80,iVar1,0x10);
    }
    FUN_00551440();
    uVar2 = 1;
  }
  return uVar2;
}
