// Name: core_stranger.cpp_CStranger_FUN_005c1f80
// Address: 005c1f80
// Address Range: [[005c1f80, 005c1fd1]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c1f80(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c1f80(CStranger *this_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = (this_ptr->base).base.carry_hands[1].carry_actor;
  this_ptr->action_timer = 4.0;
  if (pCVar1 == this_ptr->weapon) {
    this_ptr->weapon = (CDemonActor *)0x0;
  }
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
            ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,0,1);
  return;
}
