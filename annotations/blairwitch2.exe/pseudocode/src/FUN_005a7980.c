// Name: FUN_005a7980
// Address: 005a7980
// Address Range: [[005a7980, 005a7a56]]
// Convention: unknown
// Signature: int FUN_005a7980(undefined4 param_1)

#include "nocturne.h"

int FUN_005a7980(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004ea8b0(param_1);
  *(uint *)(iVar2 + 0x2b0) = 0x5fff94;
  FUN_0044fd70(iVar2 + 0x2b4,0x5f07ad);
  *(uint *)(iVar2 + 0x43c) = 0xd;
  *(uint *)(iVar2 + 0x6d8) = 0x40a00000;
  pcVar3 = "shovel?.wav";
  *(uint *)(iVar2 + 0x6dc) = 0x41200000;
  *(uint *)(iVar2 + 0x6e0) = 0;
  pcVar4 = (char *)(iVar2 + 0x6fc);
  *(uint *)(iVar2 + 0x6e4) = 1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5f07c4;
  pcVar4 = (char *)(iVar2 + 0x760);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5f07d0;
  pcVar4 = (char *)(iVar2 + 0x7c4);
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
