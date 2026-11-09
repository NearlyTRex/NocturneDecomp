// Name: core_game.cpp_FUN_004b39b0
// Address: 004b39b0
// Address Range: [[004b39b0, 004b39c8]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004b39b0(CGame *this_ptr,CVector3f *fudge_target,float fudge_step)

#include "nocturne.h"

void __cdecl core_game_cpp_FUN_004b39b0(CGame *this_ptr,CVector3f *fudge_target,float fudge_step)

{
  *(CVector3f **)&this_ptr->field_0x9e0 = fudge_target;
  *(float *)&this_ptr->field_0x9e4 = fudge_step;
  return;
}
