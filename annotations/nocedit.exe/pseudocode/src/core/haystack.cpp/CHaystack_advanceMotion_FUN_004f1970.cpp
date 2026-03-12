// Name: core_haystack.cpp_CHaystack_advanceMotion_FUN_004f1970
// Address: 004f1970
// Address Range: [[004f1970, 004f1aa5]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_advanceMotion_FUN_004f1970(CHaystack *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_haystack_cpp_CHaystack_advanceMotion_FUN_004f1970(CHaystack *this_ptr,float delta_time)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(this_ptr->base).base.model.motion_controller,&delta_time);
    switch(iVar1) {
    case 0x65:
      core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004f1ab0(this_ptr,INT_02db8734);
      iVar2 = this_ptr->attack_side;
      goto LAB_004f19bc;
    case 0x66:
      core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004f1ab0(this_ptr,INT_02db8738);
      iVar2 = this_ptr->attack_side;
LAB_004f19bc:
      this_ptr->attack_side = (uint)(iVar2 == 0);
      break;
    case 0x67:
    case 0x69:
    case 0x6b:
      iVar2 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y,
                         (double)(this_ptr->base).base.base.location.position.z,40.0);
      if (iVar2 != 0) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"box-swing?.wav");
      }
      break;
    case 0x68:
    case 0x6a:
    case 0x6c:
      iVar2 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y,
                         (double)(this_ptr->base).base.base.location.position.z,40.0);
      if ((iVar2 != 0) && (iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.4), iVar2 != 0)) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"box-punch?.wav");
      }
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,iVar1);
    }
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
