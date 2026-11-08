// Name: FUN_0043a4c0
// Address: 0043a4c0
// Address Range: [[0043a4c0, 0043a571]]
// Convention: unknown
// Signature: int FUN_0043a4c0(undefined4 param_1)

#include "nocturne.h"

int FUN_0043a4c0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005899d0(param_1);
  iVar1 = FUN_0049f180(iVar1 + 0x6d8);
  *(uint *)(iVar1 + -0x428) = 0x5f4c94;
  FUN_0044fd70(iVar1 + -0x424,0x5ce210);
  *(uint *)(iVar1 + -0x27c) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + 0x2b4) = 0x3ee66666;
  *(uint *)(iVar1 + 0x2b8) = 0x3f59999a;
  *(uint *)(iVar1 + 700) = 0x3ee66666;
  *(uint *)(iVar1 + -0x2a4) = 0;
  *(uint *)(iVar1 + -0x2a0) = 0;
  *(uint *)(iVar1 + -0x29c) = 1;
  *(uint *)(iVar1 + -0x298) = 0;
  *(uint *)(iVar1 + -0x294) = 0x42480000;
  *(uint *)(iVar1 + -0x290) = 0;
  return iVar1 + -0x6d8;
}
