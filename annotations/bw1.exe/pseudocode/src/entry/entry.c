// Name: entry
// Address: 005c3258
// Address Range: [[005c3258, 005c325c]]
// Convention: __watcallRegister
// Signature: void __watcallRegister entry(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */

void __watcallRegister entry(void)

{
  int iVar1;
  uint uVar2;
  byte *puVar3;
  HMODULE pHVar4;
  int iVar5;
  uint uVar6;
  byte *puVar7;
  uint uStack_20;
  int aiStack_1c [2];
  ulong uStack_14;
  byte auStack_10 [8];
  
  uStack_14 = 0x5ca381;
  FUN_005cb630();
  iVar5 = -(g_RuntimeBufferSize + 3 & 0xfffffffc);
  *(ulong *)(auStack_10 + iVar5 + -4) = g_RuntimeBufferSize;
  *(uint *)((int)aiStack_1c + iVar5 + 4) = 0;
  *(byte **)((int)aiStack_1c + iVar5) = auStack_10 + iVar5;
  *(uint *)((int)&uStack_20 + iVar5) = 0x5ca39e;
  memset
            (*(void **)((int)aiStack_1c + iVar5),*(int *)((int)aiStack_1c + iVar5 + 4),
             *(ulong *)(auStack_10 + iVar5 + -4));
  *(byte **)(auStack_10 + iVar5 + -4) = auStack_10 + iVar5;
  *(ulong *)(&stack0x000000e0 + iVar5) = g_RuntimeBufferSize;
  *(byte **)((int)aiStack_1c + iVar5 + 4) = auStack_10;
  *(uint *)((int)aiStack_1c + iVar5) = 0x5ca3b6;
  FUN_005c5348();
  puVar7 = auStack_10 + iVar5;
  uVar6 = g_StackAllocSize + 3U & 0xfffffffc;
  *(uint *)(auStack_10 + iVar5 + -4) = 0x5ca3ca;
  uVar2 = FUN_005cc370();
  if (uVar6 < uVar2) {
    *(uint *)(auStack_10 + iVar5 + -4) = uVar6;
    *(uint *)((int)aiStack_1c + iVar5 + 4) = 0x5ca3d4;
    FUN_005c31c3();
    iVar1 = -(g_StackAllocSize + 3U & 0xfffffffc);
    puVar7 = auStack_10 + iVar1 + iVar5;
    puVar3 = auStack_10 + iVar1 + iVar5;
  }
  else {
    puVar3 = (byte *)0x0;
  }
  g_CrtStackBuffer = puVar3 + g_StackAllocSize;
  *(uint *)(puVar7 + -4) = 0x5ca3f8;
  FUN_005ccb40();
  *(uint *)(puVar7 + -4) = 10;
  *(int *)(puVar7 + -8) = g_WinMainCmdShow;
  *(uint *)(puVar7 + -0xc) = 0;
  *(uint *)(puVar7 + -0x10) = 0;
  *(uint *)(puVar7 + -0x14) = 0x5ca40c;
  pHVar4 = GetModuleHandleA(*(LPCSTR *)(puVar7 + -0x10));
  *(HMODULE *)(puVar7 + -0x10) = pHVar4;
  *(uint *)(puVar7 + -0x14) = 0x5ca412;
  iVar5 = wincore_winrun_cpp_winMain_FUN_005b2e00
                    (*(HINSTANCE *)(puVar7 + -0x10),*(HINSTANCE *)(puVar7 + -0xc),
                     *(LPSTR *)(puVar7 + -8),*(int *)(puVar7 + -4));
  *(int *)(puVar7 + -4) = iVar5;
  *(uint *)(puVar7 + -8) = 0x5ca418;
  FUN_005ca454();
  return;
}
