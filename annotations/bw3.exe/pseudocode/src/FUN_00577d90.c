// Name: FUN_00577d90
// Address: 00577d90
// Address Range: [[00577d90, 00577edf]]
// Convention: unknown
// Signature: int FUN_00577d90(undefined4 param_1)

#include "nocturne.h"

int FUN_00577d90(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408600(param_1);
  iVar2 = FUN_005a30d7(iVar2 + 0x2a0,1000,0x5e60a0);
  *(uint *)(iVar2 + -0x14c) = 0x5e5ee4;
  *(uint *)(iVar2 + -0x148) = 0x40800000;
  *(uint *)(iVar2 + -0x144) = 0x3dcccccd;
  *(uint *)(iVar2 + -0x140) = 0x40800000;
  *(uint *)(iVar2 + -0x13c) = 0x8000;
  *(uint *)(iVar2 + 0x2af8c) = 0;
  *(uint *)(iVar2 + 0x2af90) = 0;
  *(uint *)(iVar2 + -0x1a4) = 1;
  *(uint *)(iVar2 + -0x1a8) = 0;
  *(uint *)(iVar2 + -0x134) = 0x3f800000;
  *(uint *)(iVar2 + -0x130) = 0x3f800000;
  *(uint *)(iVar2 + -0x138) = 0;
  pcVar3 = (char *)0x5d71ed;
  *(uint *)(iVar2 + -0x24) = 0;
  *(byte *)(iVar2 + -300) = 0;
  pcVar4 = (char *)(iVar2 + -0xec);
  *(byte *)(iVar2 + -0x10c) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d71f2;
  pcVar4 = (char *)(iVar2 + -0x88);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x20) = 0;
  *(uint *)(iVar2 + -0x1c) = 0x3f800000;
  *(uint *)(iVar2 + -0x18) = 0;
  *(uint *)(iVar2 + -0xc) = 0xff;
  *(uint *)(iVar2 + -8) = 0;
  *(uint *)(iVar2 + -0x10) = *(uint *)(iVar2 + -0xc);
  *(uint *)(iVar2 + -0x14) = *(uint *)(iVar2 + -0xc);
  return iVar2 + -0x2a0;
}
