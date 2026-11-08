// Name: FUN_00412b20
// Address: 00412b20
// Address Range: [[00412b20, 00412bd0]]
// Convention: unknown
// Signature: int FUN_00412b20(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00412b20(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = FUN_00487db0(param_1);
  pcVar5 = (char *)0x5cb971;
  *(uint *)(iVar4 + 0x2b0) = 0x5f30a4;
  pcVar6 = (char *)(iVar4 + 0x10af8);
  FUN_005478b0(iVar4 + 0x2b4,0x5cb966);
  uVar2 = _DAT_005f3090;
  *(uint *)(iVar4 + 0x3430) = 0x3f19999a;
  uVar3 = _DAT_005f3094;
  *(uint *)(iVar4 + 0x3434) = 0x40000000;
  *(uint *)(iVar4 + 0x3438) = uVar2;
  *(uint *)(iVar4 + 0x343c) = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + 0x10b94) = 0;
  *(uint *)(iVar4 + 0x10b98) = 0;
  *(uint *)(iVar4 + 0x10ba4) = 0;
  *(uint *)(iVar4 + 0x10ba0) = *(uint *)(iVar4 + 0x10ba4);
  *(uint *)(iVar4 + 0x10b9c) = *(uint *)(iVar4 + 0x10ba0);
  return iVar4;
}
