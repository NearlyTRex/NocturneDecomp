// Name: FUN_0040e510
// Address: 0040e510
// Address Range: [[0040e510, 0040e5bf]]
// Convention: unknown
// Signature: int FUN_0040e510(undefined4 param_1)

#include "nocturne.h"

int FUN_0040e510(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408790(param_1);
  iVar2 = FUN_0044fc80(iVar2 + 0x2b4);
  *(uint *)(iVar2 + -4) = 0x5f2424;
  FUN_0044fd70(iVar2,0x5cb251);
  pcVar3 = (char *)0x5cb25d;
  pcVar4 = (char *)(iVar2 + 0x17c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x1bc) = 0x14;
  *(uint *)(iVar2 + 0x1c0) = 0;
  *(uint *)(iVar2 + 0x1c4) = 0;
  *(uint *)(iVar2 + 0x1c8) = 0;
  *(uint *)(iVar2 + 0x1cc) = 0;
  *(byte *)(iVar2 + 0x1d0) = 0;
  *(uint *)(iVar2 + 0x1f0) = 0;
  return iVar2 + -0x2b4;
}
