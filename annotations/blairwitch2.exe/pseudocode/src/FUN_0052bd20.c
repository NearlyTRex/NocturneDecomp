// Name: FUN_0052bd20
// Address: 0052bd20
// Address Range: [[0052bd20, 0052c05e]]
// Convention: unknown
// Signature: undefined4 * FUN_0052bd20(int param_1)

#include "nocturne.h"

uint * FUN_0052bd20(int param_1)

{
  uint *puVar1;
  float *pfVar2;
  char cVar3;
  float fVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar5 = FUN_005b7f5f(param_1 + 4,0xfa,0x5fb270);
  iVar5 = FUN_005b7f5f(iVar5 + 0x19a2c,200,0x5fb290);
  iVar5 = FUN_005b7f5f(iVar5 + 0x1414a4,0x14,0x5fb2b0);
  iVar5 = FUN_005b7f5f(iVar5 + 0x554,0xfa,0x5fb2d0);
  puVar1 = (uint *)(iVar5 + -0x15b428);
  *puVar1 = 0;
  *(uint *)(iVar5 + -0x1419fc) = 0;
  *(uint *)(iVar5 + -0x57c) = 0xffffffff;
  *(uint *)(iVar5 + -0x578) = 0xffffffff;
  *(byte *)(iVar5 + -0xe338) = 0;
  *(uint *)(iVar5 + -0xe2c4) = 0;
  *(uint *)(iVar5 + -0xc380) = 0;
  *(uint *)(iVar5 + -0xa43c) = 0;
  *(uint *)(iVar5 + -0x84f8) = 0;
  *(uint *)(iVar5 + -0x65b4) = 0;
  *(uint *)(iVar5 + 0x42d0) = 0;
  *(uint *)(iVar5 + -0x4670) = 0;
  *(uint *)(iVar5 + -0x272c) = 0;
  *(uint *)(iVar5 + -0x574) = 1;
  *(uint *)(iVar5 + -0x570) = 0xffffffff;
  *(uint *)(iVar5 + -0x56c) = 0xffffffff;
  *(uint *)(iVar5 + -0x568) = 0;
  *(uint *)(iVar5 + -0x55c) = 0;
  *(uint *)(iVar5 + -0x558) = 0;
  *(uint *)(iVar5 + -0x798) = 0;
  *(uint *)(iVar5 + -0x794) = 0;
  *(uint *)(iVar5 + -0x78c) = 0;
  pcVar6 = (char *)0x5e5456;
  *(uint *)(iVar5 + -0x788) = 0;
  pcVar7 = (char *)(iVar5 + -0x780);
  *(uint *)(iVar5 + -0x784) = 0;
  do {
    cVar3 = *pcVar6;
    *pcVar7 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar3;
    pcVar7 = pcVar7 + 2;
  } while (cVar3 != '\0');
  FUN_00537e00(puVar1);
  *(uint *)(iVar5 + 0x42cc) = 0;
  *(uint *)(iVar5 + -0x768) = 0;
  *(uint *)(iVar5 + 17000) = 2;
  *(uint *)(iVar5 + -0x560) = 0;
  *(uint *)(iVar5 + -0x764) = 0;
  *(uint *)(iVar5 + 0x6214) = 0;
  *(uint *)(iVar5 + -0x760) = 0;
  *(uint *)(iVar5 + 0x6240) = 0;
  *(uint *)(iVar5 + -4) = 0;
  *(uint *)(iVar5 + -0x58c) = 0x10000;
  *(uint *)(iVar5 + -0x588) = 0x10000;
  pcVar6 = (char *)0x5e545b;
  *(uint *)(iVar5 + -0x584) = 0x10000;
  *(uint *)(iVar5 + 0x6244) = 0;
  pcVar7 = (char *)(iVar5 + -0x5c4);
  *(uint *)(iVar5 + -0x5c8) = 0;
  do {
    cVar3 = *pcVar6;
    *pcVar7 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar3;
    pcVar7 = pcVar7 + 2;
  } while (cVar3 != '\0');
  *(uint *)(iVar5 + -0x790) = 0;
  *(uint *)(iVar5 + -0x79c) = 0;
  *(uint *)(iVar5 + -0x5a4) = 0;
  *(uint *)(iVar5 + -0x5a0) = 0xffff6f78;
  *(uint *)(iVar5 + -0x59c) = 0xffff6f78;
  *(uint *)(iVar5 + -0x598) = 37000;
  *(uint *)(iVar5 + -0x594) = 0x280;
  *(uint *)(iVar5 + -0x590) = 0;
  *(uint *)(iVar5 + -0x7a0) = 0;
  *(uint *)(iVar5 + -0x76c) = 0;
  *(uint *)(iVar5 + -0xe2d4) = 0xbf800000;
  *(uint *)(iVar5 + -0xe2d0) = 0xbf800000;
  pfVar2 = (float *)(iVar5 + -0xe2d4);
  *(uint *)(iVar5 + -0xe2cc) = 0xbf800000;
  fVar4 = SQRT(*(float *)(iVar5 + -0xe2cc) * *(float *)(iVar5 + -0xe2cc) +
               *pfVar2 * *pfVar2 + *(float *)(iVar5 + -0xe2d0) * *(float *)(iVar5 + -0xe2d0));
  if (0.0 < fVar4) {
    fVar4 = 1.0 / fVar4;
    *pfVar2 = *pfVar2 * fVar4;
    *(float *)(iVar5 + -0xe2d0) = *(float *)(iVar5 + -0xe2d0) * fVar4;
    *(float *)(iVar5 + -0xe2cc) = *(float *)(iVar5 + -0xe2cc) * fVar4;
    *(uint *)(iVar5 + -0xe2c8) = 0;
    return puVar1;
  }
  *(uint *)(iVar5 + -0xe2cc) = 0;
  *(uint *)(iVar5 + -0xe2d0) = *(uint *)(iVar5 + -0xe2cc);
  *pfVar2 = *(float *)(iVar5 + -0xe2d0);
  *(uint *)(iVar5 + -0xe2c8) = 0;
  return puVar1;
}
