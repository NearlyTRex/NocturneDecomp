// Name: core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_004fca50
// Address: 004fca50
// Address Range: [[004fca50, 004fcadd]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_004fca50(CScat *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_004fca50(CScat *this_ptr,float delta_time)

{
  int bone_index;
  CCharacter *this_ptr_00;
  int in_stack_ffffffb0;
  
  do {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                           (&(this_ptr->base).base.model.motion_controller,&delta_time);
    if (bone_index == 100) {
      this_ptr_00 = (CCharacter *)
                    core_actor_cpp_castToClassHash_FUN_0040d890
                              ((this_ptr->base).base.grabbed_by,g_CEnemyActorType_01bcdebc.name_hash
                              );
      if (this_ptr_00 != (CCharacter *)0x0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xffffffb0);
        (*(((this_ptr_00->base).vtable._uc)->_uc).getGrabbed)
                  (this_ptr_00,(CDemonActor *)&stack0xffffffb0,in_stack_ffffffb0);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0((CCharacter *)this_ptr,bone_index);
    }
  } while (0.0 < delta_time);
  return;
}
