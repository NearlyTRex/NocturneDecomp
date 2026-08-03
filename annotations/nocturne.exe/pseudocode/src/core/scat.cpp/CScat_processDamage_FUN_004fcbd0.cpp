// Name: core_scat.cpp_CScat_processDamage_FUN_004fcbd0
// Address: 004fcbd0
// Address Range: [[004fcbd0, 004fcd1f]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_processDamage_FUN_004fcbd0(CScat *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_processDamage_FUN_004fcbd0(CScat *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  
  if (ABS((this_ptr->base).invincibility_timer) != 0.0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGame_PTR_005b9354->god_mode_enabled != 0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGame_PTR_005b9354->allow_damage_flag == 0) {
    damage_info->damage_amount = 0.0;
  }
  (this_ptr->base).invincibility_timer = 0x3F000000;
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    if (damage_info->damage_amount <= 0.0) {
      core_charactr_cpp_CCharacter_processDamage_FUN_00428510((CCharacter *)this_ptr,damage_info);
      return;
    }
    iVar3 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(this_ptr);
    if (iVar3 == 0) {
      iVar3 = 0xc;
    }
    else {
      iVar3 = 0xd;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr_00->motion_controller,iVar3,1);
    (*((this_ptr->base).base.base.vtable._ub)->playSound)
              ((CDemonActor *)this_ptr,"scat-hurt-?.wav");
    core_charactr_cpp_CCharacter_processDamage_FUN_00428510((CCharacter *)this_ptr,damage_info);
    return;
  }
  (this_ptr->base).base.hit_points = 0.0;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                     (&this_ptr_00->motion_controller);
  if (pSVar2->state_index != 5) {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr_00->motion_controller);
    if (pSVar2->state_index != 4) {
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (&this_ptr_00->motion_controller,4,1);
      core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670
                (g_CGore_PTR_005b96c4,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
    }
  }
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"scat-die-?.wav");
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510((CCharacter *)this_ptr,damage_info);
  return;
}
