// Name: core_game.cpp_FUN_004b3000
// Address: 004b3000
// Address Range: [[004b3000, 004b300f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004b3000(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_FUN_004b3000(CGame *this_ptr)

{
  uint uVar1;
  
  uVar1 = wincore_winrun_cpp_FUN_0058e9e0();
  *(uint *)&this_ptr->field_0x27c = uVar1;
  return;
}
