// Name: core_bride.cpp_CBride_processDamage_FUN_00420c40
// Address: 00420c40
// Address Range: [[00420c40, 00420e1a]]
// Convention: unknown
// Signature: void core_bride_cpp_CBride_processDamage_FUN_00420c40(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bride_cpp_CBride_processDamage_FUN_00420c40(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  byte local_3c [12];
  byte local_30 [12];
  byte local_24 [20];
  
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd50));
  if (*(int *)(param_2 + 0x28) == 7) {
    iVar3 = 0;
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_00579bf5;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_3c,param_2 + 0x1c);
    do {
      iVar3 = iVar3 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,local_3c,0,0x4000,0x4000,0,0xffff);
    } while (iVar3 < 5);
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    uVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                      (param_1 + 0x150,local_24,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_30,uVar1);
    FUN_00427730(param_1,local_30,0,0,0x41200000,0);
  }
  core_bride_cpp_CBride_processDismemberment_FUN_00420a10(param_1,param_2);
  *(float *)(param_1 + 0x2434) = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd44) * 4) == 0) {
    *(uint *)(param_1 + 0x2434) = 0;
  }
  iVar3 = param_1 + 0x150;
  if (0.0 < *(float *)(param_1 + 0x2434)) {
    iVar2 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000,1);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,(iVar2 == 0) + '\a');
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd4c));
    if (iVar3 != 0) goto LAB_00420d65;
    pcVar4 = "ub-hurt?.wav";
  }
  else {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar3);
    if ((*(int *)(iVar2 + 0x24) == 0xe) || (*(int *)(iVar2 + 0x24) == 0xd)) goto LAB_00420d65;
    iVar2 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000,1);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,(iVar2 == 0) + '\v');
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd4c));
    pcVar4 = "ub-die?.wav";
  }
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,pcVar4);
  *(uint *)(param_1 + 0xbd4c) = uVar1;
LAB_00420d65:
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
