// Name: FUN_00556a30
// Address: 00556a30
// Address Range: [[00556a30, 00556a6b]]
// Convention: unknown
// Signature: undefined4 FUN_00556a30(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00556a30(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00552f10(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x30) = param_2;
  *(uint *)(iVar1 + 0x34) = 1;
  *(byte *)(iVar1 + 0x118) = *(byte *)(iVar1 + 0x118) | 4;
  FUN_00556fd0();
  return 1;
}
