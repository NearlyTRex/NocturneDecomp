// Name: core_boneguy.cpp_FUN_0041d330
// Address: 0041d330
// Address Range: [[0041d330, 0041d3a5]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_0041d330(CBoneGuy *param_1,int param_2)

#include "nocturne.h"

void core_boneguy_cpp_FUN_0041d330(CBoneGuy *param_1,int param_2)

{
  float fVar1;
  
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc278);
  fVar1 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
  *(float *)&param_1->field_0x2538 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&param_1->field_0x2538 = 0x3f800000;
    core_boneguy_cpp_FUN_0041d540(param_1);
    core_enemy_cpp_FUN_004a0f00(param_1,param_2);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)&param_1->field_0x158,3,1);
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
