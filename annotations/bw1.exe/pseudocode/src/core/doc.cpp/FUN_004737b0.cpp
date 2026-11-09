// Name: core_doc.cpp_FUN_004737b0
// Address: 004737b0
// Address Range: [[004737b0, 00473c06]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004737b0(CDemonActor *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_004737b0(CDemonActor *param_1,int param_2)

{
  CConsole *pCVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  byte bVar5;
  float afStackY_1020 [1013];
  CDemonActor *this_ptr;
  int desired_state_index;
  uint uStack_38;
  float fStack_30;
  uint uStack_2c;
  CDemonActor *pCStack_18;
  float fStack_14;
  
  bVar5 = 0;
  if (*(int *)&param_1[0x1d].field_0xb8 != 0) {
    return;
  }
  if (*(int *)&g_CGamePtr->field_0x1ec != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x248 == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  core_hero_cpp_FUN_004ebe80((CHero *)param_1);
  if ((0.0 < *(float *)&param_1[0x90].field_0x50) && (0xb < *(int *)(param_2 + 0x30))) {
    *(uint *)(param_2 + 4) = 0;
    return;
  }
  *(uint *)&param_1[0x90].field_0x50 = _DAT_005feca8;
  iVar2 = core_actor_cpp_FUN_0040c550(*(CDemonActor **)(param_2 + 0x38),"CBugs");
  if (iVar2 != 0) {
    *(uint *)&param_1[0x90].field_0x50 = 0x3e19999a;
  }
  if (*(int *)&g_CGamePtr->field_0xd0 == 3) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005da3c4;
  }
  *(float *)&param_1[0x1b].field_0xf0 =
       *(float *)&param_1[0x1b].field_0xf0 - *(float *)(param_2 + 4);
  iVar2 = core_actor_cpp_FUN_0040c550(*(CDemonActor **)(param_2 + 0x38),"CShadowsc");
  if ((iVar2 != 0) &&
     (iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,"ScorpTailAttack"), iVar2 != 0)) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"HitByShadowScorp")
    ;
  }
  pCVar1 = g_CConsolePtr;
  if (((*(int *)&g_CGamePtr->field_0xdc != 0) && (0xb < *(int *)(param_2 + 0x30))) &&
     (*(float *)&param_1[0x1b].field_0xf0 <= 0.0)) {
    *(uint *)&param_1[0x1b].field_0xf0 = 0;
    engine_console_cpp_FUN_00445430(pCVar1);
    core_inv_cpp_FUN_004fc3e0((CInventory *)&param_1[0x179].field_0x50);
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"hit points: %3.2f\n",(double)*(float *)&param_1[0x1b].field_0xf0)
    ;
  }
  pCStack_18 = param_1 + 1;
  if (*(float *)&param_1[0x1b].field_0xf0 <= 0.0) {
    iVar2 = *(int *)&param_1->field_0x154;
    *(uint *)&param_1[0x1b].field_0xf0 = 0;
    (**(code **)(iVar2 + 0xf0))();
    this_ptr = pCStack_18;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)pCStack_18);
    if ((*(int *)(pSVar3 + 0x24) != 0x2e) &&
       (pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           ((CMotionController *)this_ptr), *(int *)(pSVar3 + 0x24) != 0x2d)) {
      if ((*(int *)&param_1[0x17c].field_0xe4 == 0) && (*(int *)&param_1[0x17d].field_0x8 == 0)) {
        if (*(int *)(param_2 + 0x30) == 1) {
          desired_state_index = 0x2c;
          iVar2 = 1;
        }
        else {
          iVar2 = 1;
          fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0,0x42c80000);
          desired_state_index = (fStack_14 <= _DAT_005da3cc) + 0x2a;
          this_ptr = param_1 + 1;
        }
      }
      else {
        iVar2 = 1;
        desired_state_index = 0x12;
        this_ptr = param_1 + 1;
        *(uint *)&param_1[0x17c].field_0xe4 = 0;
        *(uint *)&param_1[0x17d].field_0x8 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)this_ptr,desired_state_index,iVar2);
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[0x17d].field_0xdc);
      if (*(int *)(param_2 + 0x30) != 1) {
        uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
        *(uint *)&param_1[0x17d].field_0xdc = uVar4;
      }
      core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0
                (g_CGorePtr,param_1,0x32,50.0,(CVector3f *)0x0);
    }
    if (*(int *)&param_1[0x17d].field_0xc == *(int *)&param_1[0x1c].field_0x10) {
      *(uint *)&param_1[0x17d].field_0xc = 0;
    }
    (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,0);
    if (*(int *)&param_1[0x1c].field_0x88 == *(int *)&param_1[0x17d].field_0xc) {
      *(uint *)&param_1[0x17d].field_0xc = 0;
    }
    (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,1);
    goto LAB_00473a66;
  }
  if (*(float *)(param_2 + 4) <= 0.0) goto LAB_00473a66;
  if (((*(int *)(param_2 + 0x30) != 0x69) && (*(int *)&param_1[0x17c].field_0xe4 == 0)) &&
     ((*(int *)&param_1[0x17d].field_0x8 == 0 && (*(int *)&param_1[0x17c].field_0xbc == 0)))) {
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)(param_2 + 0x34));
    if (iVar2 == 0) {
      if (*(int *)(param_2 + 0x30) == 0x6d) {
        core_actor_cpp_FUN_00408bb0(param_1);
        uStack_38 = uStack_2c;
        *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        if (fStack_30 <= 0.0) {
          iVar2 = 0x83;
        }
        else {
          iVar2 = 0x82;
        }
      }
      else {
        iVar2 = 0x29;
      }
    }
    else {
      iVar2 = core_actor_cpp_FUN_0040cd00(0.333);
      if (iVar2 == 0) goto LAB_00473b7a;
      iVar2 = 0x29;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)pCStack_18,iVar2,1);
  }
LAB_00473b7a:
  iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[0x17d].field_0xdc);
  if (iVar2 == 0) {
    uVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
    *(uint *)&param_1[0x17d].field_0xdc = uVar4;
  }
LAB_00473a66:
  if (0.0 < *(float *)(param_2 + 4)) {
    core_game_cpp_FUN_004d6320(g_CGamePtr);
  }
  core_charactr_cpp_FUN_004319e0(param_1,param_2);
  return;
}
