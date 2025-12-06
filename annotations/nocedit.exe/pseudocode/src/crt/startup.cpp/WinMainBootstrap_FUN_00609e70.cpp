// Name: crt_startup.cpp_WinMainBootstrap_FUN_00609e70
// Address: 00609e70
// Address Range: [[00609e70, 00609f1f]]
// Convention: __watcallRegister
// Signature: void crt_startup.cpp_WinMainBootstrap_FUN_00609e70(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */

void crt_startup_cpp_WinMainBootstrap_FUN_00609e70(void)

{
  DWORD currentStackUsage;
  uint *pStackBuffer;
  HINSTANCE hInstance;
  int exitCode;
  uint alignedStackSize;
  BADSPACEBASE *in_ESP;
  BYTE *pBVar1;
  byte *puVar2;
  byte *puVar3;
  uint *pReturnAddr;
  uint *puVar4;
  uint *pRuntimeStack;
  uint *puVar5;
  DWORD *pWinMainFrame;
  uint uStack_1c;
  uint uStack_18;
  int iStack_14;
  BYTE runtimeInitParams [8];
  int stackBufferOffset;
  
  iStack_14 = 0x609e81;
  crt_init_c_ProcessInitTermHandlers_FUN_0060ac30(1);
  stackBufferOffset = -(g_RuntimeBufferSize + 3 & 0xfffffffc);
  *(DWORD *)(runtimeInitParams + stackBufferOffset) = g_RuntimeBufferSize;
  pBVar1 = runtimeInitParams + stackBufferOffset + -4;
  pBVar1[0] = '\0';
  pBVar1[1] = '\0';
  pBVar1[2] = '\0';
  pBVar1[3] = '\0';
  *(BYTE **)((int)&uStack_18 + stackBufferOffset) = runtimeInitParams + stackBufferOffset + 4;
  puVar2 = (byte *)((int)&uStack_1c + stackBufferOffset);
  *(uint *)((int)&uStack_1c + stackBufferOffset) = 0x609e9e;
  crt_memory_c_memset_FUN_005fde40
            (*(void **)((int)&uStack_18 + stackBufferOffset),
             *(int *)(runtimeInitParams + stackBufferOffset + -4),
             *(ulong *)(runtimeInitParams + stackBufferOffset));
  *(BYTE **)((int)puVar2 + 0xc) = runtimeInitParams + stackBufferOffset + 4;
  *(DWORD *)(&stack0x000000e4 + stackBufferOffset) = g_RuntimeBufferSize;
  *(BYTE **)(puVar2 + 8) = runtimeInitParams;
  puVar3 = puVar2 + 4;
  *(uint *)(puVar2 + 4) = 0x609eb6;
  crt_startup_cpp_InitializeWinAppRuntime_FUN_006026a8(runtimeInitParams);
  alignedStackSize = g_StackAllocSize + 3 & 0xfffffffc;
  pReturnAddr = (uint *)(puVar3 + 8);
  *(uint *)(puVar3 + 8) = 0x609eca;
  currentStackUsage = crt_stack_c_GetStackUsage_FUN_0060c260();
  pRuntimeStack = pReturnAddr + 1;
  if (alignedStackSize < currentStackUsage) {
    *pReturnAddr = alignedStackSize;
    puVar4 = pReturnAddr + -1;
    pReturnAddr[-1] = 0x609ed4;
    crt_stack_c_ProbeStackSpace_FUN_005ffa2f(*pReturnAddr);
    stackBufferOffset = -(g_StackAllocSize + 3 & 0xfffffffc);
    pRuntimeStack = (uint *)((int)puVar4 + stackBufferOffset + 8);
    pStackBuffer = (uint *)((int)puVar4 + stackBufferOffset + 8);
  }
  else {
    pStackBuffer = (uint *)0x0;
  }
  g_CrtStackBuffer = (void *)((int)pStackBuffer + g_StackAllocSize);
  puVar5 = pRuntimeStack + -1;
  pRuntimeStack[-1] = 0x609ef8;
  crt_startup_c_PlaceholderStub_FUN_0060ca80();
  *puVar5 = 10;
  puVar5[-1] = g_WinMainCmdShow;
  puVar5[-2] = 0;
  puVar5[-3] = 0;
  pWinMainFrame = puVar5 + -4;
  pWinMainFrame = puVar5 + -4;
  *pWinMainFrame = 0x609f0c;
  hInstance = (*GetModuleHandleA)((LPCSTR)puVar5[-3]);
  pWinMainFrame[1] = (DWORD)hInstance;
  *pWinMainFrame = 0x609f12;
  exitCode = wincore_winrun_cpp_winMain_FUN_005f3680
                       ((HINSTANCE)pWinMainFrame[1],(HINSTANCE)pWinMainFrame[2],
                        (LPSTR)pWinMainFrame[3],pWinMainFrame[4],pWinMainFrame[5]);
  *(int *)((int)pWinMainFrame + 0x10) = exitCode;
  *(uint *)((int)pWinMainFrame + 0xc) = 0x609f18;
  crt_startup_c_ExitApplication_FUN_0060b534(*(int *)((int)pWinMainFrame + 0x10));
  return;
}
