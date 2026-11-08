// Name: FUN_004e4190
// Address: 004e4190
// Address Range: [[004e4190, 004e4221]]
// Convention: unknown
// Signature: int FUN_004e4190(undefined4 param_1)

#include "nocturne.h"

int FUN_004e4190(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408790(param_1);
  *(uint *)(iVar2 + 0x2b0) = 0x5f9744;
  pcVar3 = (char *)0x5dc105;
  *(uint *)(iVar2 + 0x2b4) = 0x42600000;
  *(uint *)(iVar2 + 0x2b8) = 0x40c00000;
  *(uint *)(iVar2 + 0xfc) = 1;
  pcVar4 = (char *)(iVar2 + 0x2c0);
  *(uint *)(iVar2 + 700) = 1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5dc10a;
  pcVar4 = (char *)(iVar2 + 0x324);
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
