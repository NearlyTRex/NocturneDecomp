// Name: core_hostage.cpp_FUN_004d30d0
// Address: 004d30d0
// Address Range: [[004d30d0, 004d31cf]]
// Convention: unknown
// Signature: void core_hostage_cpp_FUN_004d30d0(CNPC *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_hostage_cpp_FUN_004d30d0(CNPC *param_1,SDamageInfo *param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)&param_1[1].field_0x3b0 == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  fVar1 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
  *(float *)&param_1->field_0x25a8 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&param_1->field_0x25a8 = 0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,6,1);
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0xb0))(param_1,0x32,0x41c80000);
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,&param_1[1].field_0x344);
  }
  else if (0.0 < *(float *)(param_2 + 4)) {
    if (*(int *)&param_1->field_0x276c == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,4,1);
      uVar3 = DAT_007bbff4;
      *(uint *)&param_1[1].field_0x3e4 = 0x40400000;
      *(uint *)&param_1[1].field_0x3e0 = uVar3;
    }
    iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x3a8);
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,&param_1[1].field_0x2e0);
      *(uint *)&param_1[1].field_0x3a8 = uVar3;
      core_npc_cpp_FUN_00510b90(param_1,param_2);
      return;
    }
  }
  core_npc_cpp_FUN_00510b90(param_1,param_2);
  return;
}
