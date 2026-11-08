// Name: FUN_00492920
// Address: 00492920
// Address Range: [[00492920, 0049298c]]
// Convention: unknown
// Signature: int FUN_00492920(undefined4 param_1)

#include "nocturne.h"

int FUN_00492920(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408790(param_1);
  iVar2 = FUN_0044fc80(iVar2 + 0x2b4);
  *(uint *)(iVar2 + -4) = 0x5f6244;
  FUN_0044fd70(iVar2,0x5d525e);
  pcVar3 = (char *)0x5d526b;
  pcVar4 = (char *)(iVar2 + 0x180);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return iVar2 + -0x2b4;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return iVar2 + -0x2b4;
}
