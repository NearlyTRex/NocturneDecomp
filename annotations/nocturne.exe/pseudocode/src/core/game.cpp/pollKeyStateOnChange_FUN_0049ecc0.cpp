// Name: core_game.cpp_pollKeyStateOnChange_FUN_0049ecc0
// Address: 0049ecc0
// Address Range: [[0049ecc0, 0049ece1]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_0049ecc0(int key_index,int *output_state)

#include "nocturne.h"

void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_0049ecc0(int key_index,int *output_state)

{
  if (g_CHAR_ARRAY_01c781c0[key_index] == g_CHAR_ARRAY_01c02598[key_index]) {
    return;
  }
  *output_state = (uint)(byte)g_CHAR_ARRAY_01c02598[key_index];
  return;
}
