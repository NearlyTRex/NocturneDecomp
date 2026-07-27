// Name: core_mobster.cpp_CMobster_processDamage_FUN_004dc690
// Address: 004dc690
// Address Range: [[004dc690, 004dc815]]
// Convention: unknown
// Signature: void core_mobster_cpp_CMobster_processDamage_FUN_004dc690(int param_1,int param_2)

#include "nocturne.h"

void core_mobster_cpp_CMobster_processDamage_FUN_004dc690(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbdc4));
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbdbc));
  core_mobster_cpp_CMobster_processDismemberment_FUN_004dc2d0(param_1,param_2);
  if ((*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdcc) * 4) == 0) &&
     (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdd4) * 4) == 0)) {
    *(uint *)(param_2 + 4) = 0x461c3f9a;
  }
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  iVar3 = param_1 + 0x150;
  *(float *)(param_1 + 0x2434) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar3);
    if ((*(int *)(iVar2 + 0x24) != 5) && (*(int *)(iVar2 + 0x24) != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,4,1);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,1,0);
      if (*(int *)(param_1 + 0xbdc0) == 0) {
        sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbdb8));
        uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"mobster-die-?.wav");
        *(uint *)(param_1 + 0xbdc0) = 1;
        *(uint *)(param_1 + 0xbdb8) = uVar4;
        core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
        return;
      }
    }
    goto LAB_004dc755;
  }
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                    (*(uint *)(param_2 + 0x34),g_CTommyGunActorType_02dd0fd0.name_hash);
  if (iVar2 == 0) {
LAB_004dc731:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,3,1);
  }
  else {
    iVar2 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
    if (iVar2 != 0) goto LAB_004dc731;
  }
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbdb8));
  if (iVar3 == 0) {
    uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"mobster-hit-?.wav");
    *(uint *)(param_1 + 0xbdb8) = uVar4;
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
    return;
  }
LAB_004dc755:
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
