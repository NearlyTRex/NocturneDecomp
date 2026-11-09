// Name: core_boneguy.cpp_FUN_0041a810
// Address: 0041a810
// Address Range: [[0041a810, 0041a890]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_0041a810(CBoneGuy *param_1,int param_2)

#include "nocturne.h"

void core_boneguy_cpp_FUN_0041a810(CBoneGuy *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xd078);
  if (*(int *)(param_2 + 0x30) != 0x70) {
    fVar1 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
    *(float *)&param_1->field_0x2538 = fVar1;
    if (fVar1 <= 0.0) {
      core_enemy_cpp_FUN_00489c90(param_1);
      *(uint *)&param_1->field_0x2538 = 0x3f800000;
      core_boneguy_cpp_FUN_00419550(param_1);
      return;
    }
    iVar2 = unkafter_enemy_cpp_FUN_0048a1b0(param_1,*(uint *)(param_2 + 4));
    if (iVar2 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,3,1);
      return;
    }
  }
  return;
}
