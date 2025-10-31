// Name: core_game.cpp_FUN_004dc270
// Address: 004dc270
// Address Range: [[004dc270, 004dc291]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004dc270()
// Globals:
//   char[256] g_KeyboardState
//   char[600] g_PrevKeyboardState

#include "nocturne.h"

void core_game_cpp_FUN_004dc270(void)

{
  int in_stack_00000004;
  uint *in_stack_00000008;
  
  if (g_PrevKeyboardState[in_stack_00000004] == g_KeyboardState[in_stack_00000004]) {
    return;
  }
  *in_stack_00000008 = (uint)(byte)g_KeyboardState[in_stack_00000004];
  return;
}


// Assembly code:
// 004dc270: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_game.cpp_FUN_004dc270
//   XREF to: Stack[0x4] (READ)
// 004dc274: MOV AL,byte ptr [EDX + 0x2d82670]
//   XREF to: 02d82670 (DATA)
// 004dc27a: CMP AL,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 004dc280: JNZ 0x004dc283
//   XREF to: 004dc283 (CONDITIONAL_JUMP)
// 004dc282: RET
// 004dc283: XOR EAX,EAX
//   Label: LAB_004dc283
// 004dc285: MOV AL,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 004dc28b: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004dc28f: MOV dword ptr [EDX],EAX
// 004dc291: RET
