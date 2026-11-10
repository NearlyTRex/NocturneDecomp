// Name: core_stranger.cpp_CStranger_processDamage_FUN_0058fcb0
// Address: 0058fcb0
// Address Range: [[0058fcb0, 0059001e]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processDamage_FUN_0058fcb0(CStranger *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_processDamage_FUN_0058fcb0(CStranger *this_ptr,SDamageInfo *damage_info)

{
  byte *this_ptr_00;
  CConsole *pCVar1;
  CGame *pCVar2;
  int iVar3;
  SMotion *pSVar4;
  uint uVar5;
  float fVar6;
  int desired_state_index;
  
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
  *(uint *)&this_ptr->field_0xc1d0 = _DAT_00606078;
  iVar3 = core_actor_cpp_isOfClass_FUN_0040c550
                    (*(CDemonActor **)(damage_info + 0x38),"CBugs");
  if (iVar3 != 0) {
    *(uint *)&this_ptr->field_0xc1d0 = 0x3e19999a;
  }
  pCVar2 = g_CGamePtr;
  *(float *)&this_ptr->field_0x2538 =
       *(float *)&this_ptr->field_0x2538 - *(float *)(damage_info + 4);
  pCVar1 = g_CConsolePtr;
  if (((*(int *)&pCVar2->field_0xdc != 0) && (0xb < *(int *)(damage_info + 0x30))) &&
     (*(float *)&this_ptr->field_0x2538 <= 0.0)) {
    *(uint *)&this_ptr->field_0x2538 = 0;
    engine_console_cpp_FUN_00445430(pCVar1);
    core_inv_cpp_CInventory_autoUseHealthItem_FUN_004fc3e0((CInventory *)&this_ptr->field_0x1fae8);
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"hit points: %3.2f\n",(double)*(float *)&this_ptr->field_0x2538);
  }
  this_ptr_00 = &this_ptr->field_0x158;
  if (0.0 < *(float *)&this_ptr->field_0x2538) {
    if (0.0 < *(float *)(damage_info + 4)) {
      if ((((*(int *)(damage_info + 0x30) != 0x69) && (*(int *)&this_ptr->field_0x1ff84 == 0)) &&
          ((this_ptr->ladder_to_descend == (CLadder *)0x0 && (*(int *)&this_ptr->field_0x1ff5c == 0)
           ))) && ((iVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                                      (*(uint *)(damage_info + 0x34)), iVar3 == 0 ||
                   (iVar3 = core_actor_cpp_randomChance_FUN_0040cd00(0.333), iVar3 != 0)))) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr_00,0x31,1);
      }
      iVar3 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handle);
      if (iVar3 == 0) {
        uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr);
        this_ptr->sfx_handle = uVar5;
      }
    }
  }
  else {
    *(uint *)&this_ptr->field_0x2538 = 0;
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0xf0))();
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)this_ptr_00);
    if ((*(int *)(pSVar4 + 0x24) != 0x36) &&
       (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           ((CMotionController *)this_ptr_00), *(int *)(pSVar4 + 0x24) != 0x35)) {
      if ((*(int *)&this_ptr->field_0x1ff84 == 0) && (this_ptr->ladder_to_descend == (CLadder *)0x0)
         ) {
        if (*(int *)(damage_info + 0x30) == 1) {
          desired_state_index = 0x34;
          iVar3 = 1;
        }
        else {
          iVar3 = 1;
          fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,100.0);
          desired_state_index = (fVar6 <= _DAT_005f6fb5) + 0x32;
        }
      }
      else {
        iVar3 = 1;
        desired_state_index = 0x1a;
        *(uint *)&this_ptr->field_0x1ff84 = 0;
        this_ptr->ladder_to_descend = (CLadder *)0x0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&this_ptr->field_0x158,desired_state_index,iVar3);
      sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
      if (*(int *)(damage_info + 0x30) != 1) {
        uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr);
        this_ptr->sfx_handle = uVar5;
      }
      core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0
                (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
    }
    if (this_ptr->weapon == *(CWeapon **)&this_ptr->field_0x25b0) {
      this_ptr->weapon = (CWeapon *)0x0;
    }
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,0);
    if (*(CWeapon **)&this_ptr->field_0x2628 == this_ptr->weapon) {
      this_ptr->weapon = (CWeapon *)0x0;
    }
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,1);
  }
  if (0.0 < *(float *)(damage_info + 4)) {
    core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320(g_CGamePtr);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
  return;
}
