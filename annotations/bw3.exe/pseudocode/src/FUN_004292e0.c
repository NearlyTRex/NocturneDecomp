// Name: FUN_004292e0
// Address: 004292e0
// Address Range: [[004292e0, 00429413]]
// Convention: unknown
// Signature: int FUN_004292e0(undefined4 param_1)

#include "nocturne.h"

int FUN_004292e0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408600(param_1);
  iVar2 = FUN_005a30d7(iVar2 + 0x28c,0x14,0x5dd1d0);
  *(uint *)(iVar2 + -0x138) = 0x5dd0f4;
  *(uint *)(iVar2 + -0x134) = 10;
  *(uint *)(iVar2 + -0x130) = 0x40a00000;
  *(uint *)(iVar2 + 0x2d0) = 0x3f800000;
  *(uint *)(iVar2 + 0x2d4) = 0x3f000000;
  *(uint *)(iVar2 + 0x2d8) = 0x42000000;
  pcVar3 = "CHAINLINK.RAW";
  *(uint *)(iVar2 + 0x2dc) = 0x3f666666;
  *(uint *)(iVar2 + -0x128) = 0;
  pcVar4 = (char *)(iVar2 + -0x118);
  *(uint *)(iVar2 + -0x124) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x120) = 0xd;
  *(uint *)(iVar2 + -0x11c) = 0;
  pcVar3 = "chain-pull.wav";
  *(uint *)(iVar2 + -400) = 1;
  pcVar4 = (char *)(iVar2 + -0xd8);
  *(uint *)(iVar2 + -0x194) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "chain-move.wav";
  pcVar4 = (char *)(iVar2 + -0x70);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x2e8) = 0;
  *(uint *)(iVar2 + -4) = 1;
  return iVar2 + -0x28c;
}
