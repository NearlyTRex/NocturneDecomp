// Name: FUN_00459140
// Address: 00459140
// Address Range: [[00459140, 004591a9]]
// Convention: unknown
// Signature: int FUN_00459140(undefined4 param_1)

#include "nocturne.h"

int FUN_00459140(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)0x5ba9a6;
  iVar2 = FUN_00408600(param_1);
  pcVar4 = (char *)(iVar2 + 0x188);
  *(uint *)(iVar2 + 0x154) = 0x5de204;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x158) = 0;
  *(byte *)(iVar2 + 0x15c) = 0;
  *(uint *)(iVar2 + 0x1f0) = 1;
  *(uint *)(iVar2 + 0x1ec) = 1;
  return iVar2;
}
