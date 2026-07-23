// Name: core_larva.cpp_CLarva_processDamage_FUN_004c5310
// Address: 004c5310
// Address Range: [[004c5310, 004c54ee]]
// Convention: unknown
// Signature: void core_larva_cpp_CLarva_processDamage_FUN_004c5310(int param_1,int param_2)

#include "nocturne.h"

void core_larva_cpp_CLarva_processDamage_FUN_004c5310(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  byte local_e8 [100];
  byte local_84 [100];
  byte auStack_20 [16];
  
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2434) = fVar1;
  if (0.0 < fVar1) {
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd2c));
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd28));
    if (iVar2 == 0) {
      if ((float)0.29999999999999999 <= *(float *)(param_1 + 0x2614)) {
        if (0.69999999999999996 <= (double)*(float *)(param_1 + 0x2614)) {
          pcVar3 = "big";
        }
        else {
          pcVar3 = "med";
        }
      }
      else {
        pcVar3 = "sml";
      }
      _sprintf(local_84,"l%s-shot?.wav",pcVar3);
      uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,local_84);
      *(uint *)(param_1 + 0xbd28) = uVar4;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,3,1);
  }
  else {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    if ((*(int *)(iVar2 + 0x24) != 5) && (*(int *)(iVar2 + 0x24) != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,4,1);
    }
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd28));
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd2c));
    if ((float)0.29999999999999999 <= *(float *)(param_1 + 0x2614)) {
      if (0.69999999999999996 <= (double)*(float *)(param_1 + 0x2614)) {
        pcVar3 = "big";
      }
      else {
        pcVar3 = "med";
      }
    }
    else {
      pcVar3 = "sml";
    }
    _sprintf(local_e8,"l%s-die?.wav",pcVar3);
    uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,local_e8);
    *(uint *)(param_1 + 0xbd28) = uVar4;
  }
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,auStack_20,param_2 + 0x1c);
  core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
            (0x01C78C7C,auStack_20,0,10,*(uint *)(param_1 + 0x2608));
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
