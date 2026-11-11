// Name: core_haystack.cpp_CHaystack_advanceMotion_FUN_004e9f20
// Address: 004e9f20
// Address Range: [[004e9f20, 004ea051]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_advanceMotion_FUN_004e9f20(CHaystack *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_haystack_cpp_CHaystack_advanceMotion_FUN_004e9f20(CHaystack *this_ptr,float delta_time)

{
  int iVar1;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      (&(this_ptr->base).base.model.base,&delta_time);
    switch(iVar1) {
    case 0x65:
      core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004ea060(this_ptr,_DAT_01d06a0c);
      iVar1 = this_ptr->attack_side;
      goto LAB_004e9f6c;
    case 0x66:
      core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004ea060(this_ptr,_DAT_01d06a10);
      iVar1 = this_ptr->attack_side;
LAB_004e9f6c:
      this_ptr->attack_side = (uint)(iVar1 == 0);
      break;
    case 0x67:
    case 0x69:
    case 0x6b:
      iVar1 = sound_sndmain_cpp_FUN_00574010
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y,
                         (double)(this_ptr->base).base.base.location.position.z,0x42200000);
      if (iVar1 != 0) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"box-swing?.wav");
      }
      break;
    case 0x68:
    case 0x6a:
    case 0x6c:
      iVar1 = sound_sndmain_cpp_FUN_00574010
                        ((double)(this_ptr->base).base.base.location.position.x,
                         (double)(this_ptr->base).base.base.location.position.y,
                         (double)(this_ptr->base).base.base.location.position.z,0x42200000);
      if ((iVar1 != 0) && (iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(0.4), iVar1 != 0)) {
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"box-punch?.wav");
      }
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar1);
    }
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
