// Name: crt_startup.cpp_WinMainBootstrap_FUN_005ca370
// Address: 005ca370
// Address Range: [[005ca370, 005ca41f]]
// Convention: __watcallRegister
// Signature: void __watcallRegister crt_startup_cpp_WinMainBootstrap_FUN_005ca370(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __watcallRegister crt_startup_cpp_WinMainBootstrap_FUN_005ca370(void)

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
  
  uStack_14 = 0x5ca381;
  FUN_005cb630();
  iVar1 = -(0x000000F4 + 3U & 0xfffffffc);
  *(int *)(local_10 + iVar1 + -4) = 0x000000F4;
  *(uint *)((int)aiStack_1c + iVar1 + 4) = 0;
  *(byte **)((int)aiStack_1c + iVar1) = local_10 + iVar1;
  *(uint *)((int)&uStack_20 + iVar1) = 0x5ca39e;
  memset
            (*(void **)((int)aiStack_1c + iVar1),*(int *)((int)aiStack_1c + iVar1 + 4),
             *(ulong *)(local_10 + iVar1 + -4));
  *(byte **)(local_10 + iVar1 + -4) = local_10 + iVar1;
  *(int *)(&stack0x000000e0 + iVar1) = 0x000000F4;
  *(byte **)((int)aiStack_1c + iVar1 + 4) = local_10;
  *(uint *)((int)aiStack_1c + iVar1) = 0x5ca3b6;
  FUN_005c5348();
  puVar7 = local_10 + iVar1;
  uVar6 = DAT_006265c0 + 3U & 0xfffffffc;
  *(uint *)(local_10 + iVar1 + -4) = 0x5ca3ca;
  uVar3 = FUN_005cc370();
  if (uVar6 < uVar3) {
    *(uint *)(local_10 + iVar1 + -4) = uVar6;
    *(uint *)((int)aiStack_1c + iVar1 + 4) = 0x5ca3d4;
    FUN_005c31c3();
    iVar2 = -(DAT_006265c0 + 3U & 0xfffffffc);
    puVar7 = local_10 + iVar2 + iVar1;
    _DAT_006265c4 = local_10 + iVar2 + iVar1;
  }
  else {
    _DAT_006265c4 = (byte *)0x0;
  }
  _DAT_006265c4 = _DAT_006265c4 + DAT_006265c0;
  *(uint *)(puVar7 + -4) = 0x5ca3f8;
  FUN_005ccb40();
  *(uint *)(puVar7 + -4) = 10;
  *(uint *)(puVar7 + -8) = DAT_0062659c;
  *(uint *)(puVar7 + -0xc) = 0;
  *(uint *)(puVar7 + -0x10) = 0;
  *(uint *)(puVar7 + -0x14) = 0x5ca40c;
  pHVar4 = GetModuleHandleA(*(LPCSTR *)(puVar7 + -0x10));
  *(HMODULE *)(puVar7 + -0x10) = pHVar4;
  *(uint *)(puVar7 + -0x14) = 0x5ca412;
  uVar5 = wincore_winrun_cpp_winMain_FUN_005b2e00();
  *(uint *)(puVar7 + -4) = uVar5;
  *(uint *)(puVar7 + -8) = 0x5ca418;
  FUN_005ca454();
  return;
}
