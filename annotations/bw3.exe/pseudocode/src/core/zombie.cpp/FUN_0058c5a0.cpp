// Name: core_zombie.cpp_FUN_0058c5a0
// Address: 0058c5a0
// Address Range: [[0058c5a0, 0058c7c3]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_0058c5a0(CZombie *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_zombie_cpp_FUN_0058c5a0(CZombie *param_1,SDamageInfo *param_2)

{
  int iVar1;
  SMotion *pSVar2;
  CMotionList *this_ptr;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  
  core_zombie_cpp_FUN_0058c330(param_1,param_2);
  (**(code **)(*(int *)&param_1->field_0x154 + 0xf8))(param_1);
  *(float *)&param_1->field_0x2538 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
  if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd12c * 4) == 0) {
    *(uint *)&param_1->field_0x2538 = 0;
  }
  *(uint *)&param_1->field_0xcde0 = 0x3f99999a;
  if (*(float *)&param_1->field_0x2538 <= 0.0) {
    *(uint *)&param_1->field_0x2538 = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)&param_1->field_0x158);
    iVar1 = *(int *)(pSVar2 + 0x24);
    if (((iVar1 != 9) && (iVar1 != 8)) && (iVar1 != 0x15)) {
      core_zombie_cpp_FUN_0058be30(param_1);
      iVar1 = 7;
      if ((*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd12c * 4) == 0) &&
         ((*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd11c * 4) != 0 ||
          (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd114 * 4) != 0)))) {
        iVar5 = 0;
        pcVar4 = "@lookForHead" + 1;
        this_ptr = core_motion_cpp_FUN_004fc310((CMotionController *)&param_1->field_0x158);
        iVar5 = core_motion_cpp_FUN_004fb9c0(this_ptr,pcVar4,iVar5);
        if (-1 < iVar5) {
          iVar1 = 10;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,iVar1,1);
      sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xd138);
      if (*(int *)&param_1->field_0xd0e0 == 0) {
        pcVar4 = "zom-d0?.wav";
      }
      else {
        pcVar4 = "f-zombie-die?.wav";
      }
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,pcVar4);
      (**(code **)(*(int *)&param_1->field_0x154 + 0xa8))(param_1,0x32,0x41c80000);
      core_enemy_cpp_FUN_00489b80(param_1,param_2);
      return;
    }
  }
  else {
    iVar1 = unkafter_enemy_cpp_FUN_0048a1b0(param_1,*(uint *)(param_2 + 4));
    if (iVar1 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,6,1);
    }
    if (*(float *)&param_1->field_0xd130 <= 0.0) {
      *(uint *)&param_1->field_0xd130 = 0x40000000;
      iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0xd138);
      if (iVar1 == 0) {
        if (*(int *)&param_1->field_0xd0e0 == 0) {
          uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"zom-s0?.wav")
          ;
          *(uint *)&param_1->field_0xd138 = uVar3;
          core_enemy_cpp_FUN_00489b80(param_1,param_2);
          return;
        }
        uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"f-zombie-hit?.wav");
        *(uint *)&param_1->field_0xd138 = uVar3;
        core_enemy_cpp_FUN_00489b80(param_1,param_2);
        return;
      }
    }
  }
  core_enemy_cpp_FUN_00489b80(param_1,param_2);
  return;
}
