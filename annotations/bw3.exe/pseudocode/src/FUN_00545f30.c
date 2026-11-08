// Name: FUN_00545f30
// Address: 00545f30
// Address Range: [[00545f30, 00545f85]]
// Convention: unknown
// Signature: int FUN_00545f30(undefined4 param_1)

#include "nocturne.h"

int FUN_00545f30(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00543500(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005e4014;
  FUN_0054eae0(iVar1 + 0x158,"shadowbeast.dfm");
  *(uint *)(iVar1 + 0x2538) = 0x42200000;
  *(uint *)(iVar1 + 0xce5c) = 0x41c80000;
  *(uint *)(iVar1 + 0xce60) = 0x41a00000;
  *(uint *)(iVar1 + 0xd0a8) = 2;
  return iVar1;
}
