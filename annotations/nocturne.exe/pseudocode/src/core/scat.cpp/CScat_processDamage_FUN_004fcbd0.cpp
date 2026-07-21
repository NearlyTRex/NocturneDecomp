// Name: core_scat.cpp_CScat_processDamage_FUN_004fcbd0
// Address: 004fcbd0
// Address Range: [[004fcbd0, 004fcd1f]]
// Convention: unknown
// Signature: void core_scat_cpp_CScat_processDamage_FUN_004fcbd0(int param_1,int param_2)

#include "nocturne.h"

void core_scat_cpp_CScat_processDamage_FUN_004fcbd0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
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
  *(uint *)(param_1 + 0xbc8c) = 0x3F000000;
  fVar2 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  iVar1 = param_1 + 0x150;
  *(float *)(param_1 + 0x2434) = fVar2;
  if (0.0 < fVar2) {
    if (*(float *)(param_2 + 4) <= 0.0) {
      core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
      return;
    }
    iVar3 = core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(param_1);
    if (iVar3 == 0) {
      uVar4 = 0xc;
    }
    else {
      uVar4 = 0xd;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar1,uVar4,1);
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"scat-hurt-?.wav");
    core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
    return;
  }
  *(uint *)(param_1 + 0x2434) = 0;
  iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar1);
  if (*(int *)(iVar3 + 0x24) != 5) {
    iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar1);
    if (*(int *)(iVar3 + 0x24) != 4) {
      *(uint *)(param_1 + 0x2590) = 0;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar1,4,1);
      core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670(0x01C78C7C,param_1,0x32,0x42480000,0);
    }
  }
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"?scat-die-?.wav" + 1);
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
  return;
}
