// Name: core_game.cpp_pollKeyStateOnChange_FUN_004b7550
// Address: 004b7550
// Address Range: [[004b7550, 004b7571]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_004b7550(int key_index,int *output_state)

#include "nocturne.h"

void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_004b7550(int key_index,int *output_state)

{
  if ((&DAT_01cb7528)[key_index] == (&DAT_01c37790)[key_index]) {
    return;
  }
  *output_state = (uint)(byte)(&DAT_01c37790)[key_index];
  return;
}
