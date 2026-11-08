// Name: FUN_0040f210
// Address: 0040f210
// Address Range: [[0040f210, 0040f2f1]]
// Convention: unknown
// Signature: int FUN_0040f210(undefined4 param_1)

#include "nocturne.h"

int FUN_0040f210(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004ea830(param_1);
  *(byte ***)(iVar2 + 0x154) = &PTR_FUN_005fbac4;
  FUN_00569f50(iVar2 + 0x158,0x5d337e);
  *(uint *)(iVar2 + 0x20080) = 0x3f800000;
  *(uint *)(iVar2 + 0x2007c) = 0;
  *(uint *)(iVar2 + 0x20078) = *(uint *)(iVar2 + 0x2007c);
  *(uint *)(iVar2 + 0x20074) = *(uint *)(iVar2 + 0x20078);
  *(uint *)(iVar2 + 0x20084) = 0;
  pcVar3 = (char *)0x5d3388;
  *(uint *)(iVar2 + 0x20088) = 0;
  *(uint *)(iVar2 + 0xfc) = 1;
  pcVar4 = (char *)(iVar2 + 0x1ffac);
  *(uint *)(iVar2 + 0x200a4) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d338d;
  pcVar4 = (char *)(iVar2 + 0x20010);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  FUN_00468950(&DAT_007c351c,"baronshell.kfm");
  *(uint *)(iVar2 + 0x200a8) = 0;
  return iVar2;
}
