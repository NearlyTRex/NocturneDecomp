// Name: FUN_0048e370
// Address: 0048e370
// Address Range: [[0048e370, 0048e408]]
// Convention: unknown
// Signature: int FUN_0048e370(undefined4 param_1)

#include "nocturne.h"

int FUN_0048e370(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00409d30(param_1);
  iVar2 = FUN_00454490(iVar2 + 0x150);
  iVar2 = FUN_0048cf60(iVar2 + 0x1e8);
  pcVar3 = &DAT_00581646;
  *(byte ***)(iVar2 + -0x1ec) = &PTR_FUN_0059d684;
  FUN_00454580(iVar2 + -0x1e8,"question.kfm");
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
  *(uint *)(iVar2 + 0x29c) = 0;
  return iVar2 + -0x338;
}
