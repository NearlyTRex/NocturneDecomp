// Name: core_game.cpp_pollKeyStateOnChange_FUN_004dc270
// Address: 004dc270
// Address Range: [[004dc270, 004dc291]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_004dc270(void)

#include "nocturne.h"

void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_004dc270(void)

{
  int in_stack_00000004;
  uint *in_stack_00000008;
  
  if (g_PrevKeyboardState[in_stack_00000004] == g_KeyboardState[in_stack_00000004]) {
    return;
  }
  *in_stack_00000008 = (uint)(byte)g_KeyboardState[in_stack_00000004];
  return;
}
