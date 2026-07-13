// Name: FUN_0043cf10
// Address: 0043cf10
// Address Range: [[0043cf10, 0043cfc1]]
// Convention: unknown
// Signature: int FUN_0043cf10(undefined4 param_1)

#include "nocturne.h"

int FUN_0043cf10(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00553d90(param_1);
  iVar1 = FUN_0048cf60(iVar1 + 0x574);
  *(byte ***)(iVar1 + -0x428) = &PTR_FUN_0059bb54;
  FUN_00454580(iVar1 + -0x424,"crossbow.kfm");
  *(uint *)(iVar1 + -0x27c) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + 0x150) = 0x3ee66666;
  *(uint *)(iVar1 + 0x154) = 0x3f59999a;
  *(uint *)(iVar1 + 0x158) = 0x3ee66666;
  *(uint *)(iVar1 + -0x2a4) = 0;
  *(uint *)(iVar1 + -0x2a0) = 0;
  *(uint *)(iVar1 + -0x29c) = 1;
  *(uint *)(iVar1 + -0x298) = 0;
  *(uint *)(iVar1 + -0x294) = 0x42480000;
  *(uint *)(iVar1 + -0x290) = 0;
  return iVar1 + -0x574;
}
