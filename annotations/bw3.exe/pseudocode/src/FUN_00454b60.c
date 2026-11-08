// Name: FUN_00454b60
// Address: 00454b60
// Address Range: [[00454b60, 00454d17]]
// Convention: unknown
// Signature: int FUN_00454b60(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00454b60(uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar2 = FUN_00488fd0(param_1);
  pcVar6 = (char *)0x5ba3c7;
  *(byte ***)(iVar2 + 0x154) = &PTR_FUN_005de074;
  FUN_0054eae0(iVar2 + 0x158,"@d_deputy.dfm" + 1);
  *(uint *)(iVar2 + 0x326c) = 0x3f000000;
  pcVar7 = (char *)(iVar2 + 0xd074);
  *(uint *)(iVar2 + 0x3270) = 0x3f800000;
  uVar3 = _DAT_005de05c;
  *(uint *)(iVar2 + 0xd064) = 0;
  uVar4 = _DAT_005de060;
  *(uint *)(iVar2 + 0xd060) = 0;
  *(uint *)(iVar2 + 0x3274) = uVar3;
  *(uint *)(iVar2 + 0x3278) = uVar4;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  uVar3 = FUN_0040ce40(0x3e99999a,0x3f800000);
  *(uint *)(iVar2 + 0xd06c) = 0;
  *(uint *)(iVar2 + 0xd054) = uVar3;
  uVar4 = FUN_0040cea0(0,0xff);
  *(uint *)(iVar2 + 0xd05c) = 0;
  *(uint *)(iVar2 + 0xd070) = 0;
  *(uint *)(iVar2 + 0xd0d8) = 0;
  *(uint *)(iVar2 + 0xd0dc) = 0;
  *(uint *)(iVar2 + 0xd130) = 0;
  *(uint *)(iVar2 + 0xd0e0) = 0;
  *(uint *)(iVar2 + 0xd140) = 0;
  *(uint *)(iVar2 + 0xd144) = 0;
  *(uint *)(iVar2 + 0xd050) = 0;
  *(uint *)(iVar2 + 0x252c) = 0x3fc90fdb;
  *(uint *)(iVar2 + 0xd068) = 2;
  *(uint *)(iVar2 + 0xd0e4) = 0;
  *(uint *)(iVar2 + 0xd134) = 0;
  *(uint *)(iVar2 + 0xd138) = 0;
  *(uint *)(iVar2 + 0xd13c) = 0;
  uVar3 = 0x01C6E360;
  *(uint *)(iVar2 + 0xd058) = uVar4;
  *(uint *)(iVar2 + 0xd0d8) = 0;
  iVar5 = FUN_00491aa0(uVar3,"COMBATMODEHARD");
  if (iVar5 != 0) {
    *(uint *)(iVar2 + 0xd148) = 0x3f800000;
    return iVar2;
  }
  *(uint *)(iVar2 + 0xd148) = 0x3f400000;
  return iVar2;
}
