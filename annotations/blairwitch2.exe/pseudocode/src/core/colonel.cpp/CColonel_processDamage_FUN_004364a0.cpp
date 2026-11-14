// Name: core_colonel.cpp_CColonel_processDamage_FUN_004364a0
// Address: 004364a0
// Address Range: [[004364a0, 004365b8]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_CColonel_processDamage_FUN_004364a0(CColonel *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_colonel_cpp_CColonel_processDamage_FUN_004364a0(CColonel *this_ptr,SDamageInfo *damage_info)

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
    if (*(int *)(iVar2 + 0x24) != 6) {
      iVar2 = core_motion_cpp_FUN_005035c0(this_ptr_00);
      if (*(int *)(iVar2 + 0x24) != 5) {
        (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,5,1);
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004c9cc0
                  (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
        core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
        return;
      }
    }
  }
  else if (0.0 < damage_info->damage_amount) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,4,1);
    core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
    return;
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
  return;
}
