// Name: FUN_00545ea0
// Address: 00545ea0
// Address Range: [[00545ea0, 00545ef5]]
// Convention: unknown
// Signature: int FUN_00545ea0(undefined4 param_1)

#include "nocturne.h"

int FUN_00545ea0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00543500(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005e3ec4;
  FUN_0054eae0(iVar1 + 0x158,"@shadowbeast.dfm" + 1);
  *(uint *)(iVar1 + 0x2538) = 0x42200000;
  *(uint *)(iVar1 + 0xce5c) = 0x41700000;
  *(uint *)(iVar1 + 0xce60) = 0x41a00000;
  *(uint *)(iVar1 + 0xd0a8) = 1;
  return iVar1;
}
