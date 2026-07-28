// Name: core_hostage.cpp_FUN_004b8600
// Address: 004b8600
// Address Range: [[004b8600, 004b86ff]]
// Convention: unknown
// Signature: void core_hostage_cpp_FUN_004b8600(int param_1,int param_2)

#include "nocturne.h"

void core_hostage_cpp_FUN_004b8600(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x1f920) == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2434) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              ((CMotionController *)(param_1 + 0x150),6,1);
    (**(code **)(*(int *)(param_1 + 0x14c) + 0xa0))(param_1,0x32,0x41c80000);
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x1f8b4);
  }
  else if (0.0 < *(float *)(param_2 + 4)) {
    if (*(int *)(param_1 + 0x2590) == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                ((CMotionController *)(param_1 + 0x150),4,1);
      uVar3 = DAT_00763e44;
      *(uint *)(param_1 + 0x1f954) = 0x40400000;
      *(uint *)(param_1 + 0x1f950) = uVar3;
    }
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0x1f918));
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x1f850);
      *(uint *)(param_1 + 0x1f918) = uVar3;
      core_npc_cpp_FUN_004eeea0(param_1,param_2);
      return;
    }
  }
  core_npc_cpp_FUN_004eeea0(param_1,param_2);
  return;
}
