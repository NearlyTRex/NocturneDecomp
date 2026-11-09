// Name: core_game.cpp_pollKeyStateOnChange_FUN_004b97f0
// Address: 004b97f0
// Address Range: [[004b97f0, 004b9811]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_004b97f0(int key_index,int *output_state)

#include "nocturne.h"

void __cdecl core_game_cpp_pollKeyStateOnChange_FUN_004b97f0(int key_index,int *output_state)

{
  if ((&DAT_01d21fa0)[key_index] == (&DAT_01c6cef0)[key_index]) {
    return;
  }
  *output_state = (uint)(byte)(&DAT_01c6cef0)[key_index];
  return;
}
