// Name: FUN_004ce240
// Address: 004ce240
// Address Range: [[004ce240, 004ce3ad]]
// Convention: unknown
// Signature: int FUN_004ce240(undefined4 param_1)

#include "nocturne.h"

int FUN_004ce240(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00422340(param_1);
  iVar1 = FUN_00511c90(iVar1 + 0x10a9c);
  iVar1 = FUN_004da760(iVar1 + 0x138e0);
  iVar1 = FUN_004da760(iVar1 + 0x624);
  iVar2 = FUN_004da760(iVar1 + 0x624);
  iVar1 = iVar2 + -0x24fc4;
  *(int *)(iVar2 + -0xc44) = iVar1;
  *(int *)(iVar2 + -0x620) = iVar1;
  *(int *)(iVar2 + 4) = iVar1;
  *(byte **)(iVar2 + -0x24d14) = &DAT_005f8274;
  *(uint *)(iVar2 + 0x678) = 0;
  FUN_005b77c0(iVar2 + -0x1455c,0,0x34);
  *(uint *)(iVar2 + -0x14564) = 0;
  *(uint *)(iVar2 + -0x21b94) = 0x3f19999a;
  *(uint *)(iVar2 + -0x21b90) = 0x3f666666;
  *(uint *)(iVar2 + -0x21b8c) = 0x49742400;
  *(uint *)(iVar2 + -0x21b88) = 0x49742400;
  *(uint *)(iVar2 + -0x21b84) = 0x3fcccccd;
  *(uint *)(iVar2 + -0x21b80) = 0x40c00000;
  *(uint *)(iVar2 + -0x14560) = 2;
  *(uint *)(iVar2 + -0xc4c) = 0;
  *(uint *)(iVar2 + 0x640) = 0;
  *(uint *)(iVar2 + 0x644) = 0;
  *(uint *)(iVar2 + 0x648) = 0;
  *(uint *)(iVar2 + 0x64c) = 0;
  *(uint *)(iVar2 + 0x650) = 0;
  *(uint *)(iVar2 + 0x654) = 0;
  *(uint *)(iVar2 + 0x658) = 0;
  *(uint *)(iVar2 + 0x624) = 0;
  *(uint *)(iVar2 + 0x628) = 0;
  FUN_004cec30(iVar1);
  *(uint *)(iVar2 + 0x674) = 2;
  *(uint *)(iVar2 + -0x22798) = 0;
  *(uint *)(iVar2 + -0x22a14) = 1;
  *(uint *)(iVar2 + -0x22a28) = 0x41490fdb;
  return iVar1;
}
