// Name: FUN_004ecba0
// Address: 004ecba0
// Address Range: [[004ecba0, 004ecbf8]]
// Convention: unknown
// Signature: int FUN_004ecba0(undefined4 param_1)

#include "nocturne.h"

int FUN_004ecba0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = "CDoc";
  iVar2 = FUN_004085c0(param_1);
  *(byte ***)(iVar2 + 0x154) = &PTR_FUN_00601ea4;
  *(uint *)(iVar2 + 0xfc) = 1;
  pcVar4 = (char *)(iVar2 + 0x15c);
  *(uint *)(iVar2 + 0x158) = 0;
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
