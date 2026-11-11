// Name: core_confzomb.cpp_CConfederateZombie_processDeathState_FUN_005a1ed0
// Address: 005a1ed0
// Address Range: [[005a1ed0, 005a1f37]]
// Convention: __cdecl
// Signature: void __cdecl core_confzomb_cpp_CConfederateZombie_processDeathState_FUN_005a1ed0(CConfederateZombie *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_confzomb_cpp_CConfederateZombie_processDeathState_FUN_005a1ed0(CConfederateZombie *this_ptr,float delta_time)

{
  int iVar1;
  
  (this_ptr->base).base.base.follow_leader = (CCharacter *)0x0;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,5,1);
  iVar1 = (this_ptr->base).fade_state;
  (this_ptr->base).base.base.is_spectral = 1;
  if ((iVar1 == 0) && (0.0 < (this_ptr->base).fade_val)) {
    unkafter_basicene_cpp_FUN_005a01a0(this_ptr,(this_ptr->base).fade_val,0,0x400ccccd);
    unkafter_basicene_cpp_FUN_0059f570(this_ptr);
    return;
  }
  return;
}
