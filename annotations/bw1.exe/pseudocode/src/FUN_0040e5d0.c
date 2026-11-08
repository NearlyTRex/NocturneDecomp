// Name: FUN_0040e5d0
// Address: 0040e5d0
// Address Range: [[0040e5d0, 0040e65a]]
// Convention: unknown
// Signature: int FUN_0040e5d0(undefined4 param_1)

#include "nocturne.h"

int FUN_0040e5d0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004085c0(param_1);
  iVar2 = FUN_00468860(iVar2 + 0x158);
  pcVar3 = "acmeanvilinc";
  *(uint *)(iVar2 + -4) = 0x5fb6b4;
  FUN_00468950(iVar2,"question.kfm");
  *(uint *)(iVar2 + 0x1e0) = 0x41c80000;
  *(uint *)(iVar2 + 0x1e4) = 0;
  pcVar4 = (char *)(iVar2 + 0x17c);
  *(uint *)(iVar2 + 0x1e8) = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return iVar2 + -0x158;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return iVar2 + -0x158;
}
