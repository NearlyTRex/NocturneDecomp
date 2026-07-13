// Name: FUN_004133e0
// Address: 004133e0
// Address Range: [[004133e0, 00413490]]
// Convention: unknown
// Signature: int FUN_004133e0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004133e0(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = FUN_00479560(param_1);
  pcVar5 = &DAT_00578aa2;
  *(byte ***)(iVar4 + 0x14c) = &PTR_FUN_0059a164;
  pcVar6 = (char *)(iVar4 + 0xbd24);
  FUN_0051e0c0(iVar4 + 0x150,"batman.dfm");
  uVar2 = _DAT_0059a150;
  *(uint *)(iVar4 + 0x2dd4) = 0x3f19999a;
  uVar3 = _DAT_0059a154;
  *(uint *)(iVar4 + 0x2dd8) = 0x40000000;
  *(uint *)(iVar4 + 0x2ddc) = uVar2;
  *(uint *)(iVar4 + 0x2de0) = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + 0xbdc0) = 0;
  *(uint *)(iVar4 + 0xbdc4) = 0;
  *(uint *)(iVar4 + 0xbdd0) = 0;
  *(uint *)(iVar4 + 0xbdcc) = *(uint *)(iVar4 + 0xbdd0);
  *(uint *)(iVar4 + 0xbdc8) = *(uint *)(iVar4 + 0xbdcc);
  return iVar4;
}
