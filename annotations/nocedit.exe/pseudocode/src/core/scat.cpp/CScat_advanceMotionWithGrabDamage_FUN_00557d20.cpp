// Name: core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_00557d20
// Address: 00557d20
// Address Range: [[00557d20, 00557dad]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_00557d20(CScat *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_00557d20(CScat *this_ptr,float delta_time)

{
  int bone_index;
  CEnemy *this_ptr_00;
  SDamageInfo SStack_50;
  
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_0052d610
                           (&(this_ptr->base).base.model.motion_controller,&delta_time);
    if (bone_index == 100) {
      this_ptr_00 = (CEnemy *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              ((this_ptr->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
      if (this_ptr_00 != (CEnemy *)0x0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_50);
        SStack_50.damage_amount = 5.0;
        SStack_50.attacker = (CDemonActor *)this_ptr;
        SStack_50.wielder = (CDemonActor *)this_ptr;
        (*(((this_ptr_00->base).base.vtable._uc)->_uc).processDamage)
                  ((CCharacter *)this_ptr_00,&SStack_50);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40((CCharacter *)this_ptr,bone_index);
    }
  } while (0.0 < delta_time);
  return;
}
