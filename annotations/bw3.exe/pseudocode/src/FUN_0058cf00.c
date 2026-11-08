// Name: FUN_0058cf00
// Address: 0058cf00
// Address Range: [[0058cf00, 0058cf5f]]
// Convention: unknown
// Signature: int FUN_0058cf00(undefined4 param_1)

#include "nocturne.h"

int FUN_0058cf00(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005888d0(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005e6e24;
  FUN_0054eae0(iVar1 + 0x158,0x5d89cb);
  *(uint *)(iVar1 + 0xd140) = 5;
  *(uint *)(iVar1 + 0x2538) = 0x42480000;
  *(uint *)(iVar1 + 0xce5c) = 0x41700000;
  *(uint *)(iVar1 + 0xce60) = 0x41700000;
  *(uint *)(iVar1 + 0xd0dc) = 1;
  return iVar1;
}
