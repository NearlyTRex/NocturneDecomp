// Name: FUN_004a6f00
// Address: 004a6f00
// Address Range: [[004a6f00, 004a6f98]]
// Convention: unknown
// Signature: int FUN_004a6f00(undefined4 param_1)

#include "nocturne.h"

int FUN_004a6f00(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408600(param_1);
  iVar2 = FUN_00462500(iVar2 + 0x158);
  iVar2 = FUN_004a59b0(iVar2 + 0x1e8);
  pcVar3 = (char *)0x5c0ca3;
  *(uint *)(iVar2 + -0x1ec) = 0x5dff74;
  FUN_004625f0(iVar2 + -0x1e8,"question.kfm");
  *(uint *)(iVar2 + -0x6c) = 0;
  pcVar4 = (char *)(iVar2 + -100);
  *(uint *)(iVar2 + -0x68) = 0x41200000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x2a4) = 0;
  return iVar2 + -0x340;
}
