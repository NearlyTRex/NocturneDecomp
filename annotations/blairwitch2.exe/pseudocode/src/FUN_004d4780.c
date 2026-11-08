// Name: FUN_004d4780
// Address: 004d4780
// Address Range: [[004d4780, 004d47da]]
// Convention: unknown
// Signature: int FUN_004d4780(undefined4 param_1)

#include "nocturne.h"

int FUN_004d4780(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00510460(param_1);
  *(uint *)(iVar2 + 0x2b0) = 0x5f8a14;
  FUN_005478b0(iVar2 + 0x2b4,"priest.dfm");
  pcVar3 = "killPriest";
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
