// Name: core_vampboss.cpp_CVampireBoss_transformToHuman_FUN_0054e1e0
// Address: 0054e1e0
// Address Range: [[0054e1e0, 0054e222]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_0054e1e0(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_0054e1e0(CVampireBoss *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  
  this_ptr->form = 3;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
            (&(this_ptr->base).base.model.motion_controller,"float",0.0);
  pCVar1 = (this_ptr->base).base.base.vtable._ub;
  this_ptr->follow_result = 0;
  (*pCVar1->playSound)((CDemonActor *)this_ptr,"voicuhuman.wav");
  return;
}
