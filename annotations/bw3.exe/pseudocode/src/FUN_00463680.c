// Name: FUN_00463680
// Address: 00463680
// Address Range: [[00463680, 004636d5]]
// Convention: unknown
// Signature: int FUN_00463680(undefined4 param_1)

#include "nocturne.h"

int FUN_00463680(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00462710(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005de724;
  FUN_0054eae0(iVar1 + 0x158,"blackdog.dfm");
  *(uint *)(iVar1 + 0x2538) = 0x41a00000;
  *(uint *)(iVar1 + 0xce5c) = 0x40a00000;
  *(uint *)(iVar1 + 0xce60) = 0x41200000;
  *(uint *)(iVar1 + 0xd060) = 1;
  return iVar1;
}
