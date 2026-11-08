// Name: FUN_00419a20
// Address: 00419a20
// Address Range: [[00419a20, 00419a81]]
// Convention: unknown
// Signature: int FUN_00419a20(undefined4 param_1)

#include "nocturne.h"

int FUN_00419a20(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00417400(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005dc574;
  FUN_0054eae0(iVar1 + 0x158,0x5b719a);
  *(uint *)(iVar1 + 0x2538) = 0x42200000;
  *(uint *)(iVar1 + 0xce5c) = 0x41a00000;
  *(uint *)(iVar1 + 0xce60) = 0x41200000;
  *(uint *)(iVar1 + 0xd074) = 3;
  *(uint *)(iVar1 + 0xd058) = *(uint *)(iVar1 + 0x2538);
  return iVar1;
}
