// Name: FUN_005aa5d0
// Address: 005aa5d0
// Address Range: [[005aa5d0, 005aa715]]
// Convention: unknown
// Signature: int FUN_005aa5d0(undefined4 param_1)

#include "nocturne.h"

int FUN_005aa5d0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004085c0(param_1);
  iVar2 = FUN_005c0357(iVar2 + 0x29c,1000,0x607cf0);
  *(uint *)(iVar2 + -0x148) = 0x607c14;
  *(uint *)(iVar2 + -0x144) = 0x40800000;
  *(uint *)(iVar2 + -0x140) = 0x3dcccccd;
  *(uint *)(iVar2 + -0x13c) = 0x40800000;
  *(uint *)(iVar2 + -0x138) = 0x8000;
  *(uint *)(iVar2 + 0x2af8c) = 0;
  *(uint *)(iVar2 + 0x2af90) = 0;
  *(uint *)(iVar2 + -0x1a0) = 1;
  *(uint *)(iVar2 + -0x1a4) = 0;
  *(uint *)(iVar2 + -0x130) = 0x3f800000;
  *(uint *)(iVar2 + -300) = 0x3f800000;
  *(uint *)(iVar2 + -0x134) = 0;
  pcVar3 = (char *)0x5f927e;
  *(uint *)(iVar2 + -0x20) = 0;
  *(byte *)(iVar2 + -0x128) = 0;
  pcVar4 = (char *)(iVar2 + -0xe8);
  *(byte *)(iVar2 + -0x108) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5f9283;
  pcVar4 = (char *)(iVar2 + -0x84);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x1c) = 0;
  *(uint *)(iVar2 + -0x18) = 0x3f800000;
  *(uint *)(iVar2 + -0x14) = 0;
  *(uint *)(iVar2 + -8) = 0xff;
  *(uint *)(iVar2 + -0xc) = *(uint *)(iVar2 + -8);
  *(uint *)(iVar2 + -0x10) = *(uint *)(iVar2 + -8);
  return iVar2 + -0x29c;
}
