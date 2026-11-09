// Name: core_werewolf.cpp_FUN_0058d920
// Address: 0058d920
// Address Range: [[0058d920, 0058dc48]]
// Convention: unknown
// Signature: void core_werewolf_cpp_FUN_0058d920(CWerewolf *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_werewolf_cpp_FUN_0058d920(CWerewolf *param_1,int param_2)

{
  byte *this_ptr;
  float fVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint auStackY_1018 [1009];
  CVector3f CStack_24;
  
  bVar4 = 0;
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10b14);
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    core_werewolf_cpp_FUN_0058d060(param_1);
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,0x16,1);
    core_enemy_cpp_FUN_00488890(param_1,param_2);
    return;
  }
  if (*(int *)(param_2 + 0x28) == 3) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005ee7fa;
    core_actor_cpp_FUN_00408d70(param_1,param_2 + 0x1c);
    iVar2 = 0;
    *(uint *)((int)&CStack_24 + (uint)bVar4 * -8 + 4) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8);
    *(uint *)((int)&CStack_24 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_FUN_0049d090(0x01C3DEB4,&CStack_24,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  fVar1 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x2b4;
  *(float *)&param_1->field_0x25a8 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&param_1->field_0x25a8 = 0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
    if ((*(int *)(iVar2 + 0x24) != 0xd) && (*(int *)(iVar2 + 0x24) != 0xc)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr,0xc,1);
      if ((*(int *)&param_1->field_0x10af8 == 0) && (*(int *)&g_CDemonSetPtr->field_0x15ae5c != 0))
      {
        if (*(float *)&param_1->field_0x20 <= (float)_DAT_005ee802) {
          if ((double)*(float *)&param_1->field_0x20 < _DAT_005ee80a) {
            *(uint *)&param_1->field_0x34 = 0x3fc90fdb;
          }
        }
        else {
          *(uint *)&param_1->field_0x34 = 0xbfc90fdb;
        }
      }
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10b1c);
      uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                        (param_1,"werewolf-die?.wav");
      *(uint *)&param_1->field_0x10b1c = uVar3;
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0xb0))(param_1,0x32,0x41c80000);
    }
    goto LAB_0058da43;
  }
  if (*(int *)&param_1->field_0x10af8 != 2) {
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
    iVar2 = *(int *)(iVar2 + 0x24);
    if ((iVar2 == 0xe) || (iVar2 == 0xf)) {
      iVar2 = core_actor_cpp_FUN_0040cfc0(0,2);
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,9,1);
      }
      if (iVar2 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,10,1);
      }
      if (iVar2 == 2) {
        iVar2 = 0xb;
LAB_0058db7b:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
      }
    }
    else if ((((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) ||
            (((iVar2 == 0x13 || (iVar2 == 3)) || (iVar2 == 4)))) {
      iVar2 = core_actor_cpp_FUN_0040cfc0(0,2);
      if (iVar2 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,0x10,1);
      }
      if (iVar2 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,0x11,1);
      }
      if (iVar2 == 2) {
        iVar2 = 0x12;
        goto LAB_0058db7b;
      }
    }
  }
  iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10b1c);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                      (param_1,"werewolf-hurt?.wav");
    *(uint *)&param_1->field_0x10b1c = uVar3;
  }
LAB_0058da43:
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
