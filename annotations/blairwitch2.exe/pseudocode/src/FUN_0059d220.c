// Name: FUN_0059d220
// Address: 0059d220
// Address Range: [[0059d220, 0059d2f6]]
// Convention: unknown
// Signature: int FUN_0059d220(undefined4 param_1)

#include "nocturne.h"

int FUN_0059d220(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004ea8b0(param_1);
  *(uint *)(iVar2 + 0x2b0) = 0x5fea34;
  FUN_0044fd70(iVar2 + 0x2b4,0x5ef7fb);
  *(uint *)(iVar2 + 0x43c) = 8;
  *(uint *)(iVar2 + 0x6d8) = 0x41c80000;
  pcVar3 = "axeimpactflesh0?.wav";
  *(uint *)(iVar2 + 0x6dc) = 0x42480000;
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
  pcVar3 = "axeimpactflesh0?.wav";
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
  pcVar3 = "axeimpactwood0?.wav";
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
