// Name: FUN_004ab2d0
// Address: 004ab2d0
// Address Range: [[004ab2d0, 004ab33c]]
// Convention: unknown
// Signature: int FUN_004ab2d0(undefined4 param_1)

#include "nocturne.h"

int FUN_004ab2d0(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_004085c0(param_1);
  iVar2 = FUN_00468860(iVar2 + 0x158);
  *(uint *)(iVar2 + -4) = 0x5ffd14;
  FUN_00468950(iVar2,0x5df0a0);
  pcVar3 = (char *)0x5df0ad;
  pcVar4 = (char *)(iVar2 + 0x180);
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
