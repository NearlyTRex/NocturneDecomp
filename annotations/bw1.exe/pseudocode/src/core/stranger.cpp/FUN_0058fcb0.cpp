// Name: core_stranger.cpp_FUN_0058fcb0
// Address: 0058fcb0
// Address Range: [[0058fcb0, 0059001e]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_0058fcb0(CDemonActor *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_FUN_0058fcb0(CDemonActor *param_1,int param_2)

{
  CDemonActor *this_ptr;
  CConsole *pCVar1;
  CGame *pCVar2;
  int iVar3;
  SMotion *pSVar4;
  uint uVar5;
  float fVar6;
  int desired_state_index;
  
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
  *(uint *)&param_1[0x90].field_0x50 = _DAT_00606078;
  iVar3 = core_actor_cpp_FUN_0040c550(*(CDemonActor **)(param_2 + 0x38),"CBugs");
  if (iVar3 != 0) {
    *(uint *)&param_1[0x90].field_0x50 = 0x3e19999a;
  }
  pCVar2 = g_CGamePtr;
  *(float *)&param_1[0x1b].field_0xf0 =
       *(float *)&param_1[0x1b].field_0xf0 - *(float *)(param_2 + 4);
  pCVar1 = g_CConsolePtr;
  if (((*(int *)&pCVar2->field_0xdc != 0) && (0xb < *(int *)(param_2 + 0x30))) &&
     (*(float *)&param_1[0x1b].field_0xf0 <= 0.0)) {
    *(uint *)&param_1[0x1b].field_0xf0 = 0;
    engine_console_cpp_FUN_00445430(pCVar1);
    core_inv_cpp_FUN_004fc3e0((CInventory *)&param_1[0x179].field_0x50);
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"hit points: %3.2f\n",(double)*(float *)&param_1[0x1b].field_0xf0)
    ;
  }
  this_ptr = param_1 + 1;
  if (0.0 < *(float *)&param_1[0x1b].field_0xf0) {
    if (0.0 < *(float *)(param_2 + 4)) {
      if ((((*(int *)(param_2 + 0x30) != 0x69) && (*(int *)&param_1[0x17c].field_0xe4 == 0)) &&
          ((*(int *)&param_1[0x17d].field_0x8 == 0 && (*(int *)&param_1[0x17c].field_0xbc == 0))))
         && ((iVar3 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)(param_2 + 0x34)),
             iVar3 == 0 || (iVar3 = core_actor_cpp_FUN_0040cd00(0.333), iVar3 != 0)))) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr,0x31,1);
      }
      iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[0x17e].field_0xec);
      if (iVar3 == 0) {
        uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
        *(uint *)&param_1[0x17e].field_0xec = uVar5;
      }
    }
  }
  else {
    iVar3 = *(int *)&param_1->field_0x154;
    *(uint *)&param_1[0x1b].field_0xf0 = 0;
    (**(code **)(iVar3 + 0xf0))();
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)this_ptr);
    if ((*(int *)(pSVar4 + 0x24) != 0x36) &&
       (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           ((CMotionController *)this_ptr), *(int *)(pSVar4 + 0x24) != 0x35)) {
      if ((*(int *)&param_1[0x17c].field_0xe4 == 0) && (*(int *)&param_1[0x17d].field_0x8 == 0)) {
        if (*(int *)(param_2 + 0x30) == 1) {
          desired_state_index = 0x34;
          iVar3 = 1;
        }
        else {
          iVar3 = 1;
          fVar6 = (float)core_actor_cpp_FUN_0040cc00(0,0x42c80000);
          desired_state_index = (fVar6 <= _DAT_005f6fb5) + 0x32;
        }
      }
      else {
        iVar3 = 1;
        desired_state_index = 0x1a;
        *(uint *)&param_1[0x17c].field_0xe4 = 0;
        *(uint *)&param_1[0x17d].field_0x8 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)(param_1 + 1),desired_state_index,iVar3);
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[0x17e].field_0xec);
      if (*(int *)(param_2 + 0x30) != 1) {
        uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
        *(uint *)&param_1[0x17e].field_0xec = uVar5;
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
  }
  if (0.0 < *(float *)(param_2 + 4)) {
    core_game_cpp_FUN_004d6320(g_CGamePtr);
  }
  core_charactr_cpp_FUN_004319e0(param_1,param_2);
  return;
}
