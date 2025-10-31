// Name: crt_startup.cpp_WinMainBootstrap_FUN_00609e70
// Address: 00609e70
// Address Range: [[00609e70, 00609f1f]]
// Convention: __watcallRegister
// Signature: void crt_startup.cpp_WinMainBootstrap_FUN_00609e70(void)
// Cross-references:
//   entry (0060239a) at 0060239a [UNCONDITIONAL_JUMP]
// Globals:
//   GetModuleHandleA* GetModuleHandleA = 00211f6e
//   DWORD g_WinMainCmdShow = 0x0
//   DWORD g_StackAllocSize = 0x0
//   void* g_CrtStackBuffer = 00000000
//   DWORD g_RuntimeBufferSize = 0xf4
// Function calls:
//   crt_init.c_ProcessInitTermHandlers_FUN_0060ac30
//   crt_memory.c_memset_FUN_005fde40
//   crt_stack.c_GetStackUsage_FUN_0060c260
//   crt_stack.c_ProbeStackSpace_FUN_005ffa2f
//   crt_startup.c_ExitApplication_FUN_0060b534
//   crt_startup.c_PlaceholderStub_FUN_0060ca80
//   crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8
//   wincore_winrun.cpp_winMain_FUN_005f3680

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */

void crt_startup_cpp_WinMainBootstrap_FUN_00609e70(void)

{
  DWORD currentStackUsage;
  undefined4 *pStackBuffer;
  HINSTANCE hInstance;
  int exitCode;
  uint alignedStackSize;
  BADSPACEBASE *in_ESP;
  BYTE *pBVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint *pReturnAddr;
  uint *puVar4;
  undefined4 *pRuntimeStack;
  undefined4 *puVar5;
  DWORD *pWinMainFrame;
  undefined4 uStack_1c;
  undefined4 uStack_18;
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
  puVar2 = (undefined1 *)((int)&uStack_1c + stackBufferOffset);
  *(undefined4 *)((int)&uStack_1c + stackBufferOffset) = 0x609e9e;
  crt_memory_c_memset_FUN_005fde40
            (*(void **)((int)&uStack_18 + stackBufferOffset),
             *(int *)(runtimeInitParams + stackBufferOffset + -4),
             *(ulong *)(runtimeInitParams + stackBufferOffset));
  *(BYTE **)((int)puVar2 + 0xc) = runtimeInitParams + stackBufferOffset + 4;
  *(DWORD *)(&stack0x000000e4 + stackBufferOffset) = g_RuntimeBufferSize;
  *(BYTE **)(puVar2 + 8) = runtimeInitParams;
  puVar3 = puVar2 + 4;
  *(undefined4 *)(puVar2 + 4) = 0x609eb6;
  crt_startup_cpp_InitializeWinAppRuntime_FUN_006026a8(runtimeInitParams);
  alignedStackSize = g_StackAllocSize + 3 & 0xfffffffc;
  pReturnAddr = (uint *)(puVar3 + 8);
  *(undefined4 *)(puVar3 + 8) = 0x609eca;
  currentStackUsage = crt_stack_c_GetStackUsage_FUN_0060c260();
  pRuntimeStack = pReturnAddr + 1;
  if (alignedStackSize < currentStackUsage) {
    *pReturnAddr = alignedStackSize;
    puVar4 = pReturnAddr + -1;
    pReturnAddr[-1] = 0x609ed4;
    crt_stack_c_ProbeStackSpace_FUN_005ffa2f(*pReturnAddr);
    stackBufferOffset = -(g_StackAllocSize + 3 & 0xfffffffc);
    pRuntimeStack = (undefined4 *)((int)puVar4 + stackBufferOffset + 8);
    pStackBuffer = (undefined4 *)((int)puVar4 + stackBufferOffset + 8);
  }
  else {
    pStackBuffer = (undefined4 *)0x0;
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
  *(undefined4 *)((int)pWinMainFrame + 0xc) = 0x609f18;
  crt_startup_c_ExitApplication_FUN_0060b534(*(int *)((int)pWinMainFrame + 0x10));
  return;
}


// Assembly code:
// 00609e70: PUSH EBX
//   Label: crt_startup.cpp_WinMainBootstrap_FUN_00609e70
// 00609e71: PUSH EBP
// 00609e72: MOV EBP,ESP
// 00609e74: SUB ESP,0x8
// 00609e77: MOV EAX,0x1
// 00609e7c: CALL crt_init.c_ProcessInitTermHandlers_FUN_0060ac30
//   XREF to: 0060ac30 (UNCONDITIONAL_CALL)
// 00609e81: MOV EAX,[0x006854f8]
//   XREF to: 006854f8 (READ)
// 00609e86: ADD EAX,0x3
// 00609e89: AND AL,0xfc
// 00609e8b: SUB ESP,EAX
// 00609e8d: MOV EBX,ESP
// 00609e8f: MOV EDX,dword ptr [0x006854f8]
//   XREF to: 006854f8 (READ)
// 00609e95: PUSH EDX
// 00609e96: PUSH 0x0
// 00609e98: PUSH EBX
// 00609e99: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00609e9e: ADD ESP,0xc
// 00609ea1: MOV EAX,[0x006854f8]
//   XREF to: 006854f8 (READ)
// 00609ea6: PUSH EBX
// 00609ea7: MOV dword ptr [EBX + 0xf0],EAX
// 00609ead: LEA EAX,[EBP + -0x8]
//   XREF to: Stack[-0x10] (DATA)
// 00609eb0: PUSH EAX
// 00609eb1: CALL crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8
//   XREF to: 006026a8 (UNCONDITIONAL_CALL)
// 00609eb6: MOV EBX,dword ptr [0x00684ff8]
//   XREF to: 00684ff8 (READ)
// 00609ebc: ADD EBX,0x3
// 00609ebf: ADD ESP,0x8
// 00609ec2: AND BL,0xfc
//   XREF to: register:0000000c (WRITE)
// 00609ec5: CALL crt_stack.c_GetStackUsage_FUN_0060c260
//   XREF to: register:00000010 (WRITE)
//   XREF to: 0060c260 (UNCONDITIONAL_CALL)
// 00609eca: CMP EBX,EAX
// 00609ecc: JNC 0x00609ee4
//   XREF to: 00609ee4 (CONDITIONAL_JUMP)
// 00609ece: PUSH EBX
// 00609ecf: CALL crt_stack.c_ProbeStackSpace_FUN_005ffa2f
//   XREF to: 005ffa2f (UNCONDITIONAL_CALL)
// 00609ed4: MOV EAX,[0x00684ff8]
//   XREF to: 00684ff8 (READ)
// 00609ed9: ADD EAX,0x3
// 00609edc: AND AL,0xfc
// 00609ede: SUB ESP,EAX
// 00609ee0: MOV EAX,ESP
// 00609ee2: JMP 0x00609ee6
//   XREF to: 00609ee6 (UNCONDITIONAL_JUMP)
// 00609ee4: XOR EAX,EAX
//   Label: LAB_00609ee4
//   XREF to: register:00000000 (WRITE)
// 00609ee6: MOV EBX,dword ptr [0x00684ff8]
//   Label: LAB_00609ee6
//   XREF to: register:00000010 (WRITE)
//   XREF to: 00684ff8 (READ)
// 00609eec: ADD EAX,EBX
// 00609eee: MOV [0x00684ffc],EAX
//   XREF to: 00684ffc (WRITE)
// 00609ef3: CALL crt_startup.c_PlaceholderStub_FUN_0060ca80
//   XREF to: 0060ca80 (UNCONDITIONAL_CALL)
// 00609ef8: PUSH 0xa
// 00609efa: MOV EBX,dword ptr [0x00684fd4]
//   XREF to: 00684fd4 (READ)
// 00609f00: PUSH EBX
// 00609f01: PUSH 0x0
// 00609f03: PUSH 0x0
// 00609f05: CALL dword ptr CS:[0x6115b4]
//   XREF to: register:00000010 (WRITE)
//   XREF to: 006115b4 (READ)
// 00609f0c: PUSH EAX
// 00609f0d: CALL wincore_winrun.cpp_winMain_FUN_005f3680
//   XREF to: register:00000000 (WRITE)
//   XREF to: 005f3680 (UNCONDITIONAL_CALL)
// 00609f12: PUSH EAX
// 00609f13: CALL crt_startup.c_ExitApplication_FUN_0060b534
//   XREF to: 0060b534 (UNCONDITIONAL_CALL)
// 00609f18: ADD ESP,0x4
// 00609f1b: MOV ESP,EBP
// 00609f1d: POP EBP
// 00609f1e: POP EBX
// 00609f1f: RET
