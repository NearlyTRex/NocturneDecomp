// Name: core_imp.cpp_CImp_processDamage_FUN_004bccc0
// Address: 004bccc0
// Address Range: [[004bccc0, 004bcdf4]]
// Convention: unknown
// Signature: void core_imp_cpp_CImp_processDamage_FUN_004bccc0(int param_1,int param_2)

#include "nocturne.h"

void core_imp_cpp_CImp_processDamage_FUN_004bccc0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte local_24 [20];
  
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd24));
  if (*(int *)(param_2 + 0x28) == 8) {
    iVar4 = 0;
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_24,param_2 + 0x1c);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,local_24,0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  core_imp_cpp_CImp_processDismemberment_FUN_004bca20(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  iVar4 = param_1 + 0x150;
  *(float *)(param_1 + 0x2434) = fVar1;
  if (0.0 < fVar1) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,5,1);
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd28));
    if (iVar4 != 0) goto LAB_004bcdbc;
    pcVar5 = "imp-hurt?.wav";
  }
  else {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar4);
    if ((*(int *)(iVar2 + 0x24) == 6) || (*(int *)(iVar2 + 0x24) == 7)) goto LAB_004bcdbc;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,6,1);
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd28));
    pcVar5 = "imp-die?.wav";
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,pcVar5);
  *(uint *)(param_1 + 0xbd28) = uVar3;
LAB_004bcdbc:
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
