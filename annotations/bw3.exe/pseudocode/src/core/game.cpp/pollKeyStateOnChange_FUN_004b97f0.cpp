// Name: core_game.cpp_pollKeyStateOnChange_FUN_004b97f0
// Address: 004b97f0
// Address Range: [[004b97f0, 004b9811]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_004b97f0(int key_index,int *output_state)

#include "nocturne.h"

void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_004b97f0(int key_index,int *output_state)

{
  if (g_CHAR_ARRAY_01d21fa0[key_index] == g_CHAR_ARRAY_01c6cef0[key_index]) {
    return;
  }
  *output_state = (uint)(byte)g_CHAR_ARRAY_01c6cef0[key_index];
  return;
}
