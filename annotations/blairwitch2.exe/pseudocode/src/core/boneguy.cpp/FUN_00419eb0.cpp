// Name: core_boneguy.cpp_FUN_00419eb0
// Address: 00419eb0
// Address Range: [[00419eb0, 00419f25]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_00419eb0(CBoneGuy *param_1,int param_2)

#include "nocturne.h"

void core_boneguy_cpp_FUN_00419eb0(CBoneGuy *param_1,int param_2)

{
  float fVar1;
  
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10b08);
  fVar1 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
  *(float *)&param_1->field_0x25a8 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&param_1->field_0x25a8 = 0x3f800000;
    core_boneguy_cpp_CBoneGuy_explode_FUN_0041a0c0(param_1);
    core_enemy_cpp_FUN_00488890(param_1,param_2);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&param_1->field_0x2b4,3,1);
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
