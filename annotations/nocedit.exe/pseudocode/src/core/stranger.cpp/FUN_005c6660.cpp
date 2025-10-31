// Name: core_stranger.cpp_FUN_005c6660
// Address: 005c6660
// Address Range: [[005c6660, 005c669d]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005c6660()
// Globals:
//   undefined4 s_flashlit.wav_00653f94
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.auto_save_blocked

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_FUN_005c6660(undefined4 param_1, undefined4
   param_2) */

void core_stranger_cpp_FUN_005c6660(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  *(int *)(in_stack_00000004 + 0x1fbd4) = in_stack_00000008;
  if ((in_stack_00000008 == 0) && (g_CGamePtr->auto_save_blocked != 0)) {
    g_CGamePtr->auto_save_blocked = 0;
    (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    return;
  }
  return;
}


// Assembly code:
// 005c6660: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_stranger.cpp_FUN_005c6660
//   XREF to: Stack[0x4] (READ)
// 005c6664: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005c6668: MOV dword ptr [EDX + 0x1fbd4],EAX
// 005c666e: TEST EAX,EAX
// 005c6670: JNZ 0x005c6680
//   XREF to: 005c6680 (CONDITIONAL_JUMP)
// 005c6672: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 005c6677: CMP dword ptr [EAX + 0x244],0x0
//   XREF to: 02d81ce0 (READ)
// 005c667e: JNZ 0x005c6681
//   XREF to: 005c6681 (CONDITIONAL_JUMP)
// 005c6680: RET
//   Label: LAB_005c6680
// 005c6681: PUSH 0x653f94
//   Label: LAB_005c6681
//   XREF to: 00653f94 (DATA)
// 005c6686: MOV dword ptr [EAX + 0x244],0x0
//   XREF to: 02d81ce0 (WRITE)
// 005c6690: PUSH EDX
// 005c6691: MOV EAX,dword ptr [EDX + 0x154]
// 005c6697: CALL dword ptr [EAX + 0x24]
// 005c669a: ADD ESP,0x8
// 005c669d: RET
