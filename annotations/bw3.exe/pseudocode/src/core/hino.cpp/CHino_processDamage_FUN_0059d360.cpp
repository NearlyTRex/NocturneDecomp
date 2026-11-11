// Name: core_hino.cpp_CHino_processDamage_FUN_0059d360
// Address: 0059d360
// Address Range: [[0059d360, 0059d404]]
// Convention: __cdecl
// Signature: void __cdecl core_hino_cpp_CHino_processDamage_FUN_0059d360(CHino *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_hino_cpp_CHino_processDamage_FUN_0059d360(CHino *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  
  if (damage_info->damage_type == DAMAGE_TYPE_ATTACK_ELECTROCUTE) {
    return;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    iVar3 = unkafter_enemy_cpp_FUN_0048a1b0(this_ptr,damage_info->damage_amount);
    if (iVar3 == 0) goto LAB_0059d3d8;
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
    iVar3 = 6;
  }
  else {
    (this_ptr->base).base.health_bar_mode = HEALTH_BAR_NONE;
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
    if ((pSVar2->state_index == 7) || (pSVar2->state_index == 8)) goto LAB_0059d3d8;
    iVar3 = 7;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,iVar3,1);
LAB_0059d3d8:
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
  return;
}
