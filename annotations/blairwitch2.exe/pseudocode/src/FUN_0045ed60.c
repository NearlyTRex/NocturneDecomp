// Name: FUN_0045ed60
// Address: 0045ed60
// Address Range: [[0045ed60, 0045ef37]]
// Convention: unknown
// Signature: int FUN_0045ed60(undefined4 param_1)

#include "nocturne.h"

int FUN_0045ed60(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408790(param_1);
  iVar2 = FUN_0044fc80(iVar2 + 0x2b4);
  FUN_00492350(iVar2 + 800);
  *(uint *)(iVar2 + -4) = 0x5f54e4;
  FUN_0044fd70(iVar2,0x5d0956);
  *(uint *)(iVar2 + 0x180) = 0;
  *(uint *)(iVar2 + 0x184) = 1;
  *(uint *)(iVar2 + 0x188) = 0;
  *(uint *)(iVar2 + 0x18c) = 0;
  if ((uint *)(iVar2 + 0x83c) != (uint *)(iVar2 + -0x294)) {
    *(uint *)(iVar2 + 0x83c) = *(uint *)(iVar2 + -0x294);
    *(uint *)(iVar2 + 0x840) = *(uint *)(iVar2 + -0x290);
    *(uint *)(iVar2 + 0x844) = *(uint *)(iVar2 + -0x28c);
  }
  pcVar3 = "defaultDoorOpen";
  pcVar4 = (char *)(iVar2 + 400);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "defaultDoorClose";
  pcVar4 = (char *)(iVar2 + 500);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "door-locked.wav";
  *(byte *)(iVar2 + 0x70c) = 0;
  pcVar4 = (char *)(iVar2 + 0x7d4);
  *(byte *)(iVar2 + 0x770) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x838) = 0;
  *(uint *)(iVar2 + 0x854) = 0;
  *(uint *)(iVar2 + 0x858) = 0x3f800000;
  *(uint *)(iVar2 + 0x85c) = 0x3f800000;
  *(uint *)(iVar2 + 0x860) = 0x3f800000;
  *(uint *)(iVar2 + 0x17c) = 0;
  *(byte *)(iVar2 + 600) = 0;
  *(byte *)(iVar2 + 700) = 0;
  *(uint *)(iVar2 + 0x870) = 0;
  *(uint *)(iVar2 + 0x874) = 0;
  *(uint *)(iVar2 + 0x878) = 1;
  *(uint *)(iVar2 + 0x87c) = 0;
  pcVar3 = "shakeDoor";
  *(uint *)(iVar2 + 0x880) = 3;
  pcVar4 = (char *)(iVar2 + 0x88c);
  *(uint *)(iVar2 + 0x884) = 1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x888) = 0;
  *(uint *)(iVar2 + 0x8f0) = 0;
  return iVar2 + -0x2b4;
}
