// Name: FUN_004f0310
// Address: 004f0310
// Address Range: [[004f0310, 004f03f6]]
// Convention: unknown
// Signature: int FUN_004f0310(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004f0310(uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = FUN_00487db0(param_1);
  iVar4 = FUN_005adda0(iVar4 + 0x10bc0);
  iVar4 = FUN_005b6e60(iVar4 + 0x3ab60);
  *(byte **)(iVar4 + -0x4b470) = &DAT_005f9e94;
  *(uint *)(iVar4 + -0x482f0) = 0x3f000000;
  pcVar5 = (char *)0x5dd748;
  *(uint *)(iVar4 + -0x482ec) = 0x3f800000;
  uVar2 = _DAT_005f9e7c;
  *(byte *)(iVar4 + -0x3ac28) = 0;
  uVar3 = _DAT_005f9e80;
  *(byte *)(iVar4 + -0x3abc4) = 0;
  *(uint *)(iVar4 + -0x482e8) = uVar2;
  *(uint *)(iVar4 + -0x482e4) = uVar3;
  *(uint *)(iVar4 + -0x30) = 0;
  pcVar6 = (char *)(iVar4 + -0x28);
  *(uint *)(iVar4 + -0x2c) = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar4 + 0xc30) = 0;
  *(uint *)(iVar4 + 0xc2c) = 0xbf800000;
  *(uint *)(iVar4 + -0x4b618) = 0x10000;
  *(uint *)(iVar4 + -0x4b614) = 0x10000;
  *(uint *)(iVar4 + -0x4b610) = 0x10000;
  return iVar4 + -0x4b720;
}
