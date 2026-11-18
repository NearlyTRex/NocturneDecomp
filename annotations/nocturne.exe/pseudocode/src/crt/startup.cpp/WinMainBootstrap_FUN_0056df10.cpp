// Name: crt_startup.cpp_WinMainBootstrap_FUN_0056df10
// Address: 0056df10
// Address Range: [[0056df10, 0056dfbf]]
// Convention: __watcallRegister
// Signature: void __watcallRegister crt_startup_cpp_WinMainBootstrap_FUN_0056df10(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */

void __watcallRegister crt_startup_cpp_WinMainBootstrap_FUN_0056df10(void)

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
  uint uStack_14;
  byte local_10 [8];
  
  uStack_14 = 0x56df21;
  ProcessInitTermHandlers(1);
  iVar5 = -(g_RuntimeBufferSize + 3 & 0xfffffffc);
  *(DWORD *)(local_10 + iVar5 + -4) = g_RuntimeBufferSize;
  *(uint *)((int)aiStack_1c + iVar5 + 4) = 0;
  *(byte **)((int)aiStack_1c + iVar5) = local_10 + iVar5;
  *(uint *)((int)&uStack_20 + iVar5) = 0x56df3e;
  memset
            (*(void **)((int)aiStack_1c + iVar5),*(int *)((int)aiStack_1c + iVar5 + 4),
             *(ulong *)(local_10 + iVar5 + -4));
  *(byte **)(local_10 + iVar5 + -4) = local_10 + iVar5;
  *(DWORD *)(&stack0x000000e0 + iVar5) = g_RuntimeBufferSize;
  *(byte **)((int)aiStack_1c + iVar5 + 4) = local_10;
  *(uint *)((int)aiStack_1c + iVar5) = 0x56df56;
  crt_startup_cpp_InitializeWinAppRuntime_FUN_00567458(local_10);
  puVar7 = local_10 + iVar5;
  uVar6 = g_StackAllocSize + 3 & 0xfffffffc;
  *(uint *)(local_10 + iVar5 + -4) = 0x56df6a;
  uVar2 = GetStackUsage();
  if (uVar6 < uVar2) {
    *(uint *)(local_10 + iVar5 + -4) = uVar6;
    *(uint *)((int)aiStack_1c + iVar5 + 4) = 0x56df74;
    ProbeStackSpace(*(uint *)(local_10 + iVar5 + -4));
    iVar1 = -(g_StackAllocSize + 3 & 0xfffffffc);
    puVar7 = local_10 + iVar1 + iVar5;
    puVar3 = local_10 + iVar1 + iVar5;
  }
  else {
    puVar3 = (byte *)0x0;
  }
  g_CrtStackBuffer = puVar3 + g_StackAllocSize;
  *(uint *)(puVar7 + -4) = 0x56df98;
  FUN_00571160();
  *(uint *)(puVar7 + -4) = 10;
  *(DWORD *)(puVar7 + -8) = g_WinMainCmdShow;
  *(uint *)(puVar7 + -0xc) = 0;
  *(uint *)(puVar7 + -0x10) = 0;
  *(uint *)(puVar7 + -0x14) = 0x56dfac;
  pHVar4 = GetModuleHandleA(*(LPCSTR *)(puVar7 + -0x10));
  *(HMODULE *)(puVar7 + -0x10) = pHVar4;
  *(uint *)(puVar7 + -0x14) = 0x56dfb2;
  iVar5 = wincore_winrun_cpp_winMain_FUN_00559260
                    (*(HINSTANCE *)(puVar7 + -0x10),*(HINSTANCE *)(puVar7 + -0xc),
                     *(LPSTR *)(puVar7 + -8),*(int *)(puVar7 + -4));
  *(int *)(puVar7 + -4) = iVar5;
  *(uint *)(puVar7 + -8) = 0x56dfb8;
  ExitApplication(*(int *)(puVar7 + -4));
  return;
}
