// Name: core_unionzom.cpp_CUnionZombie_processDeathState_FUN_005a4080
// Address: 005a4080
// Address Range: [[005a4080, 005a40e7]]
// Convention: __cdecl
// Signature: void __cdecl core_unionzom_cpp_CUnionZombie_processDeathState_FUN_005a4080(CUnionZombie *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_unionzom_cpp_CUnionZombie_processDeathState_FUN_005a4080(CUnionZombie *this_ptr,float delta_time)

{
  (this_ptr->base).base.base.follow_leader = (CCharacter *)0x0;
  (this_ptr->base).base.base.is_spectral = 1;
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            (&(this_ptr->base).base.base.model.base,5,1);
  if (((this_ptr->base).fade_state == 0) && (0.0 < (this_ptr->base).fade_val)) {
    unkafter_basicene_cpp_FUN_005a01a0(this_ptr,(this_ptr->base).fade_val,0,0x400ccccd);
    unkafter_basicene_cpp_FUN_0059f570(this_ptr);
    return;
  }
  return;
}
