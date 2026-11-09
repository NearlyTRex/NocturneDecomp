// Name: core_game.cpp_FUN_004b4430
// Address: 004b4430
// Address Range: [[004b4430, 004b443f]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004b4430(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_FUN_004b4430(CGame *this_ptr)

{
  uint uVar1;
  
  uVar1 = wincore_winrun_cpp_FUN_005806a0();
  *(uint *)&this_ptr->field_0x30c = uVar1;
  return;
}
