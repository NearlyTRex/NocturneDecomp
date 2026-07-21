// Name: core_boneguy.cpp_CBoneGuy_processDamage_FUN_00419f40
// Address: 00419f40
// Address Range: [[00419f40, 00419fb5]]
// Convention: unknown
// Signature: void core_boneguy_cpp_CBoneGuy_processDamage_FUN_00419f40(int param_1,int param_2)

#include "nocturne.h"

void core_boneguy_cpp_CBoneGuy_processDamage_FUN_00419f40(int param_1,int param_2)

{
  float fVar1;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd34));
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2434) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0x3f800000;
    core_boneguy_cpp_CBoneGuy_explode_FUN_0041a0f0(param_1);
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,3,1);
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
