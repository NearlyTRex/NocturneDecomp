// Name: core_vampboss.cpp_CVampireBoss_FUN_005e74c0
// Address: 005e74c0
// Address Range: [[005e74c0, 005e7502]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e74c0(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e74c0(CVampireBoss *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  
  this_ptr->form = 3;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
            (&(this_ptr->base).base.model.motion_controller,"float",0.0);
  pCVar1 = (this_ptr->base).base.base.vtable._ub;
  this_ptr->unk5 = 0;
  (*pCVar1->playSound)((CDemonActor *)this_ptr,"voicuhuman.wav");
  return;
}
