// Name: crt_startup.cpp_WinMainBootstrap_FUN_005c2020
// Address: 005c2020
// Address Range: [[005c2020, 005c20cf]]
// Convention: __watcallRegister
// Signature: void __watcallRegister crt_startup_cpp_WinMainBootstrap_FUN_005c2020(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __watcallRegister crt_startup_cpp_WinMainBootstrap_FUN_005c2020(void)

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
  ulong uStack_14;
  byte local_10 [8];
  
  uStack_14 = 0x5c2031;
  unkafter_morph_cpp_FUN_005c3330();
  iVar1 = -(0x000000F4 + 3U & 0xfffffffc);
  *(int *)(local_10 + iVar1 + -4) = 0x000000F4;
  *(uint *)((int)aiStack_1c + iVar1 + 4) = 0;
  *(byte **)((int)aiStack_1c + iVar1) = local_10 + iVar1;
  *(uint *)((int)&uStack_20 + iVar1) = 0x5c204e;
  memset
            (*(void **)((int)aiStack_1c + iVar1),*(int *)((int)aiStack_1c + iVar1 + 4),
             *(ulong *)(local_10 + iVar1 + -4));
  *(byte **)(local_10 + iVar1 + -4) = local_10 + iVar1;
  *(int *)(&stack0x000000e0 + iVar1) = 0x000000F4;
  *(byte **)((int)aiStack_1c + iVar1 + 4) = local_10;
  *(uint *)((int)aiStack_1c + iVar1) = 0x5c2066;
  FUN_005bd078();
  puVar7 = local_10 + iVar1;
  uVar6 = DAT_0061f268 + 3U & 0xfffffffc;
  *(uint *)(local_10 + iVar1 + -4) = 0x5c207a;
  uVar3 = unkafter_morph_cpp_FUN_005c4070();
  if (uVar6 < uVar3) {
    *(uint *)(local_10 + iVar1 + -4) = uVar6;
    *(uint *)((int)aiStack_1c + iVar1 + 4) = 0x5c2084;
    FUN_005bae03();
    iVar2 = -(DAT_0061f268 + 3U & 0xfffffffc);
    puVar7 = local_10 + iVar2 + iVar1;
    _DAT_0061f26c = local_10 + iVar2 + iVar1;
  }
  else {
    _DAT_0061f26c = (byte *)0x0;
  }
  _DAT_0061f26c = _DAT_0061f26c + DAT_0061f268;
  *(uint *)(puVar7 + -4) = 0x5c20a8;
  unkafter_morph_cpp_FUN_005c4840();
  *(uint *)(puVar7 + -4) = 10;
  *(uint *)(puVar7 + -8) = DAT_0061f244;
  *(uint *)(puVar7 + -0xc) = 0;
  *(uint *)(puVar7 + -0x10) = 0;
  *(uint *)(puVar7 + -0x14) = 0x5c20bc;
  pHVar4 = GetModuleHandleA(*(LPCSTR *)(puVar7 + -0x10));
  *(HMODULE *)(puVar7 + -0x10) = pHVar4;
  *(uint *)(puVar7 + -0x14) = 0x5c20c2;
  uVar5 = wincore_winrun_cpp_FUN_0058f310();
  *(uint *)(puVar7 + -4) = uVar5;
  *(uint *)(puVar7 + -8) = 0x5c20c8;
  unkafter_morph_cpp_FUN_005c2154();
  return;
}
