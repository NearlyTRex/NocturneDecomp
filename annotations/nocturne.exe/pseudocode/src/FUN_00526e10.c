// Name: FUN_00526e10
// Address: 00526e10
// Address Range: [[00526e10, 00526e9b]]
// Convention: unknown
// Signature: undefined4 FUN_00526e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00526e10(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005234b0(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x1c) = 0;
  *(uint *)(iVar1 + 0x20) = 0;
  *(uint *)(iVar1 + 4) = param_2;
  *(uint *)(iVar1 + 8) = param_3;
  *(uint *)(iVar1 + 0xc) = param_4;
  *(uint *)(iVar1 + 0x10) = param_5;
  *(uint *)(iVar1 + 0x14) = param_6;
  uVar2 = 1;
  *(uint *)(iVar1 + 0x18) = param_7;
  FUN_00524830(iVar1,0);
  if ((*(int *)(iVar1 + 0x6c) != 0) && (_DAT_02dc8318 != (int *)0x0)) {
    uVar2 = (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,iVar1,2);
  }
  FUN_00528890();
  return uVar2;
}
