// Name: core_boneguy.cpp_CBoneGuy_processDamage_FUN_004192d0
// Address: 004192d0
// Address Range: [[004192d0, 004193b7]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_processDamage_FUN_004192d0(CBoneGuy *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_processDamage_FUN_004192d0(CBoneGuy *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
  if (damage_info->damage_type == DAMAGE_TYPE_BODY_PART) {
    return;
  }
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  (this_ptr->base).base.hit_points = fVar1;
  if (0.0 < fVar1) {
    iVar3 = core_enemy_cpp_FUN_0048a1b0(this_ptr,damage_info->damage_amount);
    if (iVar3 == 0) goto LAB_0041934a;
    iVar3 = 3;
  }
  else {
    if ((this_ptr->explode_count < 1) &&
       ((ABS((this_ptr->base).base.bind_time) == 0.0 || ((this_ptr->base).base.bind_type != 0)))) {
      (this_ptr->base).base.hit_points = 1.0;
      core_boneguy_cpp_CBoneGuy_explode_FUN_00419550(this_ptr);
      this_ptr->explode_count = this_ptr->explode_count + 1;
      core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
      return;
    }
    (this_ptr->base).base.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       (&(this_ptr->base).base.model.base);
    if ((pSVar2->state_index == 5) || (pSVar2->state_index == 4)) goto LAB_0041934a;
    iVar3 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            (&(this_ptr->base).base.model.base,iVar3,1);
LAB_0041934a:
  core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(&this_ptr->base,damage_info);
  return;
}
