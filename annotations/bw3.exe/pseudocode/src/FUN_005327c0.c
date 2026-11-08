// Name: FUN_005327c0
// Address: 005327c0
// Address Range: [[005327c0, 00532afe]]
// Convention: unknown
// Signature: undefined4 * FUN_005327c0(int param_1)

#include "nocturne.h"

uint * FUN_005327c0(int param_1)

{
  uint *puVar1;
  float *pfVar2;
  char cVar3;
  float fVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar5 = FUN_005a30d7(param_1 + 4,0xfa,0x5e3c20);
  iVar5 = FUN_005a30d7(iVar5 + 0x19a2c,200,0x5e3c40);
  iVar5 = FUN_005a30d7(iVar5 + 0x1414a8,0x14,0x5e3c60);
  iVar5 = FUN_005a30d7(iVar5 + 0x554,0xfa,0x5e3c80);
  puVar1 = (uint *)(iVar5 + -0x15b42c);
  *puVar1 = 0;
  *(uint *)(iVar5 + -0x141a00) = 0;
  *(uint *)(iVar5 + -0x580) = 0xffffffff;
  *(uint *)(iVar5 + -0x57c) = 0xffffffff;
  *(byte *)(iVar5 + -0xe33c) = 0;
  *(uint *)(iVar5 + -0xe2c8) = 0;
  *(uint *)(iVar5 + -0xc384) = 0;
  *(uint *)(iVar5 + -0xa440) = 0;
  *(uint *)(iVar5 + -0x84fc) = 0;
  *(uint *)(iVar5 + -0x65b8) = 0;
  *(uint *)(iVar5 + 0x42d0) = 0;
  *(uint *)(iVar5 + -0x4674) = 0;
  *(uint *)(iVar5 + -0x2730) = 0;
  *(uint *)(iVar5 + -0x578) = 1;
  *(uint *)(iVar5 + -0x574) = 0xffffffff;
  *(uint *)(iVar5 + -0x570) = 0xffffffff;
  *(uint *)(iVar5 + -0x56c) = 0;
  *(uint *)(iVar5 + -0x55c) = 0;
  *(uint *)(iVar5 + -0x558) = 0;
  *(uint *)(iVar5 + -0x79c) = 0;
  *(uint *)(iVar5 + -0x798) = 0;
  *(uint *)(iVar5 + -0x790) = 0;
  pcVar6 = "@none" + 1;
  *(uint *)(iVar5 + -0x78c) = 0;
  pcVar7 = (char *)(iVar5 + -0x784);
  *(uint *)(iVar5 + -0x788) = 0;
  do {
    cVar3 = *pcVar6;
    *pcVar7 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar3;
    pcVar7 = pcVar7 + 2;
  } while (cVar3 != '\0');
  FUN_0053ebe0(puVar1);
  *(uint *)(iVar5 + 0x42cc) = 0;
  *(uint *)(iVar5 + -0x76c) = 0;
  *(uint *)(iVar5 + 17000) = 2;
  *(uint *)(iVar5 + -0x560) = 0;
  *(uint *)(iVar5 + -0x768) = 0;
  *(uint *)(iVar5 + 0x6214) = 0;
  *(uint *)(iVar5 + -0x764) = 0;
  *(uint *)(iVar5 + 0x6240) = 0;
  *(uint *)(iVar5 + -4) = 0;
  *(uint *)(iVar5 + -0x590) = 0x10000;
  *(uint *)(iVar5 + -0x58c) = 0x10000;
  pcVar6 = (char *)0x5d011c;
  *(uint *)(iVar5 + -0x588) = 0x10000;
  *(uint *)(iVar5 + 0x6244) = 0;
  pcVar7 = (char *)(iVar5 + -0x5c8);
  *(uint *)(iVar5 + -0x5cc) = 0;
  do {
    cVar3 = *pcVar6;
    *pcVar7 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar3;
    pcVar7 = pcVar7 + 2;
  } while (cVar3 != '\0');
  *(uint *)(iVar5 + -0x794) = 0;
  *(uint *)(iVar5 + -0x7a0) = 0;
  *(uint *)(iVar5 + -0x5a8) = 0;
  *(uint *)(iVar5 + -0x5a4) = 0xffff6f78;
  *(uint *)(iVar5 + -0x5a0) = 0xffff6f78;
  *(uint *)(iVar5 + -0x59c) = 37000;
  *(uint *)(iVar5 + -0x598) = 0x280;
  *(uint *)(iVar5 + -0x594) = 0;
  *(uint *)(iVar5 + -0x7a4) = 0;
  *(uint *)(iVar5 + -0x770) = 0;
  *(uint *)(iVar5 + -0xe2d8) = 0xbf800000;
  *(uint *)(iVar5 + -0xe2d4) = 0xbf800000;
  pfVar2 = (float *)(iVar5 + -0xe2d8);
  *(uint *)(iVar5 + -0xe2d0) = 0xbf800000;
  fVar4 = SQRT(*(float *)(iVar5 + -0xe2d0) * *(float *)(iVar5 + -0xe2d0) +
               *pfVar2 * *pfVar2 + *(float *)(iVar5 + -0xe2d4) * *(float *)(iVar5 + -0xe2d4));
  if (0.0 < fVar4) {
    fVar4 = 1.0 / fVar4;
    *pfVar2 = *pfVar2 * fVar4;
    *(float *)(iVar5 + -0xe2d4) = *(float *)(iVar5 + -0xe2d4) * fVar4;
    *(float *)(iVar5 + -0xe2d0) = *(float *)(iVar5 + -0xe2d0) * fVar4;
    *(uint *)(iVar5 + -0xe2cc) = 0;
    return puVar1;
  }
  *(uint *)(iVar5 + -0xe2d0) = 0;
  *(uint *)(iVar5 + -0xe2d4) = *(uint *)(iVar5 + -0xe2d0);
  *pfVar2 = *(float *)(iVar5 + -0xe2d4);
  *(uint *)(iVar5 + -0xe2cc) = 0;
  return puVar1;
}
