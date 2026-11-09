// Name: core_zombie.cpp_FUN_005be750
// Address: 005be750
// Address Range: [[005be750, 005be966]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_005be750(CZombie *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_zombie_cpp_FUN_005be750(CZombie *param_1,SDamageInfo *param_2)

{
  SMotion *pSVar1;
  CMotionList *this_ptr;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  core_zombie_cpp_FUN_005be480(param_1,param_2);
  (**(code **)(*(int *)&param_1->field_0x154 + 0xf8))(param_1);
  *(float *)&param_1->field_0x2538 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
  if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc33c * 4) == 0) {
    *(uint *)&param_1->field_0x2538 = 0;
  }
  *(uint *)&param_1->field_0xc1e4 = 0x3f99999a;
  if (0.0 < *(float *)&param_1->field_0x2538) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,4,1);
    if (*(float *)&param_1->field_0xc340 <= 0.0) {
      *(uint *)&param_1->field_0xc340 = 0x40000000;
      iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0xc348);
      if (iVar3 == 0) {
        if (*(int *)&param_1->field_0xc2f4 != 0) {
          uVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"f-zombie-hit?.wav");
          *(uint *)&param_1->field_0xc348 = uVar2;
          core_enemy_cpp_FUN_004a0f00(param_1,param_2);
          return;
        }
        uVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"zom-s0?.wav");
        *(uint *)&param_1->field_0xc348 = uVar2;
        core_enemy_cpp_FUN_004a0f00(param_1,param_2);
        return;
      }
    }
  }
  else {
    *(uint *)&param_1->field_0x2538 = 0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    if ((*(int *)(pSVar1 + 0x24) != 8) && (*(int *)(pSVar1 + 0x24) != 7)) {
      core_zombie_cpp_FUN_005bdfa0(param_1);
      iVar3 = 6;
      if ((*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc33c * 4) == 0) &&
         ((*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc32c * 4) != 0 ||
          (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc324 * 4) != 0)))) {
        iVar5 = 0;
        pcVar4 = "@lookForHead" + 1;
        this_ptr = core_motion_cpp_FUN_00524a00((CMotionController *)&param_1->field_0x158);
        iVar5 = core_motion_cpp_FUN_005240c0(this_ptr,pcVar4,iVar5);
        if (-1 < iVar5) {
          iVar3 = 9;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,iVar3,1);
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc348);
      if (*(int *)&param_1->field_0xc2f4 == 0) {
        pcVar4 = "zom-d0?.wav";
      }
      else {
        pcVar4 = "f-zombie-die?.wav";
      }
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,pcVar4);
      (**(code **)(*(int *)&param_1->field_0x154 + 0xa8))(param_1,0x32,0x41c80000);
    }
  }
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
