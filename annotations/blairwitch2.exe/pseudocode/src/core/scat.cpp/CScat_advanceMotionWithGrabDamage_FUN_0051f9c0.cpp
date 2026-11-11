// Name: core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_0051f9c0
// Address: 0051f9c0
// Address Range: [[0051f9c0, 0051fa4d]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_0051f9c0(CScat *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_0051f9c0(CScat *this_ptr,float delta_time)

{
  int iVar1;
  SDamageInfo SStack_50;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      (&(this_ptr->base).base.model.base,&delta_time);
    if (iVar1 == 100) {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        ((this_ptr->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
      if (iVar1 != 0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_50);
        SStack_50.damage_amount = 5.0;
        SStack_50.attacker = (CDemonActor *)this_ptr;
        SStack_50.wielder = (CDemonActor *)this_ptr;
        (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x110))(iVar1,&SStack_50);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,iVar1);
    }
  } while (0.0 < delta_time);
  return;
}
