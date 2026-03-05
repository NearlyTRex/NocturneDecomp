// Name: core_gabriela.cpp_CGabriella_tryThrowObject_FUN_004d6050
// Address: 004d6050
// Address Range: [[004d6050, 004d6082]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_tryThrowObject_FUN_004d6050(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_tryThrowObject_FUN_004d6050(CGabriella *this_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = (this_ptr->base).base.carry_hands[0].carry_actor;
  (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
  if (pCVar1 == (CDemonActor *)0x0) {
    return 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,5,1);
  return 1;
}
