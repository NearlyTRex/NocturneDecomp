// Name: FUN_0040ddb0
// Address: 0040ddb0
// Address Range: [[0040ddb0, 0040de44]]
// Convention: unknown
// Signature: int FUN_0040ddb0(undefined4 param_1)

#include "nocturne.h"

int FUN_0040ddb0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408790(param_1);
  iVar2 = FUN_0044fc80(iVar2 + 0x2b4);
  *(byte **)(iVar2 + -4) = &DAT_005f22f4;
  FUN_0044fd70(iVar2,"bullets6_1.kfm");
  pcVar3 = &DAT_005cb0d3;
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
  *(uint *)(iVar2 + 0x1bc) = 1;
  *(uint *)(iVar2 + 0x1c0) = 0;
  *(uint *)(iVar2 + 0x1c4) = 0x3e800000;
  *(uint *)(iVar2 + -0x1b8) = 0;
  return iVar2 + -0x2b4;
}
