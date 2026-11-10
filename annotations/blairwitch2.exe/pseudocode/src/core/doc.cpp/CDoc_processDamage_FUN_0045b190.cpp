// Name: core_doc.cpp_CDoc_processDamage_FUN_0045b190
// Address: 0045b190
// Address Range: [[0045b190, 0045b505]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_processDamage_FUN_0045b190(CDoc *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_processDamage_FUN_0045b190(CDoc *this_ptr,SDamageInfo *damage_info)

{
  CConsole *pCVar1;
  CGame *pCVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  int desired_state_index;
  
  if (*(int *)&this_ptr->field_0x281c == 0) {
    if (*(int *)&g_CGamePtr->field_0x1ec != 0) {
      *(uint *)(damage_info + 4) = 0;
    }
    if (*(int *)&g_CGamePtr->field_0x248 == 0) {
      *(uint *)(damage_info + 4) = 0;
    }
    core_hero_cpp_CHero_stopNearbyInteraction_FUN_004cfad0((CHero *)this_ptr);
    if ((0.0 < *(float *)&this_ptr->field_0x10a60) && (0xb < *(int *)(damage_info + 0x30))) {
      *(uint *)(damage_info + 4) = 0;
      return;
    }
    *(uint *)&this_ptr->field_0x10a60 = _DAT_005f5128;
    iVar3 = core_actor_cpp_isOfClass_FUN_0040c840
                      (*(CDemonActor **)(damage_info + 0x38),"CBugs");
    if (iVar3 != 0) {
      *(uint *)&this_ptr->field_0x10a60 = 0x3e19999a;
    }
    pCVar2 = g_CGamePtr;
    *(float *)&this_ptr->field_0x25a8 =
         *(float *)&this_ptr->field_0x25a8 - *(float *)(damage_info + 4);
    pCVar1 = g_CConsolePtr;
    if (((*(int *)&pCVar2->field_0xdc != 0) && (0xb < *(int *)(damage_info + 0x30))) &&
       (*(float *)&this_ptr->field_0x25a8 <= 0.0)) {
      *(uint *)&this_ptr->field_0x25a8 = 0;
      engine_console_cpp_FUN_00436710(pCVar1);
      core_inv_cpp_CInventory_autoUseHealthItem_FUN_004df010((CInventory *)&this_ptr->field_0x2437c)
      ;
      engine_console_cpp_FUN_00436710
                (g_CConsolePtr,"hit points: %3.2f\n",(double)*(float *)&this_ptr->field_0x25a8)
      ;
    }
    if (0.0 < *(float *)&this_ptr->field_0x25a8) {
      if (0.0 < *(float *)(damage_info + 4)) {
        if (((*(int *)(damage_info + 0x30) != 0x69) && (*(int *)&this_ptr->field_0x25614 == 0)) &&
           ((*(int *)&this_ptr->field_0x25694 == 0 && (*(int *)&this_ptr->field_0x256a4 == 0)))) {
          iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0(*(uint *)(damage_info + 0x34));
          if (iVar3 == 0) {
            fVar5 = 0.4;
          }
          else {
            fVar5 = 0.333;
          }
          iVar3 = core_actor_cpp_randomChance_FUN_0040d060(fVar5);
          if (iVar3 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&this_ptr->field_0x2b4,0x26,1);
          }
        }
        iVar3 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&this_ptr->field_0x25754);
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr);
          *(uint *)&this_ptr->field_0x25754 = uVar4;
        }
      }
    }
    else {
      *(uint *)&this_ptr->field_0x25a8 = 0;
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0xf8))();
      iVar3 = core_motion_cpp_FUN_005035c0();
      if (*(int *)(iVar3 + 0x24) != 0x2b) {
        iVar3 = core_motion_cpp_FUN_005035c0();
        if (*(int *)(iVar3 + 0x24) != 0x2a) {
          if ((*(int *)&this_ptr->field_0x25614 == 0) && (*(int *)&this_ptr->field_0x25694 == 0)) {
            if (*(int *)(damage_info + 0x30) == 1) {
              desired_state_index = 0x29;
              iVar3 = 1;
            }
            else {
              iVar3 = 1;
              fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,100.0);
              desired_state_index = (fVar5 <= _DAT_005d05ef) + 0x27;
            }
          }
          else {
            iVar3 = 1;
            desired_state_index = 0xf;
            *(uint *)&this_ptr->field_0x25614 = 0;
            *(uint *)&this_ptr->field_0x25694 = 0;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&this_ptr->field_0x2b4,desired_state_index,iVar3);
          sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&this_ptr->field_0x25754);
          if (*(int *)(damage_info + 0x30) != 1) {
            uVar4 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr);
            *(uint *)&this_ptr->field_0x25754 = uVar4;
          }
          core_gore_cpp_CGore_spawnFliesOnActor_FUN_004c9cc0
                    (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
        }
      }
      if (*(int *)&this_ptr->field_0x25698 == *(int *)&this_ptr->field_0x2620) {
        *(uint *)&this_ptr->field_0x25698 = 0;
      }
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,0);
      if (*(int *)&this_ptr->field_0x2698 == *(int *)&this_ptr->field_0x25698) {
        *(uint *)&this_ptr->field_0x25698 = 0;
      }
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,1);
    }
    if (0.0 < *(float *)(damage_info + 4)) {
      core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004bb8b0(g_CGamePtr);
    }
    core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
  }
  return;
}
