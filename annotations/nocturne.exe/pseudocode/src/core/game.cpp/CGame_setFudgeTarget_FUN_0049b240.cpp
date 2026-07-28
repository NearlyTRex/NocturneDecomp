// Name: core_game.cpp_CGame_setFudgeTarget_FUN_0049b240
// Address: 0049b240
// Address Range: [[0049b240, 0049b258]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setFudgeTarget_FUN_0049b240(CGame *this_ptr,CVector3f *fudge_target,float fudge_step)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setFudgeTarget_FUN_0049b240(CGame *this_ptr,CVector3f *fudge_target,float fudge_step)

{
  this_ptr->debug_fudge_target = fudge_target;
  this_ptr->debug_fudge_step = fudge_step;
  return;
}
