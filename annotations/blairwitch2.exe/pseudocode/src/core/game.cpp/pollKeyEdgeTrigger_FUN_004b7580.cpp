// Name: core_game.cpp_pollKeyEdgeTrigger_FUN_004b7580
// Address: 004b7580
// Address Range: [[004b7580, 004b75a7]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_pollKeyEdgeTrigger_FUN_004b7580(int key_index,uint *out_state)

#include "nocturne.h"

void __cdecl core_game_cpp_pollKeyEdgeTrigger_FUN_004b7580(int key_index,uint *out_state)

{
  if (g_PrevKeyboardState[key_index] != g_KeyboardState[key_index]) {
    *out_state = (uint)(byte)g_KeyboardState[key_index];
    return;
  }
  *out_state = 0;
  return;
}
