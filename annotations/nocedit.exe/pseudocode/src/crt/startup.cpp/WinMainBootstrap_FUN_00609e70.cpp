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
  int iVar1;
  DWORD currentStackUsage;
  uint *pStackBuffer;
  HINSTANCE hInstance;
  int exitCode;
  int unaff_EBX;
  uint alignedStackSize;
  BADSPACEBASE *in_ESP;
  BYTE *pBVar2;
  uint *pRuntimeStack;
  DWORD *pWinMainFrame;
  LPSTR unaff_EBP;
  int unaff_retaddr;
  uint uStack0000000c;
  byte *puStack_1c;
  byte *puStack_14;
  BYTE runtimeInitParams [8];
  
  puStack_14 = (byte *)0x609e81;
  crt_init_c_ProcessInitTermHandlers_FUN_0060ac30(1);
  iVar1 = -(g_RuntimeBufferSize + 3 & 0xfffffffc);
  *(DWORD *)(runtimeInitParams + iVar1) = g_RuntimeBufferSize;
  pBVar2 = runtimeInitParams + iVar1 + -4;
  pBVar2[0] = '\0';
  pBVar2[1] = '\0';
  pBVar2[2] = '\0';
  pBVar2[3] = '\0';
  *(BYTE **)(&stack0xffffffe8 + iVar1) = runtimeInitParams + iVar1 + 4;
  *(uint *)((int)&puStack_1c + iVar1) = 0x609e9e;
  crt_memory_c_memset_FUN_005fde40
            (*(void **)(&stack0xffffffe8 + iVar1),*(int *)(runtimeInitParams + iVar1 + -4),
             *(ulong *)(runtimeInitParams + iVar1));
  *(DWORD *)(&stack0x000000e4 + iVar1) = g_RuntimeBufferSize;
  puStack_1c = (byte *)0x609eb6;
  puStack_14 = runtimeInitParams + iVar1 + 4;
  crt_startup_cpp_InitializeWinAppRuntime_FUN_006026a8(runtimeInitParams);
  alignedStackSize = g_StackAllocSize + 3 & 0xfffffffc;
  puStack_14 = (byte *)0x609eca;
  currentStackUsage = crt_stack_c_GetStackUsage_FUN_0060c260();
  if (alignedStackSize < currentStackUsage) {
    puStack_14 = (byte *)0x609ed4;
    runtimeInitParams._0_4_ = alignedStackSize;
    crt_stack_c_ProbeStackSpace_FUN_005ffa2f(alignedStackSize);
    pStackBuffer = (uint *)(runtimeInitParams + 4);
  }
  else {
    pStackBuffer = (uint *)0x0;
  }
  g_CrtStackBuffer = (void *)((int)pStackBuffer + g_StackAllocSize);
  runtimeInitParams[0] = 0xf8;
  runtimeInitParams[1] = 0x9e;
  runtimeInitParams[2] = '`';
  runtimeInitParams[3] = '\0';
  crt_startup_c_PlaceholderStub_FUN_0060ca80();
  runtimeInitParams[4] = '\n';
  runtimeInitParams[5] = '\0';
  runtimeInitParams[6] = '\0';
  runtimeInitParams[7] = '\0';
  runtimeInitParams[0] = (byte)g_WinMainCmdShow;
  runtimeInitParams[1] = g_WinMainCmdShow._1_1_;
  runtimeInitParams[2] = g_WinMainCmdShow._2_1_;
  runtimeInitParams[3] = g_WinMainCmdShow._3_1_;
  puStack_14 = (byte *)0x0;
  puStack_1c = (byte *)0x609f0c;
  hInstance = (*GetModuleHandleA)((LPCSTR)0x0);
  puStack_14 = (byte *)0x609f12;
  runtimeInitParams._0_4_ = hInstance;
  exitCode = wincore_winrun_cpp_winMain_FUN_005f3680
                       (hInstance,(HINSTANCE)runtimeInitParams._4_4_,unaff_EBP,unaff_EBX,
                        unaff_retaddr);
  uStack0000000c = 0x609f18;
  crt_startup_c_ExitApplication_FUN_0060b534(exitCode);
  return;
}
