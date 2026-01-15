// Name: crt_startup.cpp_WinMainBootstrap_FUN_00609e70
// Address: 00609e70
// Address Range: [[00609e70, 00609f1f]]
// Convention: __watcallRegister
// Signature: void crt_startup.cpp_WinMainBootstrap_FUN_00609e70(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: runtimeInitParams */

void crt_startup_cpp_WinMainBootstrap_FUN_00609e70(void)

{
  DWORD currentStackUsage;
  uint *pStackBuffer;
  HINSTANCE hInstance;
  int exitCode;
  uint alignedStackSize;
  uint *pRuntimeStack;
  DWORD *pWinMainFrame;
  HINSTANCE hPrevInstance;
  LPSTR lpCmdLine;
  int iVar1;
  BYTE runtimeInitParams [8];
  
  crt_init_c_ProcessInitTermHandlers_FUN_0060ac30(1);
  iVar1 = -(g_RuntimeBufferSize + 3 & 0xfffffffc);
  *(DWORD *)(&stack0xffffffec + iVar1) = g_RuntimeBufferSize;
  *(uint *)(&stack0xffffffe8 + iVar1) = 0;
  *(BYTE **)(&stack0xffffffe4 + iVar1) = runtimeInitParams + iVar1;
  *(uint *)(&stack0xffffffe0 + iVar1) = 0x609e9e;
  crt_memory_c_memset_FUN_005fde40
            (*(void **)(&stack0xffffffe4 + iVar1),*(int *)(&stack0xffffffe8 + iVar1),
             *(ulong *)(&stack0xffffffec + iVar1));
  *(DWORD *)(&stack0x000000e0 + iVar1) = g_RuntimeBufferSize;
  crt_startup_cpp_InitializeWinAppRuntime_FUN_006026a8(runtimeInitParams);
  alignedStackSize = g_StackAllocSize + 3 & 0xfffffffc;
  currentStackUsage = crt_stack_c_GetStackUsage_FUN_0060c260();
  if (alignedStackSize < currentStackUsage) {
    crt_stack_c_ProbeStackSpace_FUN_005ffa2f(alignedStackSize);
    pStackBuffer = (uint *)runtimeInitParams;
  }
  else {
    pStackBuffer = (uint *)0x0;
  }
  g_CrtStackBuffer = (void *)((int)pStackBuffer + g_StackAllocSize);
  crt_startup_c_PlaceholderStub_FUN_0060ca80();
  iVar1 = 10;
  hPrevInstance = (HINSTANCE)0x0;
  lpCmdLine = (LPSTR)g_WinMainCmdShow;
  hInstance = (*GetModuleHandleA)((LPCSTR)0x0);
  exitCode = wincore_winrun_cpp_winMain_FUN_005f3680
                       (hInstance,hPrevInstance,lpCmdLine,iVar1,runtimeInitParams._0_4_);
  crt_startup_c_ExitApplication_FUN_0060b534(exitCode);
  return;
}
