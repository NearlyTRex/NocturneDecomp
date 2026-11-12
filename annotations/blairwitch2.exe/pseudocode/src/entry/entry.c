// Name: entry
// Address: 005bae98
// Address Range: [[005bae98, 005bae9c]]
// Convention: __watcallRegister
// Signature: void __watcallRegister entry(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __watcallRegister entry(void)

{
  int iVar1;
  uint uVar2;
  HMODULE pHVar3;
  int iVar4;
  uint uVar5;
  byte *puVar6;
  uint uStack_20;
  int aiStack_1c [2];
  ulong uStack_14;
  byte auStack_10 [8];
  
  uStack_14 = 0x5c2031;
  FUN_005c3330();
  iVar4 = -(0x000000F4 + 3U & 0xfffffffc);
  *(int *)(auStack_10 + iVar4 + -4) = 0x000000F4;
  *(uint *)((int)aiStack_1c + iVar4 + 4) = 0;
  *(byte **)((int)aiStack_1c + iVar4) = auStack_10 + iVar4;
  *(uint *)((int)&uStack_20 + iVar4) = 0x5c204e;
  memset
            (*(void **)((int)aiStack_1c + iVar4),*(int *)((int)aiStack_1c + iVar4 + 4),
             *(ulong *)(auStack_10 + iVar4 + -4));
  *(byte **)(auStack_10 + iVar4 + -4) = auStack_10 + iVar4;
  *(int *)(&stack0x000000e0 + iVar4) = 0x000000F4;
  *(byte **)((int)aiStack_1c + iVar4 + 4) = auStack_10;
  *(uint *)((int)aiStack_1c + iVar4) = 0x5c2066;
  FUN_005bd078();
  puVar6 = auStack_10 + iVar4;
  uVar5 = DAT_0061f268 + 3U & 0xfffffffc;
  *(uint *)(auStack_10 + iVar4 + -4) = 0x5c207a;
  uVar2 = FUN_005c4070();
  if (uVar5 < uVar2) {
    *(uint *)(auStack_10 + iVar4 + -4) = uVar5;
    *(uint *)((int)aiStack_1c + iVar4 + 4) = 0x5c2084;
    FUN_005bae03();
    iVar1 = -(DAT_0061f268 + 3U & 0xfffffffc);
    puVar6 = auStack_10 + iVar1 + iVar4;
    _DAT_0061f26c = auStack_10 + iVar1 + iVar4;
  }
  else {
    _DAT_0061f26c = (byte *)0x0;
  }
  _DAT_0061f26c = _DAT_0061f26c + DAT_0061f268;
  *(uint *)(puVar6 + -4) = 0x5c20a8;
  FUN_005c4840();
  *(uint *)(puVar6 + -4) = 10;
  *(uint *)(puVar6 + -8) = DAT_0061f244;
  *(uint *)(puVar6 + -0xc) = 0;
  *(uint *)(puVar6 + -0x10) = 0;
  *(uint *)(puVar6 + -0x14) = 0x5c20bc;
  pHVar3 = GetModuleHandleA(*(LPCSTR *)(puVar6 + -0x10));
  *(HMODULE *)(puVar6 + -0x10) = pHVar3;
  *(uint *)(puVar6 + -0x14) = 0x5c20c2;
  iVar4 = wincore_winrun_cpp_winMain_FUN_0058f310
                    (*(HINSTANCE *)(puVar6 + -0x10),*(HINSTANCE *)(puVar6 + -0xc),
                     *(LPSTR *)(puVar6 + -8),*(int *)(puVar6 + -4));
  *(int *)(puVar6 + -4) = iVar4;
  *(uint *)(puVar6 + -8) = 0x5c20c8;
  FUN_005c2154();
  return;
}
