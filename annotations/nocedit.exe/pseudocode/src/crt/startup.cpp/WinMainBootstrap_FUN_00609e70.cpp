// Name: crt_startup.cpp_WinMainBootstrap_FUN_00609e70
// Address: 00609e70
// Address Range: [[00609e70, 00609f1f]]
// Convention: __watcallRegister
// Signature: void crt_startup_cpp_WinMainBootstrap_FUN_00609e70(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */

void crt_startup_cpp_WinMainBootstrap_FUN_00609e70(void)

{
  DWORD currentStackUsage;
  uint *pStackBuffer;
  HINSTANCE hInstance;
  int exitCode;
  uint alignedStackSize;
  BYTE *pReturnAddr;
  uint *pRuntimeStack;
  DWORD *pWinMainFrame;
  uint uStack_20;
  int aiStack_1c [2];
  uint uStack_14;
  BYTE runtimeInitParams [8];
  int runtimeBufferOffset;
  int stackBufferOffset;
  
  uStack_14 = 0x609e81;
  crt_init_c_ProcessInitTermHandlers_FUN_0060ac30(1);
  runtimeBufferOffset = -(g_RuntimeBufferSize + 3 & 0xfffffffc);
  *(DWORD *)(runtimeInitParams + runtimeBufferOffset + -4) = g_RuntimeBufferSize;
  *(uint *)((int)aiStack_1c + runtimeBufferOffset + 4) = 0;
  *(BYTE **)((int)aiStack_1c + runtimeBufferOffset) = runtimeInitParams + runtimeBufferOffset;
  *(uint *)((int)&uStack_20 + runtimeBufferOffset) = 0x609e9e;
  crt_memory_c_memset_FUN_005fde40
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
  currentStackUsage = crt_stack_c_GetStackUsage_FUN_0060c260();
  if (alignedStackSize < currentStackUsage) {
    *(uint *)(runtimeInitParams + runtimeBufferOffset + -4) = alignedStackSize;
    *(uint *)((int)aiStack_1c + runtimeBufferOffset + 4) = 0x609ed4;
    crt_stack_c_ProbeStackSpace_FUN_005ffa2f
              (*(uint *)(runtimeInitParams + runtimeBufferOffset + -4));
    stackBufferOffset = -(g_StackAllocSize + 3 & 0xfffffffc);
    pRuntimeStack = (uint *)(runtimeInitParams + stackBufferOffset + runtimeBufferOffset);
    pStackBuffer = (uint *)(runtimeInitParams + stackBufferOffset + runtimeBufferOffset);
  }
  else {
    pStackBuffer = (uint *)0x0;
  }
  g_CrtStackBuffer = (void *)((int)pStackBuffer + g_StackAllocSize);
  pRuntimeStack[-1] = 0x609ef8;
  crt_startup_c_PlaceholderStub_FUN_0060ca80();
  pRuntimeStack[-1] = 10;
  pRuntimeStack[-2] = g_WinMainCmdShow;
  pRuntimeStack[-3] = 0;
  pRuntimeStack[-4] = 0;
  pWinMainFrame = pRuntimeStack + -5;
  *pWinMainFrame = 0x609f0c;
  hInstance = (*g_GetModuleHandleAFunc)((LPCSTR)pRuntimeStack[-4]);
  pRuntimeStack[-4] = hInstance;
  pRuntimeStack[-5] = 0x609f12;
  exitCode = wincore_winrun_cpp_winMain_FUN_005f3680
                       ((HINSTANCE)pRuntimeStack[-4],(HINSTANCE)pRuntimeStack[-3],
                        (LPSTR)pRuntimeStack[-2],pRuntimeStack[-1],*pRuntimeStack);
  pRuntimeStack[-1] = exitCode;
  pRuntimeStack[-2] = 0x609f18;
  crt_startup_c_ExitApplication_FUN_0060b534(pRuntimeStack[-1]);
  return;
}
