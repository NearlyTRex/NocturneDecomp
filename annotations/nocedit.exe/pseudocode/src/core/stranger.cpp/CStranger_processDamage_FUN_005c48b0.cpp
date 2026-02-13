// Name: core_stranger.cpp_CStranger_processDamage_FUN_005c48b0
// Address: 005c48b0
// Address Range: [[005c48b0, 005c4b51] [005c4b7c, 005c4c15]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processDamage_FUN_005c48b0(CStranger *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_stranger_cpp_CStranger_processDamage_FUN_005c48b0(CStranger *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  CCharacter_full_vtable *pCVar1;
  CConsole *this_ptr_01;
  CGame *pCVar2;
  int iVar3;
  SMotion *pSVar4;
  uint uVar5;
  CDemonActor *pCVar6;
  float force_immediate;
  
  if (g_CGamePtr->debug_flag_1 != 0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    damage_info->damage_amount = 0.0;
  }
  core_hero_cpp_CHero_FUN_004f3580(&this_ptr->base);
  if ((0.0 < (float)(this_ptr->base).no_collision_flag) && (0xb < damage_info->damage_type)) {
    damage_info->damage_amount = 0.0;
    return;
  }
  (this_ptr->base).no_collision_flag = (int)2.0f;
  iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(damage_info->wielder,"CBugs");
  if (iVar3 != 0) {
    (this_ptr->base).no_collision_flag = 0x3e19999a;
  }
  pCVar2 = g_CGamePtr;
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_01 = g_CConsolePtr;
  if (((pCVar2->auto_use_health != 0) && (0xb < damage_info->damage_type)) &&
     ((this_ptr->base).base.hit_points <= 0.0)) {
    (this_ptr->base).base.hit_points = 0.0;
    engine_console_cpp_CConsole_printf_FUN_00441890(this_ptr_01,"Using auto health\n");
    core_inv_cpp_CInventory_autoUseHealthItem_FUN_00501570(&(this_ptr->base).inventory);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"hit points: %3.2f\n",(double)(this_ptr->base).base.hit_points);
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  if ((this_ptr->base).base.hit_points <= 0.0) {
    pCVar1 = (this_ptr->base).base.base.vtable._uc;
    (this_ptr->base).base.hit_points = 0.0;
    (*(pCVar1->_uc).releaseFromGrab)((CCharacter *)this_ptr);
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if (pSVar4->state_index != 0x29) {
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr_00->motion_controller);
      if (pSVar4->state_index != 0x28) {
        if (((this_ptr->base).ladder_to_climb == (CDemonActor *)0x0) &&
           (this_ptr->ladder_to_descend == (CDemonActor *)0x0)) {
          if (damage_info->damage_type == 1) {
            iVar3 = 0x27;
            force_immediate = 1.4013e-45;
          }
          else {
            force_immediate = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,100.0);
            iVar3 = (force_immediate <= 50.0f) + 0x25;
          }
        }
        else {
          force_immediate = 1.4013e-45;
          (this_ptr->base).ladder_to_climb = (CDemonActor *)0x0;
          iVar3 = 0xf;
          this_ptr->ladder_to_descend = (CDemonActor *)0x0;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base).base.model.motion_controller,iVar3,(int)force_immediate);
        sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk11 + 0x14));
        if (damage_info->damage_type != 1) {
          uVar5 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"stranger_die??.wav");
          *(uint *)(this_ptr->unk11 + 0x14) = uVar5;
        }
        core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,(CDemonActor *)this_ptr);
      }
    }
    if (this_ptr->weapon == (this_ptr->base).base.carry_hands[0].carry_actor) {
      this_ptr->weapon = (CDemonActor *)0x0;
    }
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    if ((this_ptr->base).base.carry_hands[1].carry_actor == this_ptr->weapon) {
      this_ptr->weapon = (CDemonActor *)0x0;
    }
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
              ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
    goto LAB_005c4ae0;
  }
  if (damage_info->damage_amount <= 0.0) goto LAB_005c4ae0;
  if (((damage_info->damage_type != 0x69) &&
      ((this_ptr->base).ladder_to_climb == (CDemonActor *)0x0)) &&
     ((this_ptr->ladder_to_descend == (CDemonActor *)0x0 && (this_ptr->action_pending == 0)))) {
    pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (damage_info->attacker,g_CTommyGunClassInfo.name_hash);
    if (pCVar6 != (CDemonActor *)0x0) {
      iVar3 = core_actor_cpp_randomChance_FUN_0040cd10(0.333);
      if (iVar3 == 0) goto LAB_005c4be2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,0x24,1);
  }
LAB_005c4be2:
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk11 + 0x14));
  if (iVar3 == 0) {
    uVar5 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"stranger_hit??.wav");
    *(uint *)(this_ptr->unk11 + 0x14) = uVar5;
  }
LAB_005c4ae0:
  if (0.0 < damage_info->damage_amount) {
    core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004e0bd0(g_CGamePtr);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0((CCharacter *)this_ptr,damage_info);
  return;
}
