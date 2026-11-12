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
  uint uVar2;
  HMODULE pHVar3;
  int iVar4;
  uint uVar5;
  byte *puVar6;
  uint uStack_20;
  int aiStack_1c [2];
  ulong uStack_14;
  byte local_10 [8];
  
  uStack_14 = 0x5ca381;
  FUN_005cb630();
  iVar4 = -(0x000000F4 + 3U & 0xfffffffc);
  *(int *)(local_10 + iVar4 + -4) = 0x000000F4;
  *(uint *)((int)aiStack_1c + iVar4 + 4) = 0;
  *(byte **)((int)aiStack_1c + iVar4) = local_10 + iVar4;
  *(uint *)((int)&uStack_20 + iVar4) = 0x5ca39e;
  memset
            (*(void **)((int)aiStack_1c + iVar4),*(int *)((int)aiStack_1c + iVar4 + 4),
             *(ulong *)(local_10 + iVar4 + -4));
  *(byte **)(local_10 + iVar4 + -4) = local_10 + iVar4;
  *(int *)(&stack0x000000e0 + iVar4) = 0x000000F4;
  *(byte **)((int)aiStack_1c + iVar4 + 4) = local_10;
  *(uint *)((int)aiStack_1c + iVar4) = 0x5ca3b6;
  FUN_005c5348();
  puVar6 = local_10 + iVar4;
  uVar5 = DAT_006265c0 + 3U & 0xfffffffc;
  *(uint *)(local_10 + iVar4 + -4) = 0x5ca3ca;
  uVar2 = FUN_005cc370();
  if (uVar5 < uVar2) {
    *(uint *)(local_10 + iVar4 + -4) = uVar5;
    *(uint *)((int)aiStack_1c + iVar4 + 4) = 0x5ca3d4;
    FUN_005c31c3();
    iVar1 = -(DAT_006265c0 + 3U & 0xfffffffc);
    puVar6 = local_10 + iVar1 + iVar4;
    _DAT_006265c4 = local_10 + iVar1 + iVar4;
  }
  else {
    _DAT_006265c4 = (byte *)0x0;
  }
  _DAT_006265c4 = _DAT_006265c4 + DAT_006265c0;
  *(uint *)(puVar6 + -4) = 0x5ca3f8;
  FUN_005ccb40();
  *(uint *)(puVar6 + -4) = 10;
  *(uint *)(puVar6 + -8) = DAT_0062659c;
  *(uint *)(puVar6 + -0xc) = 0;
  *(uint *)(puVar6 + -0x10) = 0;
  *(uint *)(puVar6 + -0x14) = 0x5ca40c;
  pHVar3 = GetModuleHandleA(*(LPCSTR *)(puVar6 + -0x10));
  *(HMODULE *)(puVar6 + -0x10) = pHVar3;
  *(uint *)(puVar6 + -0x14) = 0x5ca412;
  iVar4 = wincore_winrun_cpp_winMain_FUN_005b2e00
                    (*(HINSTANCE *)(puVar6 + -0x10),*(HINSTANCE *)(puVar6 + -0xc),
                     *(LPSTR *)(puVar6 + -8),*(int *)(puVar6 + -4));
  *(int *)(puVar6 + -4) = iVar4;
  *(uint *)(puVar6 + -8) = 0x5ca418;
  FUN_005ca454();
  return;
}
