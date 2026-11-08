// Name: FUN_004f0990
// Address: 004f0990
// Address Range: [[004f0990, 004f09ea]]
// Convention: unknown
// Signature: int FUN_004f0990(undefined4 param_1)

#include "nocturne.h"

int FUN_004f0990(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00531670(param_1);
  *(byte ***)(iVar2 + 0x154) = &PTR_FUN_006024a4;
  FUN_00569f50(iVar2 + 0x158,"priest.dfm");
  pcVar3 = "killPriest";
  pcVar4 = (char *)(iVar2 + 0x1fab8);
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
