// Name: core_twigzomb.cpp_CTwigZombie_processDeathState_FUN_005a2a90
// Address: 005a2a90
// Address Range: [[005a2a90, 005a2ab0]]
// Convention: __cdecl
// Signature: void __cdecl core_twigzomb_cpp_CTwigZombie_processDeathState_FUN_005a2a90(CTwigZombie *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_twigzomb_cpp_CTwigZombie_processDeathState_FUN_005a2a90(CTwigZombie *this_ptr,float delta_time)

{
  (this_ptr->base).base.base.follow_leader = (CCharacter *)0x0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,3,1);
  return;
}
