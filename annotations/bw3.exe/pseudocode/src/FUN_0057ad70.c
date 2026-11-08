// Name: FUN_0057ad70
// Address: 0057ad70
// Address Range: [[0057ad70, 0057aec5]]
// Convention: unknown
// Signature: int FUN_0057ad70(undefined4 param_1)

#include "nocturne.h"

int FUN_0057ad70(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_00462500(iVar1 + 0x158);
  iVar1 = FUN_0041ad40(iVar1 + 0x1b0);
  *(byte ***)(iVar1 + -0x1b4) = &PTR_FUN_005e6244;
  *(uint *)(iVar1 + 0x25c) = 0x40a00000;
  *(uint *)(iVar1 + -8) = 0;
  *(uint *)(iVar1 + -0x34) = 0;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + 0x260) = 0x14;
  *(uint *)(iVar1 + 0x264) = 0;
  *(uint *)(iVar1 + -0x208) = 1;
  *(uint *)(iVar1 + -0x30) = 0;
  *(uint *)(iVar1 + -0x2c) = 0;
  *(uint *)(iVar1 + -0x28) = 0;
  *(uint *)(iVar1 + -0x24) = 0;
  *(uint *)(iVar1 + -0x20) = 0x43480000;
  *(uint *)(iVar1 + -0x1c) = 0;
  *(uint *)(iVar1 + -0x18) = 1;
  *(uint *)(iVar1 + -0x14) = 0xff;
  *(uint *)(iVar1 + -0x10) = 0;
  *(uint *)(iVar1 + -0xc) = 0;
  FUN_004625f0(iVar1 + -0x1b0,0x5d7813);
  *(uint *)(iVar1 + 0x278) = 0;
  *(uint *)(iVar1 + 0x27c) = 0;
  *(uint *)(iVar1 + 0x268) = 0;
  *(uint *)(iVar1 + 0x284) = 1;
  *(uint *)(iVar1 + 0x280) = 0x10000;
  *(uint *)(iVar1 + 0x26c) = 0;
  *(uint *)(iVar1 + 0x274) = 1;
  *(uint *)(iVar1 + 0x288) = 0;
  *(uint *)(iVar1 + 0x270) = 1;
  return iVar1 + -0x308;
}
