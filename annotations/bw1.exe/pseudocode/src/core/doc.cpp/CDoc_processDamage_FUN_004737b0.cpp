// Name: core_doc.cpp_CDoc_processDamage_FUN_004737b0
// Address: 004737b0
// Address Range: [[004737b0, 00473c06]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_processDamage_FUN_004737b0(CDoc *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_processDamage_FUN_004737b0(CDoc *this_ptr,SDamageInfo *damage_info)

{
  CConsole *pCVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  byte bVar5;
  float afStackY_1020 [1013];
  CMotionController *this_ptr_00;
  int desired_state_index;
  uint uStack_38;
  float fStack_30;
  uint uStack_2c;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar5 = 0;
  if (*(int *)&this_ptr->field_0x27b0 != 0) {
    return;
  }
  if (*(int *)&g_CGamePtr->field_0x1ec != 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  if (*(int *)&g_CGamePtr->field_0x248 == 0) {
    *(uint *)(damage_info + 4) = 0;
  }
  core_hero_cpp_CHero_stopNearbyInteraction_FUN_004ebe80((CHero *)this_ptr);
  if ((0.0 < *(float *)&this_ptr->field_0xc1d0) && (0xb < *(int *)(damage_info + 0x30))) {
    *(uint *)(damage_info + 4) = 0;
    return;
  }
  *(uint *)&this_ptr->field_0xc1d0 = _DAT_005feca8;
  iVar2 = core_actor_cpp_isOfClass_FUN_0040c550
                    (*(CDemonActor **)(damage_info + 0x38),"CBugs");
  if (iVar2 != 0) {
    *(uint *)&this_ptr->field_0xc1d0 = 0x3e19999a;
  }
  if (*(int *)&g_CGamePtr->field_0xd0 == 3) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005da3c4;
  }
  *(float *)&this_ptr->field_0x2538 =
       *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
  iVar2 = core_actor_cpp_isOfClass_FUN_0040c550
                    (*(CDemonActor **)(damage_info + 0x38),"CShadowsc");
  if ((iVar2 != 0) &&
     (iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,"ScorpTailAttack"), iVar2 != 0)) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"HitByShadowScorp")
    ;
  }
  pCVar1 = g_CConsolePtr;
  if (((*(int *)&g_CGamePtr->field_0xdc != 0) && (0xb < *(int *)(damage_info + 0x30))) &&
     (*(float *)&this_ptr->field_0x2538 <= 0.0)) {
    *(uint *)&this_ptr->field_0x2538 = 0;
    engine_console_cpp_FUN_00445430(pCVar1);
    core_inv_cpp_CInventory_autoUseHealthItem_FUN_004fc3e0((CInventory *)&this_ptr->field_0x1fae8);
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"hit points: %3.2f\n",(double)*(float *)&this_ptr->field_0x2538);
  }
  pCStack_18 = (CMotionController *)&this_ptr->field_0x158;
  if (*(float *)&this_ptr->field_0x2538 <= 0.0) {
    *(uint *)&this_ptr->field_0x2538 = 0;
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0xf0))();
    this_ptr_00 = pCStack_18;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_18);
    if ((*(int *)(pSVar3 + 0x24) != 0x2e) &&
       (pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr_00),
       *(int *)(pSVar3 + 0x24) != 0x2d)) {
      if ((*(int *)&this_ptr->field_0x1ff84 == 0) && (*(int *)&this_ptr->field_0x20000 == 0)) {
        if (*(int *)(damage_info + 0x30) == 1) {
          desired_state_index = 0x2c;
          iVar2 = 1;
        }
        else {
          iVar2 = 1;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,100.0);
          desired_state_index = (fStack_14 <= _DAT_005da3cc) + 0x2a;
          this_ptr_00 = (CMotionController *)&this_ptr->field_0x158;
        }
      }
      else {
        iVar2 = 1;
        desired_state_index = 0x12;
        this_ptr_00 = (CMotionController *)&this_ptr->field_0x158;
        *(uint *)&this_ptr->field_0x1ff84 = 0;
        *(uint *)&this_ptr->field_0x20000 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (this_ptr_00,desired_state_index,iVar2);
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0x200d4);
      if (*(int *)(damage_info + 0x30) != 1) {
        uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr);
        *(uint *)&this_ptr->field_0x200d4 = uVar4;
      }
      core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0
                (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
    }
    if (*(int *)&this_ptr->field_0x20004 == *(int *)&this_ptr->field_0x25b0) {
      *(uint *)&this_ptr->field_0x20004 = 0;
    }
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,0);
    if (*(int *)&this_ptr->field_0x2628 == *(int *)&this_ptr->field_0x20004) {
      *(uint *)&this_ptr->field_0x20004 = 0;
    }
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,1);
    goto LAB_00473a66;
  }
  if (*(float *)(damage_info + 4) <= 0.0) goto LAB_00473a66;
  if (((*(int *)(damage_info + 0x30) != 0x69) && (*(int *)&this_ptr->field_0x1ff84 == 0)) &&
     ((*(int *)&this_ptr->field_0x20000 == 0 && (*(int *)&this_ptr->field_0x1ff5c == 0)))) {
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)(damage_info + 0x34));
    if (iVar2 == 0) {
      if (*(int *)(damage_info + 0x30) == 0x6d) {
        core_actor_cpp_FUN_00408bb0(this_ptr);
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
      iVar2 = core_actor_cpp_randomChance_FUN_0040cd00(0.333);
      if (iVar2 == 0) goto LAB_00473b7a;
      iVar2 = 0x29;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_18,iVar2,1);
  }
LAB_00473b7a:
  iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0x200d4);
  if (iVar2 == 0) {
    uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr);
    *(uint *)&this_ptr->field_0x200d4 = uVar4;
  }
LAB_00473a66:
  if (0.0 < *(float *)(damage_info + 4)) {
    core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320(g_CGamePtr);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
  return;
}
