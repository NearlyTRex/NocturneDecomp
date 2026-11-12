// Name: core_doc.cpp_CDoc_processDamage_FUN_004737b0
// Address: 004737b0
// Address Range: [[004737b0, 00473c06]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_processDamage_FUN_004737b0(CDoc *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_processDamage_FUN_004737b0(CDoc *this_ptr,SDamageInfo *damage_info)

{
  CCharacter_full_vtable *pCVar1;
  CConsole *this_ptr_00;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  int desired_state_index;
  CDemonActor *pCVar5;
  byte bVar6;
  float afStackY_1020 [1009];
  CMotionController *this_ptr_01;
  float fStack_30;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar6 = 0;
  if ((this_ptr->base).base.is_invulnerable != 0) {
    return;
  }
  if (g_CGamePtr->god_mode_enabled != 0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    damage_info->damage_amount = 0.0;
  }
  core_hero_cpp_CHero_stopNearbyInteraction_FUN_004ebe80(&this_ptr->base);
  if ((0.0 < (this_ptr->base).invincibility_timer) && (0xb < (int)damage_info->damage_type)) {
    damage_info->damage_amount = 0.0;
    return;
  }
  (this_ptr->base).invincibility_timer = _DAT_005feca8;
  iVar2 = core_actor_cpp_isOfClass_FUN_0040c550(damage_info->wielder,"CBugs");
  if (iVar2 != 0) {
    (this_ptr->base).invincibility_timer = 0.15;
  }
  if (g_CGamePtr->game_control == CONTROL_MODE_POINT_AND_CLICK) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005da3c4;
  }
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  iVar2 = core_actor_cpp_isOfClass_FUN_0040c550(damage_info->wielder,"CShadowsc");
  if ((iVar2 != 0) &&
     (iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,"ScorpTailAttack"), iVar2 != 0)) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"HitByShadowScorp")
    ;
  }
  this_ptr_00 = g_CConsolePtr;
  if (((g_CGamePtr->auto_use_health != 0) && (0xb < (int)damage_info->damage_type)) &&
     ((this_ptr->base).base.hit_points <= 0.0)) {
    (this_ptr->base).base.hit_points = 0.0;
    engine_console_cpp_CConsole_printf_FUN_00445430(this_ptr_00,"Using auto health\n");
    core_inv_cpp_CInventory_autoUseHealthItem_FUN_004fc3e0(&(this_ptr->base).inventory);
    engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"hit points: %3.2f\n");
  }
  pCStack_18 = &(this_ptr->base).base.model.base;
  if ((this_ptr->base).base.hit_points <= 0.0) {
    pCVar1 = (this_ptr->base).base.base.vtable._uc;
    (this_ptr->base).base.hit_points = 0.0;
    (*(pCVar1->_uc).releaseFromGrab)((CCharacter *)this_ptr);
    this_ptr_01 = pCStack_18;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_18);
    if ((pSVar3->state_index != 0x2e) &&
       (pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr_01),
       pSVar3->state_index != 0x2d)) {
      if (((this_ptr->base).ladder_to_climb == (CLadder *)0x0) &&
         (this_ptr->ladder_to_descend == (CLadder *)0x0)) {
        if (damage_info->damage_type == DAMAGE_TYPE_DROWN) {
          desired_state_index = 0x2c;
          iVar2 = 1;
        }
        else {
          iVar2 = 1;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,100.0);
          desired_state_index = (fStack_14 <= _DAT_005da3cc) + 0x2a;
          this_ptr_01 = &(this_ptr->base).base.model.base;
        }
      }
      else {
        iVar2 = 1;
        this_ptr_01 = &(this_ptr->base).base.model.base;
        (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
        desired_state_index = 0x12;
        this_ptr->ladder_to_descend = (CLadder *)0x0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                (this_ptr_01,desired_state_index,iVar2);
      sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
      if (damage_info->damage_type != DAMAGE_TYPE_DROWN) {
        uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"doc_die??.wav");
        this_ptr->sfx_handle = uVar4;
      }
      core_gore_cpp_CGore_spawnFliesOnActor_FUN_004e64d0
                (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
    }
    if (this_ptr->weapon == (CWeapon *)(this_ptr->base).base.carry_hands[0].carry_actor) {
      this_ptr->weapon = (CWeapon *)0x0;
    }
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    if ((CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor == this_ptr->weapon) {
      this_ptr->weapon = (CWeapon *)0x0;
    }
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
    goto LAB_00473a66;
  }
  if (damage_info->damage_amount <= 0.0) goto LAB_00473a66;
  if (((damage_info->damage_type != DAMAGE_TYPE_ATTACK_GAS) &&
      ((this_ptr->base).ladder_to_climb == (CLadder *)0x0)) &&
     ((this_ptr->ladder_to_descend == (CLadder *)0x0 && ((this_ptr->base).action_pending == 0)))) {
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c600
                       (damage_info->attacker,g_CTommyGunClassInfo.name_hash);
    if (pCVar5 == (CDemonActor *)0x0) {
      if (damage_info->damage_type == DAMAGE_TYPE_SHADOW) {
        core_actor_cpp_FUN_00408bb0(this_ptr);
        *(uint *)(&stack0xffffffcc + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xffffffd0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
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
  iVar2 = sound_sndmain_cpp_FUN_005735a0(this_ptr->sfx_handle);
  if (iVar2 == 0) {
    uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"generic_doc_hit1?.wav");
    this_ptr->sfx_handle = uVar4;
  }
LAB_00473a66:
  if (0.0 < damage_info->damage_amount) {
    core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320(g_CGamePtr);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_004319e0((CCharacter *)this_ptr,damage_info);
  return;
}
