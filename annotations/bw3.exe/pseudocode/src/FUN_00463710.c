// Name: FUN_00463710
// Address: 00463710
// Address Range: [[00463710, 00463779]]
// Convention: unknown
// Signature: int FUN_00463710(undefined4 param_1)

#include "nocturne.h"

int FUN_00463710(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00462710(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005de874;
  FUN_0054eae0(iVar1 + 0x158,"blackdog.dfm");
  *(uint *)(iVar1 + 0x2538) = 0x41f00000;
  *(uint *)(iVar1 + 0xce5c) = 0x41200000;
  *(uint *)(iVar1 + 0xce60) = 0x41200000;
  *(uint *)(iVar1 + 0xfc) = 1;
  *(uint *)(iVar1 + 0xf8) = 0;
  *(uint *)(iVar1 + 0xd060) = 2;
  return iVar1;
}
