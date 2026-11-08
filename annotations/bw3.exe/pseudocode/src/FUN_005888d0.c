// Name: FUN_005888d0
// Address: 005888d0
// Address Range: [[005888d0, 00588a67]]
// Convention: unknown
// Signature: int FUN_005888d0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005888d0(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar3 = FUN_00488fd0(param_1);
  pcVar6 = (char *)0x5d83e4;
  *(byte ***)(iVar3 + 0x154) = &PTR_FUN_005e6794;
  FUN_0054eae0(iVar3 + 0x158,0x5d83d7);
  *(uint *)(iVar3 + 0x326c) = 0x3f000000;
  pcVar7 = (char *)(iVar3 + 0xd074);
  *(uint *)(iVar3 + 0x3270) = 0x3f800000;
  uVar4 = _DAT_005e677c;
  *(uint *)(iVar3 + 0xd064) = 0;
  uVar2 = _DAT_005e6780;
  *(uint *)(iVar3 + 0xd060) = 0;
  *(uint *)(iVar3 + 0x3274) = uVar4;
  *(uint *)(iVar3 + 0x3278) = uVar2;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  uVar4 = FUN_0040ce40(0x3e99999a,0x3f800000);
  *(uint *)(iVar3 + 0xd06c) = 0;
  *(uint *)(iVar3 + 0xd054) = uVar4;
  uVar4 = FUN_0040cea0(0,0xff);
  *(uint *)(iVar3 + 0xd05c) = 0;
  *(uint *)(iVar3 + 0xd070) = 0;
  *(uint *)(iVar3 + 0xd058) = uVar4;
  iVar5 = 0x01ED78C8 + 0x14d0f0;
  *(uint *)(iVar3 + 0xd0d8) = 0;
  *(uint *)(iVar3 + 0xd130) = 0;
  iVar5 = FUN_005a3260(iVar5,"mine.geo");
  *(uint *)(iVar3 + 0xd0dc) = 0;
  *(uint *)(iVar3 + 0xd144) = 0;
  *(uint *)(iVar3 + 0xd148) = 0;
  *(uint *)(iVar3 + 0xd050) = 0;
  *(uint *)(iVar3 + 0x252c) = 0x3fc90fdb;
  *(uint *)(iVar3 + 0xd140) = 0;
  *(uint *)(iVar3 + 0xd0d8) = (uint)(iVar5 == 0);
  *(uint *)(iVar3 + 0x2538) = 0x41700000;
  *(uint *)(iVar3 + 0xce5c) = 0x40a00000;
  *(uint *)(iVar3 + 0xd0e4) = *(uint *)(iVar3 + 0xcddc);
  *(uint *)(iVar3 + 0xce60) = 0x40a00000;
  return iVar3;
}
