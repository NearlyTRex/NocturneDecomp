// Name: core_basicene.cpp_CBasicEnemy_advanceMotion_FUN_0059e7d0
// Address: 0059e7d0
// Address Range: [[0059e7d0, 0059e87a]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_advanceMotion_FUN_0059e7d0(CBasicEnemy *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_advanceMotion_FUN_0059e7d0(CBasicEnemy *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  int bone_index;
  float afStack_18 [2];
  
  (this_ptr->base).base.model.accumulated_root_motion.z = 0.0;
  (this_ptr->base).base.model.accumulated_root_motion.y =
       (this_ptr->base).base.model.accumulated_root_motion.z;
  (this_ptr->base).base.model.accumulated_root_motion.x =
       (this_ptr->base).base.model.accumulated_root_motion.y;
  afStack_18[0] = delta_time * (this_ptr->base).speed;
  while (0.0 < afStack_18[0]) {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_005030c0
                           (&(this_ptr->base).base.model.base,afStack_18);
    if (bone_index < 100) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)this_ptr,bone_index);
    }
    if (100 < bone_index) {
      (*(((this_ptr->base).base.base.vtable._uh)->_uh).canDoHeroAction)
                ((CHero *)this_ptr,bone_index);
    }
  }
  fVar1 = (this_ptr->base).speed;
  fVar2 = this_ptr->anim_speed_scale;
  (this_ptr->base).base.walk_step_speed = (this_ptr->base).base.model.accumulated_root_motion.z;
  core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * fVar1 * fVar2);
  return;
}
