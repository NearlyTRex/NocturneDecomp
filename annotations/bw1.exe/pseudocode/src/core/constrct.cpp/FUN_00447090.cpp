// Name: core_constrct.cpp_FUN_00447090
// Address: 00447090
// Address Range: [[00447090, 00447192]]
// Convention: unknown
// Signature: void core_constrct_cpp_FUN_00447090(int param_1,int param_2)

#include "nocturne.h"

void core_constrct_cpp_FUN_00447090(int param_1,int param_2)

{
  CMotionController *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  uint uVar4;
  int force_immediate;
  
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc31c));
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc314));
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc304));
  this_ptr = (CMotionController *)(param_1 + 0x158);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr);
  if (*(int *)(pSVar2 + 0x24) != 0xc) {
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2538) = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x2538) = 0x3f800000;
      uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"stick-leaps.wav");
      *(uint *)(param_1 + 0xc320) = uVar4;
      core_construc_cpp_FUN_004472a0(param_1);
    }
    else {
      force_immediate = 1;
      iVar3 = core_actor_cpp_FUN_0040cc60(0,2);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (this_ptr,iVar3 + 7,force_immediate);
      iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)(param_1 + 0xc318));
      if (iVar3 == 0) {
        uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"stick-hurt_growl.wav");
        *(uint *)(param_1 + 0xc318) = uVar4;
      }
    }
    *(uint *)(param_2 + 8) = 0;
    core_enemy_cpp_FUN_004a0f00(param_1,param_2);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr,0xe,1);
  return;
}
