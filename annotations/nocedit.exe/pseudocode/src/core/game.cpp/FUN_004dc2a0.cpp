// Name: core_game.cpp_FUN_004dc2a0
// Address: 004dc2a0
// Address Range: [[004dc2a0, 004dc2c7]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004dc2a0()

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
