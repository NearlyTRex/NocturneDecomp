// Name: FUN_005737d0
// Address: 005737d0
// Address Range: [[005737d0, 0057380b]]
// Convention: unknown
// Signature: undefined4 FUN_005737d0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005737d0(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0056fa10(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x1c) = param_2;
  *(uint *)(iVar1 + 0x20) = 1;
  *(byte *)(iVar1 + 0x118) = *(byte *)(iVar1 + 0x118) | 2;
  FUN_00573e70();
  return 1;
}
