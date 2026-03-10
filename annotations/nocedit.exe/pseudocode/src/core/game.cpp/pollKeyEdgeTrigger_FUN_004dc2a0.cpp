// Name: core_game.cpp_pollKeyEdgeTrigger_FUN_004dc2a0
// Address: 004dc2a0
// Address Range: [[004dc2a0, 004dc2c7]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_pollKeyEdgeTrigger_FUN_004dc2a0(int key_index,uint *out_state)

#include "nocturne.h"

void __cdecl core_game_cpp_pollKeyEdgeTrigger_FUN_004dc2a0(int key_index,uint *out_state)

{
  if (g_PrevKeyboardState[key_index] != g_KeyboardState[key_index]) {
    *out_state = (uint)(byte)g_KeyboardState[key_index];
    return;
  }
  *out_state = 0;
  return;
}
