// Name: core_werewolf.cpp_FUN_0057f6f0
// Address: 0057f6f0
// Address Range: [[0057f6f0, 0057fa18]]
// Convention: unknown
// Signature: void core_werewolf_cpp_FUN_0057f6f0(CWerewolf *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_werewolf_cpp_FUN_0057f6f0(CWerewolf *param_1,int param_2)

{
  byte *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1018 [1009];
  CVector3f CStack_24;
  
  bVar5 = 0;
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xd070);
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    core_werewolf_cpp_FUN_0057ee30(param_1);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,0x16,1);
    core_enemy_cpp_FUN_00489b80(param_1,param_2);
    return;
  }
  if (*(int *)(param_2 + 0x28) == 3) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005d7bf3;
    core_actor_cpp_FUN_00408b80(param_1,param_2 + 0x1c);
    iVar4 = 0;
    *(uint *)((int)&CStack_24 + (uint)bVar5 * -8 + 4) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8);
    *(uint *)((int)&CStack_24 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                (0x01C73654,&CStack_24,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  fVar1 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x158;
  *(float *)&param_1->field_0x2538 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&param_1->field_0x2538 = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)this_ptr);
    if ((*(int *)(pSVar2 + 0x24) != 0xd) && (*(int *)(pSVar2 + 0x24) != 0xc)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)this_ptr,0xc,1);
      if ((*(int *)&param_1->field_0xd054 == 0) && (*(int *)&g_CDemonSetPtr->field_0x15ae5c != 0)) {
        if (*(float *)&param_1->field_0x20 <= (float)_DAT_005d7bfb) {
          if ((double)*(float *)&param_1->field_0x20 < _DAT_005d7c03) {
            *(uint *)&param_1->field_0x34 = 0x3fc90fdb;
          }
        }
        else {
          *(uint *)&param_1->field_0x34 = 0xbfc90fdb;
        }
      }
      sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xd078);
      uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                        (param_1,"werewolf-die?.wav");
      *(uint *)&param_1->field_0xd078 = uVar3;
      (**(code **)(*(int *)&param_1->field_0x154 + 0xa8))(param_1,0x32,0x41c80000);
    }
    goto LAB_0057f813;
  }
  if (*(int *)&param_1->field_0xd054 != 2) {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)this_ptr);
    iVar4 = *(int *)(pSVar2 + 0x24);
    if ((iVar4 == 0xe) || (iVar4 == 0xf)) {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,9,1);
      }
      if (iVar4 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,10,1);
      }
      if (iVar4 == 2) {
        iVar4 = 0xb;
LAB_0057f94b:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,iVar4,1);
      }
    }
    else if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) ||
            (((iVar4 == 0x13 || (iVar4 == 3)) || (iVar4 == 4)))) {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,0x10,1);
      }
      if (iVar4 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,0x11,1);
      }
      if (iVar4 == 2) {
        iVar4 = 0x12;
        goto LAB_0057f94b;
      }
    }
  }
  iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0xd078);
  if (iVar4 == 0) {
    uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                      (param_1,"werewolf-hurt?.wav");
    *(uint *)&param_1->field_0xd078 = uVar3;
  }
LAB_0057f813:
  core_enemy_cpp_FUN_00489b80(param_1,param_2);
  return;
}
