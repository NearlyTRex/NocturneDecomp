// Name: core_haystack.cpp_CHaystack_FUN_004f1970
// Address: 004f1970
// Address Range: [[004f1970, 004f1aa5]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_FUN_004f1970(CHaystack *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_haystack_cpp_CHaystack_FUN_004f1970(CHaystack *this_ptr)

{
  int iVar1;
  float in_stack_00000008;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(this_ptr->base).base.model.motion_controller);
    switch(iVar1) {
    case 0x65:
      core_haystack_cpp_CHaystack_FUN_004f1ab0(this_ptr);
      iVar1 = this_ptr->attack_side;
      goto LAB_004f19bc;
    case 0x66:
      core_haystack_cpp_CHaystack_FUN_004f1ab0(this_ptr);
      iVar1 = this_ptr->attack_side;
LAB_004f19bc:
      this_ptr->attack_side = (uint)(iVar1 == 0);
      break;
    case 0x67:
    case 0x69:
    case 0x6b:
      iVar1 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y,
                         (double)(this_ptr->base).base.base.location.position.z,40.0);
      if (iVar1 != 0) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"box-swing?.wav");
      }
      break;
    case 0x68:
    case 0x6a:
    case 0x6c:
      iVar1 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y,
                         (double)(this_ptr->base).base.base.location.position.z,40.0);
      if ((iVar1 != 0) && (iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.4), iVar1 != 0)) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"box-punch?.wav");
      }
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar1);
    }
    if (in_stack_00000008 <= 0.0) {
      return;
    }
  } while( true );
}
