// Name: unkafter_stranger.cpp_FUN_0045b190
// Address: 0045b190
// Address Range: [[0045b190, 0045b505]]
// Convention: unknown
// Signature: void unkafter_stranger_cpp_FUN_0045b190(CCharacter *param_1,SDamageInfo *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_stranger_cpp_FUN_0045b190(CCharacter *param_1,SDamageInfo *param_2)

{
  CConsole *pCVar1;
  CGame *pCVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  int desired_state_index;
  
  if (*(int *)&param_1->field_0x281c == 0) {
    if (*(int *)&g_CGamePtr->field_0x1ec != 0) {
      *(uint *)(param_2 + 4) = 0;
    }
    if (*(int *)&g_CGamePtr->field_0x248 == 0) {
      *(uint *)(param_2 + 4) = 0;
    }
    core_hero_cpp_FUN_004cfad0((CHero *)param_1);
    if ((0.0 < *(float *)(param_1 + 1)) && (0xb < *(int *)(param_2 + 0x30))) {
      *(uint *)(param_2 + 4) = 0;
      return;
    }
    *(uint *)(param_1 + 1) = _DAT_005f5128;
    iVar3 = core_actor_cpp_FUN_0040c840(*(CDemonActor **)(param_2 + 0x38),"CBugs");
    if (iVar3 != 0) {
      *(uint *)(param_1 + 1) = 0x3e19999a;
    }
    pCVar2 = g_CGamePtr;
    *(float *)&param_1->field_0x25a8 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
    pCVar1 = g_CConsolePtr;
    if (((*(int *)&pCVar2->field_0xdc != 0) && (0xb < *(int *)(param_2 + 0x30))) &&
       (*(float *)&param_1->field_0x25a8 <= 0.0)) {
      *(uint *)&param_1->field_0x25a8 = 0;
      engine_console_cpp_FUN_00436710(pCVar1);
      core_inv_cpp_FUN_004df010((CInventory *)&param_1[2].field_0x2ebc);
      engine_console_cpp_FUN_00436710
                (g_CConsolePtr,"hit points: %3.2f\n",(double)*(float *)&param_1->field_0x25a8);
    }
    if (0.0 < *(float *)&param_1->field_0x25a8) {
      if (0.0 < *(float *)(param_2 + 4)) {
        if (((*(int *)(param_2 + 0x30) != 0x69) && (*(int *)&param_1[2].field_0x4154 == 0)) &&
           ((*(int *)&param_1[2].field_0x41d4 == 0 && (*(int *)&param_1[2].field_0x41e4 == 0)))) {
          iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0(*(uint *)(param_2 + 0x34));
          if (iVar3 == 0) {
            fVar5 = 0.4;
          }
          else {
            fVar5 = 0.333;
          }
          iVar3 = core_actor_cpp_FUN_0040d060(fVar5);
          if (iVar3 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,0x26,1);
          }
        }
        iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[2].field_0x4294);
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1);
          *(uint *)&param_1[2].field_0x4294 = uVar4;
        }
      }
    }
    else {
      *(uint *)&param_1->field_0x25a8 = 0;
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0xf8))();
      iVar3 = core_motion_cpp_FUN_005035c0();
      if (*(int *)(iVar3 + 0x24) != 0x2b) {
        iVar3 = core_motion_cpp_FUN_005035c0();
        if (*(int *)(iVar3 + 0x24) != 0x2a) {
          if ((*(int *)&param_1[2].field_0x4154 == 0) && (*(int *)&param_1[2].field_0x41d4 == 0)) {
            if (*(int *)(param_2 + 0x30) == 1) {
              desired_state_index = 0x29;
              iVar3 = 1;
            }
            else {
              iVar3 = 1;
              fVar5 = (float)core_actor_cpp_FUN_0040cf60(0,0x42c80000);
              desired_state_index = (fVar5 <= _DAT_005d05ef) + 0x27;
            }
          }
          else {
            iVar3 = 1;
            desired_state_index = 0xf;
            *(uint *)&param_1[2].field_0x4154 = 0;
            *(uint *)&param_1[2].field_0x41d4 = 0;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,desired_state_index,iVar3);
          sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[2].field_0x4294);
          if (*(int *)(param_2 + 0x30) != 1) {
            uVar4 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1);
            *(uint *)&param_1[2].field_0x4294 = uVar4;
          }
          core_gore_cpp_FUN_004c9cc0(g_CGorePtr,(CDemonActor *)param_1,0x32,50.0,(CVector3f *)0x0);
        }
      }
      if (*(int *)&param_1[2].field_0x41d8 == *(int *)&param_1->field_0x2620) {
        *(uint *)&param_1[2].field_0x41d8 = 0;
      }
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x130))(param_1,0);
      if (*(int *)&param_1->field_0x2698 == *(int *)&param_1[2].field_0x41d8) {
        *(uint *)&param_1[2].field_0x41d8 = 0;
      }
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x130))(param_1,1);
    }
    if (0.0 < *(float *)(param_2 + 4)) {
      core_game_cpp_FUN_004bb8b0(g_CGamePtr);
    }
    core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(param_1,param_2);
  }
  return;
}
