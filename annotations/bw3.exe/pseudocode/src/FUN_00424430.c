// Name: FUN_00424430
// Address: 00424430
// Address Range: [[00424430, 00424549]]
// Convention: unknown
// Signature: int FUN_00424430(undefined4 param_1)

#include "nocturne.h"

int FUN_00424430(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0057ad70(param_1);
  iVar2 = FUN_005a30d7(iVar1 + 0x5a8,8,&DAT_005dbca0);
  *(uint *)(iVar2 + -0x454) = 0x5dcdb4;
  FUN_004625f0(iVar2 + -0x450,"burncross.kfm");
  *(uint *)(iVar2 + -0x2d0) = 0;
  *(uint *)(iVar2 + -0x2cc) = 0;
  *(uint *)(iVar2 + -0x2c4) = 1;
  *(uint *)(iVar2 + -0x2c0) = 0x42480000;
  *(uint *)(iVar2 + -700) = 0;
  *(uint *)(iVar2 + -0x3c) = 10;
  *(uint *)(iVar2 + -0x1c) = 1;
  *(uint *)(iVar2 + -0x34) = 2;
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + -0xc) = 0;
  *(uint *)(iVar2 + -8) = 0;
  *(uint *)(iVar2 + -0x14) = 0;
  *(uint *)(iVar2 + -0x10) = 0;
  iVar1 = iVar2 + -0x5a8;
  do {
    iVar3 = iVar1 + 0x2a4;
    *(uint *)(iVar1 + 0x700) = 0x3f000000;
    *(uint *)(iVar1 + 0x704) = 0x3f800000;
    *(uint *)(iVar1 + 0x708) = 0x3f000000;
    *(uint *)(iVar1 + 0x750) = 0;
    *(uint *)(iVar1 + 0x754) = 0;
    iVar1 = iVar3;
  } while (iVar3 != iVar2 + 0xf78);
  *(uint *)(iVar2 + 0x1520) = 0;
  return iVar2 + -0x5a8;
}
