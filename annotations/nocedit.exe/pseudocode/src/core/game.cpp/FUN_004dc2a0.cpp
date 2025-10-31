// Name: core_game.cpp_FUN_004dc2a0
// Address: 004dc2a0
// Address Range: [[004dc2a0, 004dc2c7]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004dc2a0()
// Globals:
//   char[256] g_KeyboardState
//   char[600] g_PrevKeyboardState

#include "nocturne.h"

void core_game_cpp_FUN_004dc2a0(void)

{
  int in_stack_00000004;
  uint *in_stack_00000008;
  
  if (g_PrevKeyboardState[in_stack_00000004] != g_KeyboardState[in_stack_00000004]) {
    *in_stack_00000008 = (uint)(byte)g_KeyboardState[in_stack_00000004];
    return;
  }
  *in_stack_00000008 = 0;
  return;
}


// Assembly code:
// 004dc2a0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_game.cpp_FUN_004dc2a0
//   XREF to: Stack[0x4] (READ)
// 004dc2a4: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004dc2a8: MOV AL,byte ptr [EDX + 0x2d82670]
//   XREF to: 02d82670 (DATA)
// 004dc2ae: CMP AL,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 004dc2b4: JZ 0x004dc2c1
//   XREF to: 004dc2c1 (CONDITIONAL_JUMP)
// 004dc2b6: XOR EAX,EAX
// 004dc2b8: MOV AL,byte ptr [EDX + 0x2d03e98]
//   XREF to: 02d03e98 (DATA)
// 004dc2be: MOV dword ptr [ECX],EAX
// 004dc2c0: RET
// 004dc2c1: MOV dword ptr [ECX],0x0
//   Label: LAB_004dc2c1
// 004dc2c7: RET
