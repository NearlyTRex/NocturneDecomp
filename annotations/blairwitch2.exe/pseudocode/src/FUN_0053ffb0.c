// Name: FUN_0053ffb0
// Address: 0053ffb0
// Address Range: [[0053ffb0, 0054006e]]
// Convention: unknown
// Signature: int FUN_0053ffb0(undefined4 param_1)

#include "nocturne.h"

int FUN_0053ffb0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408790(param_1);
  iVar2 = FUN_0044fc80(iVar2 + 0x2b4);
  iVar2 = FUN_005b1bc0(iVar2 + 0x200);
  *(uint *)(iVar2 + -0x204) = 0x5fb864;
  FUN_0044fd70(iVar2 + -0x200,"question.kfm");
  pcVar3 = (char *)0x5e688e;
  pcVar4 = (char *)(iVar2 + -0x7c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -0x10) = 0;
  *(uint *)(iVar2 + -0x14) = *(uint *)(iVar2 + -0x10);
  *(uint *)(iVar2 + -0x18) = *(uint *)(iVar2 + -0x14);
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + -8) = *(uint *)(iVar2 + -4);
  *(uint *)(iVar2 + -0xc) = *(uint *)(iVar2 + -8);
  *(uint *)(iVar2 + -0x84) = 0;
  *(uint *)(iVar2 + -0x80) = 0x42c80000;
  return iVar2 + -0x4b4;
}
