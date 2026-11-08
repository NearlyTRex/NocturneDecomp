// Name: FUN_004d0f30
// Address: 004d0f30
// Address Range: [[004d0f30, 004d0f8a]]
// Convention: unknown
// Signature: int FUN_004d0f30(undefined4 param_1)

#include "nocturne.h"

int FUN_004d0f30(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00510460(param_1);
  *(byte **)(iVar2 + 0x2b0) = &DAT_005f8524;
  FUN_005478b0(iVar2 + 0x2b4,0x5da0df);
  pcVar3 = "killHiram";
  pcVar4 = (char *)(iVar2 + 0x24348);
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
