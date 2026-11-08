// Name: FUN_00412780
// Address: 00412780
// Address Range: [[00412780, 0041283a]]
// Convention: unknown
// Signature: int FUN_00412780(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00412780(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = FUN_004a0410(param_1);
  pcVar5 = (char *)0x5d38e4;
  *(byte ***)(iVar4 + 0x154) = &PTR_FUN_005fc184;
  pcVar6 = (char *)(iVar4 + 0xc26c);
  FUN_00569f50(iVar4 + 0x158,0x5d38d9);
  uVar2 = _DAT_005fc170;
  *(uint *)(iVar4 + 0x2fec) = 0x3f19999a;
  uVar3 = _DAT_005fc174;
  *(uint *)(iVar4 + 0x2ff0) = 0x40000000;
  *(uint *)(iVar4 + 0x2ff4) = uVar2;
  *(uint *)(iVar4 + 0x2ff8) = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + 0xc308) = 0;
  *(uint *)(iVar4 + 0xc30c) = 0;
  *(uint *)(iVar4 + 0xc318) = 0;
  *(uint *)(iVar4 + 0xc314) = *(uint *)(iVar4 + 0xc318);
  *(uint *)(iVar4 + 0xc310) = *(uint *)(iVar4 + 0xc314);
  *(uint *)(iVar4 + 0xc268) = 0;
  return iVar4;
}
