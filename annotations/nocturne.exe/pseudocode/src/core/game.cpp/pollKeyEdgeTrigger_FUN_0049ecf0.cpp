// Name: core_game.cpp_pollKeyEdgeTrigger_FUN_0049ecf0
// Address: 0049ecf0
// Address Range: [[0049ecf0, 0049ed17]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_pollKeyEdgeTrigger_FUN_0049ecf0(int key_index,uint *out_state)

#include "nocturne.h"

void __cdecl core_game_cpp_pollKeyEdgeTrigger_FUN_0049ecf0(int key_index,uint *out_state)

{
  if ((&DAT_01c781c0)[key_index] != (&DAT_01c02598)[key_index]) {
    *out_state = (uint)(byte)(&DAT_01c02598)[key_index];
    return;
  }
  *out_state = 0;
  return;
}
