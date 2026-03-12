// Name: core_stranger.cpp_CStranger_processDamage_FUN_005c48b0
// Address: 005c48b0
// Address Range: [[005c48b0, 005c4b51] [005c4b7c, 005c4c15]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processDamage_FUN_005c48b0(CStranger *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_processDamage_FUN_005c48b0(CStranger *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_02;
  int iVar3;
  SMotion *pSVar4;
  SMotion *pSVar1;
  uint uVar5;
  int iVar2;
  CDemonActor *pCVar6;
  uint uVar3;
  CCharacter_full_vtable *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  CConsole *this_ptr_01;
  CGame *pCVar2;
  float force_immediate;
  
  if (g_CGamePtr->god_mode_enabled != 0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    damage_info->damage_amount = 0.0;
  }
  core_hero_cpp_CHero_stopNearbyInteraction_FUN_004f3580(&this_ptr->base);
  if ((0.0 < (this_ptr->base).invincibility_timer) && (0xb < (int)damage_info->damage_type)) {
    damage_info->damage_amount = 0.0;
    return;
  }
  (this_ptr->base).invincibility_timer = 2.0f;
  iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(damage_info->wielder,"CBugs");
  if (iVar3 != 0) {
    (this_ptr->base).invincibility_timer = 0.15;
  }
  pCVar2 = g_CGamePtr;
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_01 = g_CConsolePtr;
  if (((pCVar2->auto_use_health != 0) && (0xb < (int)damage_info->damage_type)) &&
     ((this_ptr->base).base.hit_points <= 0.0)) {
    (this_ptr->base).base.hit_points = 0.0;
    engine_console_cpp_CConsole_printf_FUN_00441890(this_ptr_01,"Using auto health\n");
    core_inv_cpp_CInventory_autoUseHealthItem_FUN_00501570(&(this_ptr->base).inventory);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"hit points: %3.2f\n",(double)(this_ptr->base).base.hit_points);
  }
  this_ptr_02 = &(this_ptr->base).base.model;
  if ((this_ptr->base).base.hit_points <= 0.0) {
    pCVar1 = (this_ptr->base).base.base.vtable._uc;
    (this_ptr->base).base.hit_points = 0.0;
    (*(pCVar1->_uc).releaseFromGrab)((CCharacter *)this_ptr);
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_02->motion_controller);
    if (pSVar4->state_index != 0x29) {
      pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr_02->motion_controller);
      if (pSVar1->state_index != 0x28) {
        if (((this_ptr->base).ladder_to_climb == (CLadder *)0x0) &&
           (this_ptr->ladder_to_descend == (CLadder *)0x0)) {
          if (damage_info->damage_type == DAMAGE_TYPE_DROWN) {
            iVar2 = 0x27;
            force_immediate = 1.4013e-45;
          }
          else {
            force_immediate = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,100.0);
            iVar2 = (force_immediate <= 50.0f) + 0x25;
          }
        }
        else {
          force_immediate = 1.4013e-45;
          (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
          iVar2 = 0xf;
          this_ptr->ladder_to_descend = (CLadder *)0x0;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,iVar2,(int)force_immediate);
        sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
        if (damage_info->damage_type != DAMAGE_TYPE_DROWN) {
          uVar5 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"stranger_die??.wav");
          this_ptr->sfx_handle = uVar5;
        }
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004ee030
                  (g_CGorePtr,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
      }
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
    goto LAB_005c4ae0;
  }
  if (damage_info->damage_amount <= 0.0) goto LAB_005c4ae0;
  if (((damage_info->damage_type != DAMAGE_TYPE_NO_FLINCH) &&
      ((this_ptr->base).ladder_to_climb == (CLadder *)0x0)) &&
     ((this_ptr->ladder_to_descend == (CLadder *)0x0 && (this_ptr->action_pending == 0)))) {
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (damage_info->attacker,g_CTommyGunClassInfo.name_hash);
    if (pCVar6 != (CDemonActor *)0x0) {
      iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.333);
      if (iVar2 == 0) goto LAB_005c4be2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_02->motion_controller,0x24,1);
  }
LAB_005c4be2:
  iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handle);
  if (iVar2 == 0) {
    uVar3 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"stranger_hit??.wav");
    this_ptr->sfx_handle = uVar3;
  }
LAB_005c4ae0:
  if (0.0 < damage_info->damage_amount) {
    core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004e0bd0(g_CGamePtr);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0((CCharacter *)this_ptr,damage_info);
  return;
}
