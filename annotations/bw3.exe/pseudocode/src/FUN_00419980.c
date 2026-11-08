// Name: FUN_00419980
// Address: 00419980
// Address Range: [[00419980, 004199e1]]
// Convention: unknown
// Signature: int FUN_00419980(undefined4 param_1)

#include "nocturne.h"

int FUN_00419980(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00417400(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005dc414;
  FUN_0054eae0(iVar1 + 0x158,0x5b718e);
  *(uint *)(iVar1 + 0x2538) = 0x41f00000;
  *(uint *)(iVar1 + 0xce5c) = 0x41400000;
  *(uint *)(iVar1 + 0xce60) = 0x41000000;
  *(uint *)(iVar1 + 0xd074) = 2;
  *(uint *)(iVar1 + 0xd058) = *(uint *)(iVar1 + 0x2538);
  return iVar1;
}
