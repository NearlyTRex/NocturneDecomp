// Name: FUN_004b9af0
// Address: 004b9af0
// Address Range: [[004b9af0, 004b9b4a]]
// Convention: unknown
// Signature: int FUN_004b9af0(undefined4 param_1)

#include "nocturne.h"

int FUN_004b9af0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004ee950(param_1);
  *(byte ***)(iVar2 + 0x14c) = &PTR_FUN_0059f264;
  FUN_0051e0c0(iVar2 + 0x150,"priest.dfm");
  pcVar3 = "killPriest";
  pcVar4 = (char *)(iVar2 + 0x1f570);
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
