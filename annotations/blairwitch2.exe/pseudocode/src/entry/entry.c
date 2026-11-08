// Name: entry
// Address: 005bae98
// Address Range: [[005bae98, 005bae9c]]
// Convention: unknown
// Signature: void entry(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  HMODULE pHVar4;
  uint uVar5;
  uint uVar6;
  byte *puVar7;
  uint uStack_20;
  int aiStack_1c [2];
  uint uStack_14;
  byte auStack_10 [8];
  
  uStack_14 = 0x5c2031;
  FUN_005c3330();
  iVar1 = -(0x000000F4 + 3U & 0xfffffffc);
  *(int *)(auStack_10 + iVar1 + -4) = 0x000000F4;
  *(uint *)((int)aiStack_1c + iVar1 + 4) = 0;
  *(byte **)((int)aiStack_1c + iVar1) = auStack_10 + iVar1;
  *(uint *)((int)&uStack_20 + iVar1) = 0x5c204e;
  FUN_005b77c0();
  *(byte **)(auStack_10 + iVar1 + -4) = auStack_10 + iVar1;
  *(int *)(&stack0x000000e0 + iVar1) = 0x000000F4;
  *(byte **)((int)aiStack_1c + iVar1 + 4) = auStack_10;
  *(uint *)((int)aiStack_1c + iVar1) = 0x5c2066;
  FUN_005bd078();
  puVar7 = auStack_10 + iVar1;
  uVar6 = DAT_0061f268 + 3U & 0xfffffffc;
  *(uint *)(auStack_10 + iVar1 + -4) = 0x5c207a;
  uVar3 = FUN_005c4070();
  if (uVar6 < uVar3) {
    *(uint *)(auStack_10 + iVar1 + -4) = uVar6;
    *(uint *)((int)aiStack_1c + iVar1 + 4) = 0x5c2084;
    FUN_005bae03();
    iVar2 = -(DAT_0061f268 + 3U & 0xfffffffc);
    puVar7 = auStack_10 + iVar2 + iVar1;
    _DAT_0061f26c = auStack_10 + iVar2 + iVar1;
  }
  else {
    _DAT_0061f26c = (byte *)0x0;
  }
  _DAT_0061f26c = _DAT_0061f26c + DAT_0061f268;
  *(uint *)(puVar7 + -4) = 0x5c20a8;
  FUN_005c4840();
  *(uint *)(puVar7 + -4) = 10;
  *(uint *)(puVar7 + -8) = DAT_0061f244;
  *(uint *)(puVar7 + -0xc) = 0;
  *(uint *)(puVar7 + -0x10) = 0;
  *(uint *)(puVar7 + -0x14) = 0x5c20bc;
  pHVar4 = GetModuleHandleA(*(LPCSTR *)(puVar7 + -0x10));
  *(HMODULE *)(puVar7 + -0x10) = pHVar4;
  *(uint *)(puVar7 + -0x14) = 0x5c20c2;
  uVar5 = FUN_0058f310();
  *(uint *)(puVar7 + -4) = uVar5;
  *(uint *)(puVar7 + -8) = 0x5c20c8;
  FUN_005c2154();
  return;
}
