// Name: core_boneguy.cpp_CBoneGuy_processDamage_FUN_00419eb0
// Address: 00419eb0
// Address Range: [[00419eb0, 00419f25]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_processDamage_FUN_00419eb0(CBoneGuy *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_processDamage_FUN_00419eb0(CBoneGuy *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
  fVar1 = (this_ptr->base).base.hit_points - *(float *)(damage_info + 4);
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 1.0;
    core_boneguy_cpp_CBoneGuy_explode_FUN_0041a0c0(this_ptr);
    core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&(this_ptr->base).base.model,3,1);
  core_enemy_cpp_CEnemy_processDamage_FUN_00488890(&this_ptr->base,damage_info);
  return;
}
