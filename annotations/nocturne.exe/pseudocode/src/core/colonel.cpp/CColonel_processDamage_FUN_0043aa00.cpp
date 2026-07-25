// Name: core_colonel.cpp_CColonel_processDamage_FUN_0043aa00
// Address: 0043aa00
// Address Range: [[0043aa00, 0043ab18]]
// Convention: unknown
// Signature: void core_colonel_cpp_CColonel_processDamage_FUN_0043aa00(int param_1,int param_2)

#include "nocturne.h"

void core_colonel_cpp_CColonel_processDamage_FUN_0043aa00(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
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
  if (fVar2 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar1);
    if (*(int *)(iVar3 + 0x24) != 6) {
      iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar1);
      if (*(int *)(iVar3 + 0x24) != 5) {
        *(uint *)(param_1 + 0x2590) = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar1,5,1);
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670(INT_005b96c4,param_1,0x32,0x42480000,0);
        core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(param_2 + 4)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar1,4,1);
    core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
    return;
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(param_1,param_2);
  return;
}
