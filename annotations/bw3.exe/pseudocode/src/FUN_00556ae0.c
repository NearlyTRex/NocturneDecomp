// Name: FUN_00556ae0
// Address: 00556ae0
// Address Range: [[00556ae0, 00556b32]]
// Convention: unknown
// Signature: undefined4 FUN_00556ae0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00556ae0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00552f10(param_1,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x3c) = param_2;
    *(byte *)(iVar1 + 0x118) = *(byte *)(iVar1 + 0x118) | 0x10;
    if ((*(int *)(iVar1 + 0x60) != 0) && (_DAT_02cf3280 != (int *)0x0)) {
      (**(code **)(*_DAT_02cf3280 + 0x44))(_DAT_02cf3280,iVar1,0x10);
    }
    FUN_00556fd0();
    uVar2 = 1;
  }
  return uVar2;
}
