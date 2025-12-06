// Name: core_game.cpp_FUN_004dc270
// Address: 004dc270
// Address Range: [[004dc270, 004dc291]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004dc270()

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
