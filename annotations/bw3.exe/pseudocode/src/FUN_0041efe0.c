// Name: FUN_0041efe0
// Address: 0041efe0
// Address Range: [[0041efe0, 0041f12e]]
// Convention: unknown
// Signature: int FUN_0041efe0(undefined4 param_1)

#include "nocturne.h"

int FUN_0041efe0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_00462500(iVar1 + 0x158);
  iVar1 = FUN_0041ad40(iVar1 + 0x23c);
  *(uint *)(iVar1 + -0x240) = 0x5dc994;
  *(uint *)(iVar1 + -4) = 0;
  *(uint *)(iVar1 + -0x88) = 0x41a00000;
  *(uint *)(iVar1 + -0x84) = 0;
  *(uint *)(iVar1 + -0x8c) = 0;
  *(uint *)(iVar1 + -0x90) = *(uint *)(iVar1 + -0x8c);
  *(uint *)(iVar1 + -0x94) = *(uint *)(iVar1 + -0x90);
  *(byte *)(iVar1 + -0xc0) = 0;
  *(byte *)(iVar1 + -0xac) = 0;
  *(uint *)(iVar1 + -0x98) = 0;
  *(uint *)(iVar1 + -0x80) = 0;
  *(uint *)(iVar1 + -0x78) = 0;
  *(uint *)(iVar1 + -0x7c) = 0;
  *(uint *)(iVar1 + -0x74) = 0;
  *(byte *)(iVar1 + -0x68) = 0;
  *(uint *)(iVar1 + -0x70) = 0;
  *(uint *)(iVar1 + 0x25c) = 0;
  *(uint *)(iVar1 + 0x344) = 0;
  *(uint *)(iVar1 + 0x340) = *(uint *)(iVar1 + 0x344);
  *(uint *)(iVar1 + 0x33c) = *(uint *)(iVar1 + 0x340);
  FUN_004625f0(iVar1 + -0x23c,"?question.kfm" + 1);
  *(uint *)(iVar1 + 0x254) = 0xffffffff;
  *(uint *)(iVar1 + 0x260) = 1;
  *(uint *)(iVar1 + 0x264) = 1;
  *(uint *)(iVar1 + 0x268) = 0;
  *(byte *)(iVar1 + 0x26c) = 0;
  *(byte *)(iVar1 + 0x2d0) = 0;
  *(uint *)(iVar1 + 0x334) = 0;
  *(uint *)(iVar1 + 0x338) = 0;
  *(uint *)(iVar1 + 0x34c) = 0x40000000;
  return iVar1 + -0x394;
}
