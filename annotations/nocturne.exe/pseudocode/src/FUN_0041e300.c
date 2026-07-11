// Name: FUN_0041e300
// Address: 0041e300
// Address Range: [[0041e300, 0041e425]]
// Convention: unknown
// Signature: int FUN_0041e300(undefined4 param_1)

#include "nocturne.h"

int FUN_0041e300(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00409d30(param_1);
  iVar1 = FUN_00454490(iVar1 + 0x150);
  iVar1 = FUN_0041a610(iVar1 + 0x23c);
  *(byte ***)(iVar1 + -0x240) = &PTR_FUN_0059aad4;
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
  FUN_00454580(iVar1 + -0x23c,"?question.kfm" + 1);
  *(uint *)(iVar1 + 0x254) = 0xffffffff;
  *(uint *)(iVar1 + 0x260) = 1;
  *(uint *)(iVar1 + 0x264) = 1;
  *(uint *)(iVar1 + 0x268) = 0;
  *(byte *)(iVar1 + 0x26c) = 0;
  *(uint *)(iVar1 + 0x2d0) = 0;
  *(uint *)(iVar1 + 0x2d4) = 0;
  return iVar1 + -0x38c;
}
