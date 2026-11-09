// Name: core_game.cpp_pollKeyStateOnChange_FUN_004d0d70
// Address: 004d0d70
// Address Range: [[004d0d70, 004d0d91]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_004d0d70(int key_index,int *output_state)

#include "nocturne.h"

void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_004d0d70(int key_index,int *output_state)

{
  if ((&DAT_01ccff98)[key_index] == (&DAT_01c50950)[key_index]) {
    return;
  }
  *output_state = (uint)(byte)(&DAT_01c50950)[key_index];
  return;
}
