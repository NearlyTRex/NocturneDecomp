// Name: FUN_005a69f0
// Address: 005a69f0
// Address Range: [[005a69f0, 005a6b2a]]
// Convention: unknown
// Signature: int FUN_005a69f0(undefined4 param_1)

#include "nocturne.h"

int FUN_005a69f0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004ea8b0(param_1);
  *(byte ***)(iVar2 + 0x2b0) = &PTR_LAB_005ffe84;
  FUN_0044fd70(iVar2 + 0x2b4,0x5f06e9);
  *(uint *)(iVar2 + 0x43c) = 0xd;
  *(uint *)(iVar2 + 0x6d8) = 0x41c80000;
  pcVar3 = "shovel?.wav";
  *(uint *)(iVar2 + 0x6dc) = 0x42480000;
  *(uint *)(iVar2 + 0x6e0) = 0x3f666666;
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
  pcVar3 = (char *)0x5f0700;
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
  pcVar3 = (char *)0x5f070c;
  pcVar4 = (char *)(iVar2 + 0x7c4);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x2a8) = 0x3dcccccd;
  *(uint *)(iVar2 + 0xfc) = 0;
  *(uint *)(iVar2 + 0x828) = 0;
  *(uint *)(iVar2 + 0x82c) = 0;
  *(uint *)(iVar2 + 0x834) = 0;
  *(uint *)(iVar2 + 0x830) = 0x3f333333;
  *(uint *)(iVar2 + 0x844) = 0;
  *(uint *)(iVar2 + 0x840) = 0;
  *(uint *)(iVar2 + 0x83c) = 0;
  *(uint *)(iVar2 + 0x838) = 0;
  return iVar2;
}
