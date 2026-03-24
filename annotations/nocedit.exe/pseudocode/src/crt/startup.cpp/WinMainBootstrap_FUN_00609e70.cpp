// Name: crt_startup.cpp_WinMainBootstrap_FUN_00609e70
// Address: 00609e70
// Address Range: [[00609e70, 00609f1f]]
// Convention: __watcallRegister
// Signature: void __watcallRegister crt_startup_cpp_WinMainBootstrap_FUN_00609e70(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */

void __watcallRegister crt_startup_cpp_WinMainBootstrap_FUN_00609e70(void)

{
  DWORD currentStackUsage;
  uint *pStackBuffer;
  HINSTANCE hInstance;
  int exitCode;
  uint alignedStackSize;
  BYTE *pReturnAddr;
  uint *pRuntimeStack;
  int *piVar1;
  DWORD *pWinMainFrame;
  uint uStack_20;
  int aiStack_1c [2];
  uint uStack_14;
  BYTE runtimeInitParams [8];
  int runtimeBufferOffset;
  int stackBufferOffset;
  
  uStack_14 = 0x609e81;
  ProcessInitTermHandlers(1);
  runtimeBufferOffset = -(g_RuntimeBufferSize + 3 & 0xfffffffc);
  *(DWORD *)(runtimeInitParams + runtimeBufferOffset + -4) = g_RuntimeBufferSize;
  *(uint *)((int)aiStack_1c + runtimeBufferOffset + 4) = 0;
  *(BYTE **)((int)aiStack_1c + runtimeBufferOffset) = runtimeInitParams + runtimeBufferOffset;
  *(uint *)((int)&uStack_20 + runtimeBufferOffset) = 0x609e9e;
  memset
            (*(void **)((int)aiStack_1c + runtimeBufferOffset),
             *(int *)((int)aiStack_1c + runtimeBufferOffset + 4),
             *(ulong *)(runtimeInitParams + runtimeBufferOffset + -4));
  *(BYTE **)(runtimeInitParams + runtimeBufferOffset + -4) = runtimeInitParams + runtimeBufferOffset
  ;
  *(DWORD *)(&stack0x000000e0 + runtimeBufferOffset) = g_RuntimeBufferSize;
  *(BYTE **)((int)aiStack_1c + runtimeBufferOffset + 4) = runtimeInitParams;
  *(uint *)((int)aiStack_1c + runtimeBufferOffset) = 0x609eb6;
  crt_startup_cpp_InitializeWinAppRuntime_FUN_006026a8(runtimeInitParams);
  pRuntimeStack = (uint *)(runtimeInitParams + runtimeBufferOffset);
  alignedStackSize = g_StackAllocSize + 3 & 0xfffffffc;
  pReturnAddr = runtimeInitParams + runtimeBufferOffset + -4;
  pReturnAddr[0] = 0xca;
  pReturnAddr[1] = 0x9e;
  pReturnAddr[2] = '`';
  pReturnAddr[3] = '\0';
  currentStackUsage = GetStackUsage();
  if (alignedStackSize < currentStackUsage) {
    *(uint *)(runtimeInitParams + runtimeBufferOffset + -4) = alignedStackSize;
    *(uint *)((int)aiStack_1c + runtimeBufferOffset + 4) = 0x609ed4;
    ProbeStackSpace
              (*(uint *)(runtimeInitParams + runtimeBufferOffset + -4));
    stackBufferOffset = -(g_StackAllocSize + 3 & 0xfffffffc);
    pRuntimeStack = (uint *)(runtimeInitParams + stackBufferOffset + runtimeBufferOffset);
    pStackBuffer = (uint *)(runtimeInitParams + stackBufferOffset + runtimeBufferOffset);
  }
  else {
    pStackBuffer = (uint *)0x0;
  }
  g_CrtStackBuffer = (void *)((int)pStackBuffer + g_StackAllocSize);
  piVar1 = pRuntimeStack + -1;
  pRuntimeStack[-1] = 0x609ef8;
  func_0x0060ca80();
  piVar1[-1] = 10;
  piVar1[-2] = g_WinMainCmdShow;
  piVar1[-3] = 0;
  piVar1[-4] = 0;
  pWinMainFrame = (DWORD *)(piVar1 + -5);
  *pWinMainFrame = 0x609f0c;
  hInstance = (*g_GetModuleHandleAFunc)((LPCSTR)piVar1[-4]);
  piVar1[-4] = (int)hInstance;
  piVar1[-5] = 0x609f12;
  exitCode = wincore_winrun_cpp_winMain_FUN_005f3680
                       ((HINSTANCE)piVar1[-4],(HINSTANCE)piVar1[-3],(LPSTR)piVar1[-2],piVar1[-1],
                        *piVar1);
  piVar1[-1] = exitCode;
  piVar1[-2] = 0x609f18;
  ExitApplication(piVar1[-1]);
  return;
}
