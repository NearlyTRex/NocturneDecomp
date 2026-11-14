// Name: core_gabriela.cpp_CGabriella_tryThrowObject_FUN_004c9eb0
// Address: 004c9eb0
// Address Range: [[004c9eb0, 004c9ee2]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_tryThrowObject_FUN_004c9eb0(CGabriella *this_ptr)

#include "nocturne.h"

int __cdecl core_gabriela_cpp_CGabriella_tryThrowObject_FUN_004c9eb0(CGabriella *this_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = (this_ptr->base).base.carry_hands[0].carry_actor;
  (this_ptr->base).object_to_pick_up = (CDemonActor *)0x0;
  if (pCVar1 == (CDemonActor *)0x0) {
    return 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            (&(this_ptr->base).base.model.base,5,1);
  return 1;
}
