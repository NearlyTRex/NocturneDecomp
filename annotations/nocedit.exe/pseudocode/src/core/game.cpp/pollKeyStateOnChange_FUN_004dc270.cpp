// Name: core_game.cpp_pollKeyStateOnChange_FUN_004dc270
// Address: 004dc270
// Address Range: [[004dc270, 004dc291]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_004dc270(int key_index,int *output_state)

#include "nocturne.h"

void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_004dc270(int key_index,int *output_state)

{
  if (g_PrevKeyboardState[key_index] == g_KeyboardState[key_index]) {
    return;
  }
  *output_state = (uint)(byte)g_KeyboardState[key_index];
  return;
}
