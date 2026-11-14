// Name: core_vampboss.cpp_CVampireBoss_transformToHuman_FUN_005a7290
// Address: 005a7290
// Address Range: [[005a7290, 005a72d2]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_005a7290(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_transformToHuman_FUN_005a7290(CVampireBoss *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  
  this_ptr->form = 3;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
            (&(this_ptr->base).base.model.base,"float",0.0);
  pCVar1 = (this_ptr->base).base.base.vtable._ub;
  this_ptr->follow_result = 0;
  (*pCVar1->playSound)((CDemonActor *)this_ptr,"voicuhuman.wav");
  return;
}
