// Name: FUN_0040f690
// Address: 0040f690
// Address Range: [[0040f690, 0040f771]]
// Convention: unknown
// Signature: int FUN_0040f690(undefined4 param_1)

#include "nocturne.h"

int FUN_0040f690(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004ce240(param_1);
  *(uint *)(iVar2 + 0x2b0) = 0x5f2994;
  FUN_005478b0(iVar2 + 0x2b4,0x5cb413);
  *(uint *)(iVar2 + 0x25714) = 0x3f800000;
  *(uint *)(iVar2 + 0x25710) = 0;
  *(uint *)(iVar2 + 0x2570c) = *(uint *)(iVar2 + 0x25710);
  *(uint *)(iVar2 + 0x25708) = *(uint *)(iVar2 + 0x2570c);
  *(uint *)(iVar2 + 0x25718) = 0;
  pcVar3 = (char *)0x5cb41d;
  *(uint *)(iVar2 + 0x2571c) = 0;
  *(uint *)(iVar2 + 0xfc) = 1;
  pcVar4 = (char *)(iVar2 + 0x25640);
  *(uint *)(iVar2 + 0x25738) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5cb422;
  pcVar4 = (char *)(iVar2 + 0x256a4);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  FUN_0044fd70(&DAT_007bc51c,"baronshell.kfm");
  *(uint *)(iVar2 + 0x2573c) = 0;
  return iVar2;
}
