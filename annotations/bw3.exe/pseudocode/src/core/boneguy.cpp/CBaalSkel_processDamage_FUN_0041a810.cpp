// Name: core_boneguy.cpp_CBaalSkel_processDamage_FUN_0041a810
// Address: 0041a810
// Address Range: [[0041a810, 0041a890]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBaalSkel_processDamage_FUN_0041a810(CBaalSkel *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBaalSkel_processDamage_FUN_0041a810(CBaalSkel *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  int iVar2;
  
  sound_sndmain_cpp_killSfx_FUN_00556be0((this_ptr->base).sfx_handle);
  if (damage_info->damage_type != DAMAGE_TYPE_BODY_PART) {
    fVar1 = (this_ptr->base).base.base.hit_points - damage_info->damage_amount;
    (this_ptr->base).base.base.hit_points = fVar1;
    if (fVar1 <= 0.0) {
      core_enemy_cpp_FUN_00489c90(this_ptr);
      (this_ptr->base).base.base.hit_points = 1.0;
      core_boneguy_cpp_CBoneGuy_explode_FUN_00419550(&this_ptr->base);
      return;
    }
    iVar2 = core_enemy_cpp_FUN_0048a1b0(this_ptr,damage_info->damage_amount);
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.base.model.base,3,1);
      return;
    }
  }
  return;
}
