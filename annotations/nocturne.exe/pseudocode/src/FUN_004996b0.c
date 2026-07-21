// Name: FUN_004996b0
// Address: 004996b0
// Address Range: [[004996b0, 004998b0]]
// Convention: unknown
// Signature: void FUN_004996b0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004996b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
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
  fVar3 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  iVar2 = param_1 + 0x150;
  *(float *)(param_1 + 0x2434) = fVar3;
  if (0.0 < fVar3) {
    if (0.0 < *(float *)(param_2 + 4)) {
      if (*(int *)(param_1 + 0x1fa14) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar2,8,1);
      }
      if (*(int *)(0x01C775EC + 0xc0) != 2) {
        iVar2 = *(int *)(param_1 + 0x14c);
        uVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3e800000,0x3ecccccd);
        (**(code **)(iVar2 + 0x2c))(param_1,"gb-hit[1,6].wav",uVar4);
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar2);
    if (*(int *)(iVar1 + 0x24) != 0xc) {
      iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar2);
      if (*(int *)(iVar2 + 0x24) != 0xb) {
        *(uint *)(param_1 + 0x2590) = 0;
        fVar3 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x42c80000,1);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (param_1 + 0x150,(fVar3 <= _DAT_00582282) + '\t');
        if (*(int *)(0x01C775EC + 0xc0) != 2) {
          iVar2 = *(int *)(param_1 + 0x14c);
          uVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3e800000,0x3ecccccd);
          (**(code **)(iVar2 + 0x2c))(param_1,"gb-die[1,6].wav",uVar4);
        }
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670(0x01C78C7C,param_1,0x32,0x42480000,0);
      }
    }
  }
  if (*(float *)(param_2 + 4) <= 0.0) {
    core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
    return;
  }
  FUN_004a3a90(0x01C775EC);
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
  return;
}
