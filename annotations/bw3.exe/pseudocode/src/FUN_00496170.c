// Name: FUN_00496170
// Address: 00496170
// Address Range: [[00496170, 004961dc]]
// Convention: unknown
// Signature: int FUN_00496170(undefined4 param_1)

#include "nocturne.h"

int FUN_00496170(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408600(param_1);
  iVar2 = FUN_00462500(iVar2 + 0x158);
  *(uint *)(iVar2 + -4) = 0x5df664;
  FUN_004625f0(iVar2,0x5c03dc);
  pcVar3 = (char *)0x5c03e9;
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
