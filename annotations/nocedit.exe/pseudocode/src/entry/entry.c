// Name: entry
// Address: 0060239a
// Address Range: [[0060239a, 0060239e]]
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
  byte *puVar8;
  uint uStack_20;
  int aiStack_1c [2];
  uint uStack_14;
  byte auStack_10 [8];
  
  uStack_14 = 0x609e81;
  ProcessInitTermHandlers(1);
  iVar5 = -(g_RuntimeBufferSize + 3 & 0xfffffffc);
  *(DWORD *)(auStack_10 + iVar5 + -4) = g_RuntimeBufferSize;
  *(uint *)((int)aiStack_1c + iVar5 + 4) = 0;
  *(byte **)((int)aiStack_1c + iVar5) = auStack_10 + iVar5;
  *(uint *)((int)&uStack_20 + iVar5) = 0x609e9e;
  memset
            (*(void **)((int)aiStack_1c + iVar5),*(int *)((int)aiStack_1c + iVar5 + 4),
             *(ulong *)(auStack_10 + iVar5 + -4));
  *(byte **)(auStack_10 + iVar5 + -4) = auStack_10 + iVar5;
  *(DWORD *)(&stack0x000000e0 + iVar5) = g_RuntimeBufferSize;
  *(byte **)((int)aiStack_1c + iVar5 + 4) = auStack_10;
  *(uint *)((int)aiStack_1c + iVar5) = 0x609eb6;
  crt_startup_cpp_InitializeWinAppRuntime_FUN_006026a8(auStack_10);
  puVar7 = auStack_10 + iVar5;
  uVar6 = g_StackAllocSize + 3 & 0xfffffffc;
  *(uint *)(auStack_10 + iVar5 + -4) = 0x609eca;
  uVar2 = GetStackUsage();
  if (uVar6 < uVar2) {
    *(uint *)(auStack_10 + iVar5 + -4) = uVar6;
    *(uint *)((int)aiStack_1c + iVar5 + 4) = 0x609ed4;
    ProbeStackSpace(*(uint *)(auStack_10 + iVar5 + -4));
    iVar1 = -(g_StackAllocSize + 3 & 0xfffffffc);
    puVar7 = auStack_10 + iVar1 + iVar5;
    puVar3 = auStack_10 + iVar1 + iVar5;
  }
  else {
    puVar3 = (byte *)0x0;
  }
  g_CrtStackBuffer = puVar3 + g_StackAllocSize;
  puVar8 = puVar7 + -4;
  *(uint *)(puVar7 + -4) = 0x609ef8;
  func_0x0060ca80();
  *(uint *)(puVar8 + -4) = 10;
  *(DWORD *)(puVar8 + -8) = g_WinMainCmdShow;
  *(uint *)(puVar8 + -0xc) = 0;
  *(uint *)(puVar8 + -0x10) = 0;
  *(uint *)(puVar8 + -0x14) = 0x609f0c;
  pHVar4 = (*g_GetModuleHandleAFunc)(*(LPCSTR *)(puVar8 + -0x10));
  *(HMODULE *)(puVar8 + -0x10) = pHVar4;
  *(uint *)(puVar8 + -0x14) = 0x609f12;
  iVar5 = wincore_winrun_cpp_winMain_FUN_005f3680
                    (*(HINSTANCE *)(puVar8 + -0x10),*(HINSTANCE *)(puVar8 + -0xc),
                     *(LPSTR *)(puVar8 + -8),*(int *)(puVar8 + -4));
  *(int *)(puVar8 + -4) = iVar5;
  *(uint *)(puVar8 + -8) = 0x609f18;
  ExitApplication(*(int *)(puVar8 + -4));
  return;
}
