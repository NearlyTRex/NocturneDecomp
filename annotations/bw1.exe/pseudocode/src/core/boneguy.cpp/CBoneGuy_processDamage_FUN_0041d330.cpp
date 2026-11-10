// Name: core_boneguy.cpp_CBoneGuy_processDamage_FUN_0041d330
// Address: 0041d330
// Address Range: [[0041d330, 0041d3a5]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_processDamage_FUN_0041d330(CBoneGuy *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_processDamage_FUN_0041d330(CBoneGuy *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
  fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 1.0;
    core_boneguy_cpp_CBoneGuy_explode_FUN_0041d540(this_ptr);
    core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            (&(this_ptr->base).base.model.base,3,1);
  core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(&this_ptr->base,damage_info);
  return;
}
