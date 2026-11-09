// Name: core_dog.cpp_FUN_0045eb20
// Address: 0045eb20
// Address Range: [[0045eb20, 0045ebce]]
// Convention: unknown
// Signature: void core_dog_cpp_FUN_0045eb20(int param_1,int param_2)

#include "nocturne.h"

void core_dog_cpp_FUN_0045eb20(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar3 = core_motion_cpp_FUN_005035c0((CMotionController *)(param_1 + 0x2b4));
    if ((*(int *)(iVar3 + 0x24) == 7) || (*(int *)(iVar3 + 0x24) == 6)) goto LAB_0045eb55;
    iVar3 = 6;
  }
  else {
    iVar3 = 5;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)(param_1 + 0x2b4),iVar3,1);
LAB_0045eb55:
  iVar3 = core_sound_cpp_FUN_0055af70(0x0264B290,*(uint *)(param_1 + 0x10b00));
  if (iVar3 != 0) {
    core_enemy_cpp_FUN_00488890(param_1,param_2);
    return;
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"dog2.wav");
  *(uint *)(param_1 + 0x10b00) = uVar2;
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
