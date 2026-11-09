// Name: core_game.cpp_CGame_setFudgeTarget_FUN_004cc9a0
// Address: 004cc9a0
// Address Range: [[004cc9a0, 004cc9b8]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setFudgeTarget_FUN_004cc9a0(CGame *this_ptr,CVector3f *fudge_target,float fudge_step)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setFudgeTarget_FUN_004cc9a0(CGame *this_ptr,CVector3f *fudge_target,float fudge_step)

{
  *(CVector3f **)&this_ptr->field_0x9f0 = fudge_target;
  *(float *)&this_ptr->field_0x9f4 = fudge_step;
  return;
}
