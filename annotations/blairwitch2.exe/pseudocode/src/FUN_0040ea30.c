// Name: FUN_0040ea30
// Address: 0040ea30
// Address Range: [[0040ea30, 0040eaba]]
// Convention: unknown
// Signature: int FUN_0040ea30(undefined4 param_1)

#include "nocturne.h"

int FUN_0040ea30(uint param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = FUN_00408790(param_1);
  iVar2 = FUN_0044fc80(iVar2 + 0x2b4);
  pcVar3 = "acmeanvilinc";
  *(uint *)(iVar2 + -4) = 0x5f2554;
  FUN_0044fd70(iVar2,"question.kfm");
  *(uint *)(iVar2 + 0x1e0) = 0x41c80000;
  *(uint *)(iVar2 + 0x1e4) = 0;
  pcVar4 = (char *)(iVar2 + 0x17c);
  *(uint *)(iVar2 + 0x1e8) = 0;
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
