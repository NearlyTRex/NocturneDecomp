// Name: FUN_00566860
// Address: 00566860
// Address Range: [[00566860, 00566999]]
// Convention: unknown
// Signature: int FUN_00566860(undefined4 param_1)

#include "nocturne.h"

int FUN_00566860(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408600(param_1);
  iVar2 = FUN_00462500(iVar2 + 0x158);
  pcVar3 = (char *)0x5d5b13;
  *(uint *)(iVar2 + -4) = 0x5e4b44;
  FUN_004625f0(iVar2,0x5d5b09);
  *(uint *)(iVar2 + 0x17c) = 0;
  *(uint *)(iVar2 + 0x180) = 0;
  pcVar4 = (char *)(iVar2 + 0x198);
  *(uint *)(iVar2 + 0x184) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d5b18;
  pcVar4 = (char *)(iVar2 + 0x1fc);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d5b1d;
  pcVar4 = (char *)(iVar2 + 0x260);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d5b22;
  pcVar4 = (char *)(iVar2 + 0x2c4);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x328) = 0x3f800000;
  *(uint *)(iVar2 + 0x32c) = 0x3f800000;
  *(byte *)(iVar2 + 0x334) = 0;
  *(byte *)(iVar2 + 0x398) = 0;
  *(uint *)(iVar2 + 0x3fc) = 0x3f800000;
  *(uint *)(iVar2 + 0x400) = 0x3dcccccd;
  *(uint *)(iVar2 + 0x404) = 0;
  return iVar2 + -0x158;
}
