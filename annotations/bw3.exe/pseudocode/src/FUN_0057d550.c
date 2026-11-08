// Name: FUN_0057d550
// Address: 0057d550
// Address Range: [[0057d550, 0057d5fd]]
// Convention: unknown
// Signature: int FUN_0057d550(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0057d550(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = FUN_00488fd0(param_1);
  *(byte ***)(iVar4 + 0x154) = &PTR_FUN_005e63c4;
  FUN_0054eae0(iVar4 + 0x158,0x5d79f5);
  *(uint *)(iVar4 + 0x326c) = 0x3f800000;
  *(uint *)(iVar4 + 0x3270) = 0x40000000;
  *(uint *)(iVar4 + 0xd054) = 0;
  *(uint *)(iVar4 + 0xd06c) = 1;
  *(uint *)(iVar4 + 0xd080) = 0;
  uVar1 = _DAT_005e63a0;
  *(uint *)(iVar4 + 0xd084) = 0x40a00000;
  uVar2 = _DAT_005e63a4;
  *(uint *)(iVar4 + 0xd088) = 0;
  uVar3 = 0x41200000;
  *(uint *)(iVar4 + 0xd08c) = 0;
  *(uint *)(iVar4 + 0xd090) = 0;
  *(uint *)(iVar4 + 0x3274) = uVar1;
  *(uint *)(iVar4 + 0x3278) = uVar2;
  *(uint *)(iVar4 + 0xd094) = uVar3;
  return iVar4;
}
