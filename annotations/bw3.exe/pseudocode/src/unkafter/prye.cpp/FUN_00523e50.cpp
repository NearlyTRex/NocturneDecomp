// Name: unkafter_prye.cpp_FUN_00523e50
// Address: 00523e50
// Address Range: [[00523e50, 00524167]]
// Convention: unknown
// Signature: void unkafter_prye_cpp_FUN_00523e50(CDemonActor *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_prye_cpp_FUN_00523e50(CDemonActor *param_1,int param_2)

{
  CDemonActor *this_ptr;
  int iVar1;
  SMotion *pSVar2;
  uint uVar3;
  float fVar4;
  int desired_state_index;
  
  if (*(int *)&param_1[0x1d].field_0xb8 != 0) {
    return;
  }
  if (*(int *)&g_CGamePtr->field_0x1f4 != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x250 == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  core_hero_cpp_FUN_004d3af0((CHero *)param_1);
  if ((((0.0 < *(float *)&param_1[0x99].field_0x34) &&
       (iVar1 = *(int *)(param_2 + 0x30), 0xb < iVar1)) && (iVar1 != 0x66)) &&
     ((iVar1 != 0x6f && (iVar1 != 0x69)))) {
    *(uint *)(param_2 + 4) = 0;
    return;
  }
  *(uint *)&param_1[0x99].field_0x34 = _DAT_005e34f8;
  iVar1 = core_actor_cpp_FUN_0040c790(*(CDemonActor **)(param_2 + 0x38),"CBugs");
  if (iVar1 != 0) {
    *(uint *)&param_1[0x99].field_0x34 = 0x3e19999a;
  }
  fVar4 = *(float *)&param_1[0x1b].field_0xf0 - *(float *)(param_2 + 4);
  this_ptr = param_1 + 1;
  *(float *)&param_1[0x1b].field_0xf0 = fVar4;
  if (0.0 < fVar4) {
    if (0.0 < *(float *)(param_2 + 4)) {
      iVar1 = *(int *)(param_2 + 0x30);
      if ((((iVar1 != 0x69) && (iVar1 != 0x6f)) &&
          ((iVar1 != 0x66 &&
           (((*(int *)&param_1[0x185].field_0xec == 0 && (*(int *)&param_1[0x186].field_0x10 == 0))
            && (*(int *)&param_1[0x185].field_0xac == 0)))))) &&
         ((iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (*(uint *)(param_2 + 0x34),g_CTommyGunClassInfo.name_hash),
          iVar1 == 0 || (iVar1 = core_actor_cpp_FUN_0040cf40(0.333), iVar1 != 0)))) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)this_ptr,0x31,1);
      }
      iVar1 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[0x186].field_0xe4);
      if (iVar1 == 0) {
        uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"prye-pain?.wav");
        *(uint *)&param_1[0x186].field_0xe4 = uVar3;
      }
    }
  }
  else {
    iVar1 = *(int *)&param_1->field_0x154;
    *(uint *)&param_1[0x1b].field_0xf0 = 0;
    (**(code **)(iVar1 + 0xf0))(param_1);
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)this_ptr);
    if ((*(int *)(pSVar2 + 0x24) != 0x36) &&
       (pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                           ((CMotionController *)this_ptr), *(int *)(pSVar2 + 0x24) != 0x35)) {
      if ((*(int *)&param_1[0x185].field_0xec == 0) && (*(int *)&param_1[0x186].field_0x10 == 0)) {
        if (*(int *)(param_2 + 0x30) == 1) {
          desired_state_index = 0x34;
          iVar1 = 1;
        }
        else {
          iVar1 = 1;
          fVar4 = (float)core_actor_cpp_FUN_0040ce40(0,0x42c80000);
          desired_state_index = (fVar4 <= _DAT_005cd757) + 0x32;
        }
      }
      else {
        iVar1 = 1;
        desired_state_index = 0x1a;
        *(uint *)&param_1[0x185].field_0xec = 0;
        *(uint *)&param_1[0x186].field_0x10 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)(param_1 + 1),desired_state_index,iVar1);
      sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[0x186].field_0xe4);
      if (*(int *)(param_2 + 0x30) != 1) {
        uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"prye-death?.wav");
        *(uint *)&param_1[0x186].field_0xe4 = uVar3;
      }
      core_gore_cpp_CGore_spawnFliesOnActor_FUN_004cee30
                (g_CGorePtr,param_1,0x32,50.0,(CVector3f *)0x0);
    }
    if (*(int *)&param_1[0x186].field_0x14 == *(int *)&param_1[0x1c].field_0x10) {
      *(uint *)&param_1[0x186].field_0x14 = 0;
    }
    (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,0,0);
    if (*(int *)&param_1[0x1c].field_0x88 == *(int *)&param_1[0x186].field_0x14) {
      *(uint *)&param_1[0x186].field_0x14 = 0;
    }
    (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,1,0);
  }
  if (0.0 < *(float *)(param_2 + 4)) {
    core_game_cpp_FUN_004bd910(g_CGamePtr);
  }
  core_charactr_cpp_FUN_00430d60(param_1,param_2);
  return;
}
