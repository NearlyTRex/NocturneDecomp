// Name: FUN_004ab450
// Address: 004ab450
// Address Range: [[004ab450, 004ab811]]
// Convention: unknown
// Signature: void FUN_004ab450(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ab450(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  uint uVar5;
  uint uVar6;
  byte local_78 [100];
  float local_14;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd74));
  if ((*(int *)(param_1 + 0xbd84) != 0) &&
     (iVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150),
     *(int *)(iVar1 + 0x24) == 0)) {
    *(uint *)(param_1 + 0xbd88) = 0x41f00000;
    *(uint *)(param_1 + 0xbd84) = 0;
    *(uint *)(param_1 + 0xbd8c) = 1;
    *(uint *)(param_1 + 0xbd90) = 0x3f800000;
    if ((uint *)(param_1 + 0xbd94) != (uint *)(param_1 + 0x20)) {
      *(uint *)(param_1 + 0xbd94) = *(uint *)(param_1 + 0x20);
      *(uint *)(param_1 + 0xbd98) = *(uint *)(param_1 + 0x24);
      *(uint *)(param_1 + 0xbd9c) = *(uint *)(param_1 + 0x28);
    }
    engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"@go berzerk\n" + 1);
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    *(uint *)(param_1 + 0xbd80) = 0x40800000;
  }
  core_ghoul_cpp_CGhoul_processDismemberment_FUN_004ab190(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0xbca4);
  if ((iVar1 != 0) &&
     (iVar1 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0xec))(iVar1), iVar1 == param_1)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xe8))(*(int *)(param_1 + 0xbca4));
  }
  *(float *)(param_1 + 0x2434) = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd70) * 4) == 0) {
    *(uint *)(param_1 + 0x2434) = 0;
  }
  if (*(float *)(param_1 + 0x2434) <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    if (*(int *)(param_1 + 0xbd14) != 0) {
      FUN_00427a60(param_1);
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
      return;
    }
    iVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    if ((*(int *)(iVar1 + 0x24) != 10) && (*(int *)(iVar1 + 0x24) != 9)) {
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd70) * 4) == 0) {
        *(uint *)(param_1 + 0xbd40) = 0;
      }
      else {
        *(int *)(param_1 + 0xbd40) = *(int *)(param_1 + 0xbd40) + -1;
      }
      uVar3 = 6;
      if (*(int *)(param_1 + 0x2dec) < 1) {
        iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
        if (iVar1 != 0) {
          uVar3 = 7;
        }
      }
      else {
        iVar2 = 0;
        iVar1 = param_1;
        if (0 < *(int *)(param_1 + 0x2dec)) {
          do {
            if (*(int *)(iVar1 + 0x2df0) == *(int *)(param_1 + 0xbd6c)) {
              uVar3 = 8;
              break;
            }
            iVar2 = iVar2 + 1;
            iVar1 = iVar1 + 0x38;
          } while (iVar2 < *(int *)(param_1 + 0x2dec));
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar3,1);
      iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd7c));
      if (iVar1 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                          (param_1,"ghoul-die-!-?.wav @1.6");
        *(uint *)(param_1 + 0xbd7c) = uVar3;
      }
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40800000,0x41200000);
      fVar4 = (float10)_DAT_00584e8d;
      *(uint *)(param_1 + 0xbd30) = 0xa0000;
      uVar6 = 0x41c80000;
      iVar1 = *(int *)(param_1 + 0x14c);
      uVar5 = 0x32;
      uVar3 = 0x4ab609;
      fVar4 = (float10)round((float10)local_14 * fVar4);
      *(int *)(param_1 + 0xbd2c) = (int)ROUND(fVar4);
      (**(code **)(iVar1 + 0xa0))(param_1,uVar3,uVar5,uVar6);
    }
  }
  else {
    iVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    iVar1 = *(int *)(iVar1 + 0x24);
    if (((iVar1 == 0) || (iVar1 == 0xb || (iVar1 == 0xc || iVar1 == 2))) ||
       (iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0x3e800000), iVar1 != 0)) {
      iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000,1);
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                (param_1 + 0x150,(iVar1 == 0) + '\x03');
    }
    else {
      uVar3 = core_actor_cpp_getRandomInt_FUN_0040de00(1,2);
      _sprintf(local_78,"guul flinch%d",uVar3);
      uVar3 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                        (param_1 + 0x150,local_78,1);
      uVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(uVar3);
      *(uint *)(param_1 + 0xbd38) = 0x3f800000;
      *(uint *)(param_1 + 0xbd3c) = uVar3;
    }
    iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd78));
    if (iVar1 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"ghoul-mad-!-?.wav");
      *(uint *)(param_1 + 0xbd78) = uVar3;
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
