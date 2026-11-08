// Name: FUN_004e6f90
// Address: 004e6f90
// Address Range: [[004e6f90, 004e70de]]
// Convention: unknown
// Signature: int FUN_004e6f90(undefined4 param_1)

#include "nocturne.h"

int FUN_004e6f90(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_0057ad70(param_1);
  *(uint *)(iVar2 + 0x154) = 0x5e27a4;
  FUN_004625f0(iVar2 + 0x158,0x5c7051);
  *(uint *)(iVar2 + 0x2e0) = 7;
  *(uint *)(iVar2 + 0x5b8) = 0xffffffff;
  *(uint *)(iVar2 + 0x568) = 0;
  *(uint *)(iVar2 + 0x2d8) = 0;
  *(uint *)(iVar2 + 0x2dc) = 0;
  *(uint *)(iVar2 + 0x2e4) = 0;
  *(uint *)(iVar2 + 0x2e8) = 0x40a00000;
  *(uint *)(iVar2 + 0x2ec) = 0;
  *(uint *)(iVar2 + 0x2f0) = 0;
  *(uint *)(iVar2 + 0x594) = 1;
  *(uint *)(iVar2 + 0x598) = 0x41200000;
  *(uint *)(iVar2 + 0x59c) = 0x41700000;
  *(uint *)(iVar2 + 0x5a0) = 0x3f000000;
  *(uint *)(iVar2 + 0x5a4) = 0;
  pcVar3 = "shovel?.wav";
  *(uint *)(iVar2 + 0x5ac) = 0;
  *(uint *)(iVar2 + 0x5b0) = 0;
  pcVar4 = (char *)(iVar2 + 0x5bc);
  *(uint *)(iVar2 + 0x5b8) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5c7067;
  pcVar4 = (char *)(iVar2 + 0x620);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5c7073;
  pcVar4 = (char *)(iVar2 + 0x684);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return iVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return iVar2;
}
