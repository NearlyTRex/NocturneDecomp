// Name: FUN_0041f310
// Address: 0041f310
// Address Range: [[0041f310, 0041f392]]
// Convention: unknown
// Signature: void FUN_0041f310(undefined4 param_1)

#include "nocturne.h"

void FUN_0041f310(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e300(param_1);
  iVar1 = FUN_0044e110(iVar1 + 0x668,0x100,0x100);
  *(byte ***)(iVar1 + -0x51c) = &PTR_FUN_0059abb4;
  *(uint *)(iVar1 + 0x1cb4) = 1;
  *(uint *)(iVar1 + 0x2fb4) = 0;
  *(uint *)(iVar1 + 0x2fb0) = *(uint *)(iVar1 + 0x2fb4);
  *(uint *)(iVar1 + 0x2fac) = *(uint *)(iVar1 + 0x2fb0);
  *(uint *)(iVar1 + 0x2fc0) = 0;
  *(uint *)(iVar1 + 0x2fbc) = *(uint *)(iVar1 + 0x2fc0);
  *(uint *)(iVar1 + 0x2fb8) = *(uint *)(iVar1 + 0x2fbc);
  *(uint *)(iVar1 + 0x2fc4) = 0;
  *(uint *)(iVar1 + -4) = 1;
  return;
}
