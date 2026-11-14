// Name: core_game.cpp_CGame_setFudgeTarget_FUN_004cc9a0
// Address: 004cc9a0
// Address Range: [[004cc9a0, 004cc9b8]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setFudgeTarget_FUN_004cc9a0(CGame *this_ptr,CVector3f *fudge_target,float fudge_step)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setFudgeTarget_FUN_004cc9a0(CGame *this_ptr,CVector3f *fudge_target,float fudge_step)

{
  this_ptr->debug_fudge_target = fudge_target;
  this_ptr->debug_fudge_step = fudge_step;
  return;
}
