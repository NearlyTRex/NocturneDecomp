// Name: FUN_004a4ad0
// Address: 004a4ad0
// Address Range: [[004a4ad0, 004a4cc7]]
// Convention: unknown
// Signature: int FUN_004a4ad0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a4ad0(uint param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = FUN_0057ad70(param_1);
  iVar6 = FUN_005a30d7(iVar5 + 0x614,0xc,&DAT_005dbca0);
  iVar5 = iVar6 + -0x614;
  *(uint *)(iVar6 + -0x4c0) = 0x5dfd34;
  FUN_004625f0(iVar6 + -0x4bc,0x5c0af8);
  *(uint *)(iVar6 + -0x33c) = 0;
  *(uint *)(iVar6 + -0x338) = 0;
  *(uint *)(iVar6 + -0x330) = 1;
  *(uint *)(iVar6 + -0x32c) = 0x42480000;
  *(uint *)(iVar6 + -0x328) = 0;
  *(uint *)(iVar6 + -0x334) = 0xc;
  *(uint *)(iVar6 + -0xa8) = 10;
  *(uint *)(iVar6 + -0x88) = 0xf;
  *(uint *)(iVar6 + -0xa0) = 1;
  *(uint *)(iVar6 + -0x98) = 0;
  *(uint *)(iVar6 + -0x9c) = 2;
  *(uint *)(iVar6 + -0x44) = 0x8000;
  *(byte *)(iVar6 + -100) = 0x20;
  FUN_0045ab30(iVar6 + -0x80,0x41000000);
  *(uint *)(iVar6 + -0x60) = 1;
  *(uint *)(iVar6 + -4) = 0x8000;
  *(byte *)(iVar6 + -0x24) = 0x20;
  FUN_0045ab30(iVar6 + -0x40,0x41000000);
  *(uint *)(iVar6 + -0x20) = 1;
  *(uint *)(iVar6 + 0x1fb0) = 0;
  iVar8 = iVar5;
  do {
    iVar7 = iVar8 + 0x2a4;
    *(uint *)(iVar8 + 0x76c) = 0x3f000000;
    *(uint *)(iVar8 + 0x770) = 0x3f800000;
    *(uint *)(iVar8 + 0x774) = 0x3f000000;
    *(uint *)(iVar8 + 0x7bc) = 0;
    *(uint *)(iVar8 + 0x7c0) = 0;
    fVar4 = _DAT_005c0b0d;
    iVar8 = iVar7;
  } while (iVar7 != iVar6 + 0x199c);
  iVar7 = 0;
  fVar2 = (float)_DAT_005c0b1d;
  fVar3 = (float)_DAT_005c0b05;
  iVar8 = iVar5;
  do {
    fVar1 = (float)iVar7 * fVar3 + fVar2;
    *(float *)(iVar8 + 0x76c) = fVar1;
    *(float *)(iVar8 + 0x774) = fVar1;
    iVar7 = iVar7 + 1;
    *(float *)(iVar8 + 0x770) = fVar1 * fVar4;
    iVar8 = iVar8 + 0x2a4;
  } while (iVar7 < 6);
  iVar7 = 6;
  fVar2 = (float)_DAT_005c0b1d;
  fVar3 = (float)_DAT_005c0b15;
  iVar8 = iVar6 + 0x9c4;
  do {
    fVar1 = (float)iVar7 * fVar3 + fVar2;
    *(float *)(iVar8 + 0x76c) = fVar1;
    *(float *)(iVar8 + 0x774) = fVar1;
    iVar7 = iVar7 + 1;
    *(float *)(iVar8 + 0x770) = fVar1 * fVar4;
    iVar8 = iVar8 + 0x2a4;
  } while (iVar7 < 0xc);
  return iVar5;
}
