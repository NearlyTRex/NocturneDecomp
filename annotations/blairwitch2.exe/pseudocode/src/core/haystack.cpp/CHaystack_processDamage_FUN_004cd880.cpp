// Name: core_haystack.cpp_CHaystack_processDamage_FUN_004cd880
// Address: 004cd880
// Address Range: [[004cd880, 004cd99e]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_processDamage_FUN_004cd880(CHaystack *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_processDamage_FUN_004cd880(CHaystack *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  
  if (ABS((this_ptr->base).invincibility_timer) != 0.0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGamePtr->god_mode_enabled != 0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    damage_info->damage_amount = 0.0;
  }
  (this_ptr->base).invincibility_timer = 0x3F000000;
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 0.0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
    if (*(int *)(iVar2 + 0x24) != 9) {
      iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
      if (*(int *)(iVar2 + 0x24) != 8) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,8,1);
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004c9cc0
                  (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
        core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
        return;
      }
    }
  }
  else if (0.0 < damage_info->damage_amount) {
    if (this_ptr->guns_drawn == 0) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,iVar2,1);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
  return;
}
