// Name: FUN_00545fc0
// Address: 00545fc0
// Address Range: [[00545fc0, 00546015]]
// Convention: unknown
// Signature: int FUN_00545fc0(undefined4 param_1)

#include "nocturne.h"

int FUN_00545fc0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00543500(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005e4164;
  FUN_0054eae0(iVar1 + 0x158,"shadowbeast.dfm");
  *(uint *)(iVar1 + 0x2538) = 0x42700000;
  *(uint *)(iVar1 + 0xce5c) = 0x41f00000;
  *(uint *)(iVar1 + 0xce60) = 0x41a00000;
  *(uint *)(iVar1 + 0xd0a8) = 3;
  return iVar1;
}
