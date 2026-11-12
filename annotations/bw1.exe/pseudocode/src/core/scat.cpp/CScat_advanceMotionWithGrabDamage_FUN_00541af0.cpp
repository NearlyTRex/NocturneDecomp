// Name: core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_00541af0
// Address: 00541af0
// Address Range: [[00541af0, 00541b7d]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_00541af0(CScat *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_00541af0(CScat *this_ptr,float delta_time)

{
  int bone_index;
  CCharacter *this_ptr_00;
  SDamageInfo SStack_50;
  
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_00524270
                           (&(this_ptr->base).base.model.base,&delta_time);
    if (bone_index == 100) {
      this_ptr_00 = (CCharacter *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              ((this_ptr->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
      if (this_ptr_00 != (CCharacter *)0x0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&SStack_50);
        SStack_50.damage_amount = 5.0;
        SStack_50.attacker = (CDemonActor *)this_ptr;
        SStack_50.wielder = (CDemonActor *)this_ptr;
        (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)(this_ptr_00,&SStack_50);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,bone_index);
    }
  } while (0.0 < delta_time);
  return;
}
