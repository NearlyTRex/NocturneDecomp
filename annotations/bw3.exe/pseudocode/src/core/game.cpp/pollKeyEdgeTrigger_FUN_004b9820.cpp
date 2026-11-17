// Name: core_game.cpp_pollKeyEdgeTrigger_FUN_004b9820
// Address: 004b9820
// Address Range: [[004b9820, 004b9847]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_pollKeyEdgeTrigger_FUN_004b9820(int key_index,uint *out_state)

#include "nocturne.h"

void __cdecl core_game_cpp_pollKeyEdgeTrigger_FUN_004b9820(int key_index,uint *out_state)

{
  if (g_CHAR_ARRAY_01d21fa0[key_index] != g_CHAR_ARRAY_01c6cef0[key_index]) {
    *out_state = (uint)(byte)g_CHAR_ARRAY_01c6cef0[key_index];
    return;
  }
  *out_state = 0;
  return;
}
