// Name: core_hostage.cpp_FUN_004ef300
// Address: 004ef300
// Address Range: [[004ef300, 004ef3ff]]
// Convention: unknown
// Signature: void core_hostage_cpp_FUN_004ef300(CNPC *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_hostage_cpp_FUN_004ef300(CNPC *param_1,SDamageInfo *param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)&param_1[1].field_0x3b0 == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  fVar1 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
  *(float *)&param_1->field_0x2538 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&param_1->field_0x2538 = 0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,6,1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0xa8))(param_1,0x32,0x41c80000);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,&param_1[1].field_0x344);
  }
  else if (0.0 < *(float *)(param_2 + 4)) {
    if (*(int *)&param_1->field_0x26fc == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,4,1);
      uVar3 = DAT_007c2ff4;
      *(uint *)&param_1[1].field_0x3e4 = 0x40400000;
      *(uint *)&param_1[1].field_0x3e0 = uVar3;
    }
    iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x3a8);
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,&param_1[1].field_0x2e0);
      *(uint *)&param_1[1].field_0x3a8 = uVar3;
      core_npc_cpp_FUN_00531da0(param_1,param_2);
      return;
    }
  }
  core_npc_cpp_FUN_00531da0(param_1,param_2);
  return;
}
