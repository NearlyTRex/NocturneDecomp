// Name: entry
// Address: 0060239a
// Address Range: [[0060239a, 0060239e]]
// Convention: __watcallRegister
// Signature: void entry(void)

#include "nocturne.h"

/* WARNING: Unable to track spacebase fully for stack */

void entry(void)

{
  uint uVar1;
  undefined1 *puVar2;
  HMODULE pHVar3;
  int iVar4;
  uint uVar5;
  BADSPACEBASE *in_ESP;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uStack_1c;
  int aiStack_18 [3];
  undefined1 auStack_c [4];
  
  aiStack_18[1] = 0x609e81;
  crt_init_c_ProcessInitTermHandlers_FUN_0060ac30(1);
  iVar4 = -(g_RuntimeBufferSize + 3 & 0xfffffffc);
  *(DWORD *)((int)aiStack_18 + iVar4 + 8) = g_RuntimeBufferSize;
  *(undefined4 *)((int)aiStack_18 + iVar4 + 4) = 0;
  *(undefined1 **)((int)aiStack_18 + iVar4) = auStack_c + iVar4;
  puVar6 = (undefined1 *)((int)&uStack_1c + iVar4);
  *(undefined4 *)((int)&uStack_1c + iVar4) = 0x609e9e;
  crt_memory_c_memset_FUN_005fde40
            (*(void **)((int)aiStack_18 + iVar4),*(int *)((int)aiStack_18 + iVar4 + 4),
             *(ulong *)((int)aiStack_18 + iVar4 + 8));
  *(undefined1 **)((int)puVar6 + 0xc) = auStack_c + iVar4;
  *(DWORD *)(&stack0x000000e4 + iVar4) = g_RuntimeBufferSize;
  *(int **)(puVar6 + 8) = aiStack_18 + 2;
  puVar7 = puVar6 + 4;
  *(undefined4 *)(puVar6 + 4) = 0x609eb6;
  crt_startup_cpp_InitializeWinAppRuntime_FUN_006026a8(aiStack_18 + 2);
  uVar5 = g_StackAllocSize + 3 & 0xfffffffc;
  puVar8 = (uint *)(puVar7 + 8);
  *(undefined4 *)(puVar7 + 8) = 0x609eca;
  uVar1 = crt_stack_c_GetStackUsage_FUN_0060c260();
  puVar10 = puVar8 + 1;
  if (uVar5 < uVar1) {
    *puVar8 = uVar5;
    puVar9 = puVar8 + -1;
    puVar8[-1] = 0x609ed4;
    crt_stack_c_ProbeStackSpace_FUN_005ffa2f(*puVar8);
    iVar4 = -(g_StackAllocSize + 3 & 0xfffffffc);
    puVar10 = (uint *)((int)puVar9 + iVar4 + 8);
    puVar2 = (undefined1 *)((int)puVar9 + iVar4 + 8);
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  g_CrtStackBuffer = puVar2 + g_StackAllocSize;
  puVar11 = (undefined4 *)((int)puVar10 + -4);
  *(undefined4 *)((int)puVar10 + -4) = 0x609ef8;
  crt_startup_c_PlaceholderStub_FUN_0060ca80();
  *puVar11 = 10;
  puVar11[-1] = g_WinMainCmdShow;
  puVar11[-2] = 0;
  puVar11[-3] = 0;
  puVar12 = puVar11 + -4;
  puVar11[-4] = 0x609f0c;
  pHVar3 = (*GetModuleHandleA)((LPCSTR)puVar11[-3]);
  puVar12[1] = pHVar3;
  *puVar12 = 0x609f12;
  iVar4 = wincore_winrun_cpp_winMain_FUN_005f3680
                    ((HINSTANCE)puVar12[1],(HINSTANCE)puVar12[2],(LPSTR)puVar12[3],puVar12[4],
                     puVar12[5]);
  *(int *)((int)puVar12 + 0x10) = iVar4;
  *(undefined4 *)((int)puVar12 + 0xc) = 0x609f18;
  crt_startup_c_ExitApplication_FUN_0060b534(*(int *)((int)puVar12 + 0x10));
  return;
}


// Assembly code:
// 0060239a: JMP 0x00609e70
//   Label: entry
//   XREF to: 00609e70 (UNCONDITIONAL_JUMP)
