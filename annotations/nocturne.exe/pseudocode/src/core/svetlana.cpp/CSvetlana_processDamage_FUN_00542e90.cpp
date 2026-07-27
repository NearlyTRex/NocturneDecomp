// Name: core_svetlana.cpp_CSvetlana_processDamage_FUN_00542e90
// Address: 00542e90
// Address Range: [[00542e90, 0054301a]]
// Convention: unknown
// Signature: void core_svetlana_cpp_CSvetlana_processDamage_FUN_00542e90(int param_1,int param_2)

#include "nocturne.h"

void core_svetlana_cpp_CSvetlana_processDamage_FUN_00542e90(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(uint *)(param_1 + 0xbc8c) & 0x7fffffff) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01C775EC + 0x1d0) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01C775EC + 0x22c) == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  *(float *)(param_1 + 0xbc8c) = 3.0f;
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  iVar2 = param_1 + 0x150;
  *(float *)(param_1 + 0x2434) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar2);
    if (*(int *)(iVar3 + 0x24) != 9) {
      iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar2);
      if (*(int *)(iVar3 + 0x24) != 8) {
        *(uint *)(param_1 + 0x2590) = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar2,8,1);
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670(INT_005b96c4,param_1,0x32,0x42480000,0);
        sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0x950a4));
        uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"svet-die.wav");
        *(uint *)(param_1 + 0x950a4) = uVar4;
        core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(param_2 + 4)) {
    if (*(int *)(param_1 + 0x1fa3c) == 0) {
      uVar4 = 4;
    }
    else {
      uVar4 = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar2,uVar4,1);
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0x950a4));
    if (iVar2 == 0) {
      uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"svet-hurt?.wav");
      *(uint *)(param_1 + 0x950a4) = uVar4;
      core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
      return;
    }
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
  return;
}
