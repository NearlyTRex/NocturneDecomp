// Name: core_boneguy.cpp_CBoneGuy_processDamage_FUN_00419f40
// Address: 00419f40
// Address Range: [[00419f40, 00419fb5]]
// Convention: unknown
// Signature: void core_boneguy_cpp_CBoneGuy_processDamage_FUN_00419f40(CBoneGuy *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_boneguy_cpp_CBoneGuy_processDamage_FUN_00419f40(CBoneGuy *param_1,SDamageInfo *param_2)

{
  float fVar1;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(param_1->sfx_handle);
  fVar1 = (param_1->base).base.hit_points - param_2->damage_amount;
  (param_1->base).base.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (param_1->base).base.hit_points = 1.0;
    core_boneguy_cpp_CBoneGuy_explode_FUN_0041a0f0(param_1);
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&(param_1->base).base.model.motion_controller,3,1);
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(&param_1->base,param_2);
  return;
}
