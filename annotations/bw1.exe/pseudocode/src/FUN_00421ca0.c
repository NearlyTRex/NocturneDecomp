// Name: FUN_00421ca0
// Address: 00421ca0
// Address Range: [[00421ca0, 00421ddd]]
// Convention: unknown
// Signature: int FUN_00421ca0(undefined4 param_1)

#include "nocturne.h"

int FUN_00421ca0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004085c0(param_1);
  iVar1 = FUN_00468860(iVar1 + 0x158);
  iVar1 = FUN_0041da00(iVar1 + 0x23c);
  *(uint *)(iVar1 + -0x240) = 0x5fce54;
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
  *(uint *)(iVar1 + 0x2e0) = 0;
  *(uint *)(iVar1 + 0x2dc) = *(uint *)(iVar1 + 0x2e0);
  *(uint *)(iVar1 + 0x2d8) = *(uint *)(iVar1 + 0x2dc);
  FUN_00468950(iVar1 + -0x23c,"?question.kfm" + 1);
  *(uint *)(iVar1 + 0x254) = 0xffffffff;
  *(uint *)(iVar1 + 0x260) = 1;
  *(uint *)(iVar1 + 0x264) = 1;
  *(uint *)(iVar1 + 0x268) = 0;
  *(byte *)(iVar1 + 0x26c) = 0;
  *(uint *)(iVar1 + 0x2d0) = 0;
  *(uint *)(iVar1 + 0x2d4) = 0;
  return iVar1 + -0x394;
}
