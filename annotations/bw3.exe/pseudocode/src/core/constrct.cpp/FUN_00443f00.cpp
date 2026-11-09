// Name: core_constrct.cpp_FUN_00443f00
// Address: 00443f00
// Address Range: [[00443f00, 0044400c]]
// Convention: unknown
// Signature: void core_constrct_cpp_FUN_00443f00(int param_1,int param_2)

#include "nocturne.h"

void core_constrct_cpp_FUN_00443f00(int param_1,int param_2)

{
  CMotionController *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  uint uVar4;
  int force_immediate;
  
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(param_1 + 0xd108));
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(param_1 + 0xd100));
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(param_1 + 0xd0f0));
  this_ptr = (CMotionController *)(param_1 + 0x158);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
  if (*(int *)(pSVar2 + 0x24) != 0xc) {
    if (*(int *)(param_1 + 0xd844) != 1) {
      fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
      *(float *)(param_1 + 0x2538) = fVar1;
      if (fVar1 <= 0.0) {
        *(uint *)(param_1 + 0x2538) = 0x3f800000;
        uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"stick-leaps.wav");
        *(uint *)(param_1 + 0xd10c) = uVar4;
        core_construc_cpp_FUN_00444110(param_1);
      }
      else {
        force_immediate = 1;
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (this_ptr,iVar3 + 7,force_immediate);
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)(param_1 + 0xd104));
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                            (param_1,"stick-hurt_growl.wav");
          *(uint *)(param_1 + 0xd104) = uVar4;
        }
      }
      *(uint *)(param_2 + 8) = 0;
      core_enemy_cpp_FUN_00489b80(param_1,param_2);
    }
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,0xe,1);
  return;
}
