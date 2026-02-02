// Name: core_boneguy.cpp_CBoneGuy_processDamage_FUN_0041d4d0
// Address: 0041d4d0
// Address Range: [[0041d4d0, 0041d545]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_processDamage_FUN_0041d4d0(CBoneGuy *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_boneguy_cpp_CBoneGuy_processDamage_FUN_0041d4d0(CBoneGuy *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk1 + 0x18));
  fVar1 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  (this_ptr->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base).base.hit_points = 1.0;
    core_boneguy_cpp_CBoneGuy_FUN_0041d680(this_ptr);
    core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,3,1);
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
