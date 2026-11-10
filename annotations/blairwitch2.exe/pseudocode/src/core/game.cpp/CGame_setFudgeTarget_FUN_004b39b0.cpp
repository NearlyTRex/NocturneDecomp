// Name: core_game.cpp_CGame_setFudgeTarget_FUN_004b39b0
// Address: 004b39b0
// Address Range: [[004b39b0, 004b39c8]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setFudgeTarget_FUN_004b39b0(CGame *this_ptr,CVector3f *fudge_target,float fudge_step)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setFudgeTarget_FUN_004b39b0(CGame *this_ptr,CVector3f *fudge_target,float fudge_step)

{
  this_ptr->debug_fudge_target = fudge_target;
  this_ptr->debug_fudge_step = fudge_step;
  return;
}
