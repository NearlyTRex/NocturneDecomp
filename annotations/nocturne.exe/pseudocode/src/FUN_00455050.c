// Name: FUN_00455050
// Address: 00455050
// Address Range: [[00455050, 004551ee]]
// Convention: unknown
// Signature: int FUN_00455050(undefined4 param_1)

#include "nocturne.h"

int FUN_00455050(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00409d30(param_1);
  iVar2 = FUN_00454490(iVar2 + 0x150);
  FUN_00481620(iVar2 + 800);
  *(byte ***)(iVar2 + -4) = &PTR_FUN_0059c284;
  FUN_00454580(iVar2,"churchd01.kfm");
  *(uint *)(iVar2 + 0x180) = 0;
  *(uint *)(iVar2 + 0x184) = 1;
  *(uint *)(iVar2 + 0x188) = 0;
  *(uint *)(iVar2 + 0x18c) = 0;
  if ((uint *)(iVar2 + 0x83c) != (uint *)(iVar2 + -0x130)) {
    *(uint *)(iVar2 + 0x83c) = *(uint *)(iVar2 + -0x130);
    *(uint *)(iVar2 + 0x840) = *(uint *)(iVar2 + -300);
    *(uint *)(iVar2 + 0x844) = *(uint *)(iVar2 + -0x128);
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
  *(uint *)(iVar2 + 0x880) = 3;
  *(uint *)(iVar2 + 0x884) = 1;
  return iVar2 + -0x150;
}
