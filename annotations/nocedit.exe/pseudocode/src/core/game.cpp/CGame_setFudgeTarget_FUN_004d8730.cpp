// Name: core_game.cpp_CGame_setFudgeTarget_FUN_004d8730
// Address: 004d8730
// Address Range: [[004d8730, 004d8748]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setFudgeTarget_FUN_004d8730 (CGame *this_ptr,CVector3f *fudge_target,float fudge_step)

#include "nocturne.h"

void __cdecl
core_game_cpp_CGame_setFudgeTarget_FUN_004d8730
          (CGame *this_ptr,CVector3f *fudge_target,float fudge_step)

{
  this_ptr->debug_fudge_target = fudge_target;
  this_ptr->debug_fudge_step = fudge_step;
  return;
}
