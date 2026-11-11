// Name: core_doc.cpp_CDoc_processDamage_FUN_0045b190
// Address: 0045b190
// Address Range: [[0045b190, 0045b505]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_processDamage_FUN_0045b190(CDoc *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_processDamage_FUN_0045b190(CDoc *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  CCharacter_full_vtable *pCVar1;
  CConsole *pCVar2;
  CGame *pCVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  
  if ((this_ptr->base).base.is_invulnerable == 0) {
    if (g_CGamePtr->god_mode_enabled != 0) {
      damage_info->damage_amount = 0.0;
    }
    if (g_CGamePtr->allow_damage_flag == 0) {
      damage_info->damage_amount = 0.0;
    }
    core_hero_cpp_CHero_stopNearbyInteraction_FUN_004cfad0(&this_ptr->base);
    if ((0.0 < (this_ptr->base).invincibility_timer) && (0xb < (int)damage_info->damage_type)) {
      damage_info->damage_amount = 0.0;
      return;
    }
    (this_ptr->base).invincibility_timer = _DAT_005f5128;
    iVar4 = core_actor_cpp_isOfClass_FUN_0040c840(damage_info->wielder,"CBugs");
    if (iVar4 != 0) {
      (this_ptr->base).invincibility_timer = 0.15;
    }
    pCVar3 = g_CGamePtr;
    (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount
    ;
    pCVar2 = g_CConsolePtr;
    if (((pCVar3->auto_use_health != 0) && (0xb < (int)damage_info->damage_type)) &&
       ((this_ptr->base).base.hit_points <= 0.0)) {
      (this_ptr->base).base.hit_points = 0.0;
      engine_console_cpp_FUN_00436710(pCVar2);
      core_inv_cpp_CInventory_autoUseHealthItem_FUN_004df010((this_ptr->base).inventories);
      engine_console_cpp_FUN_00436710
                (g_CConsolePtr,"hit points: %3.2f\n",(double)(this_ptr->base).base.hit_points);
    }
    this_ptr_00 = &(this_ptr->base).base.model;
    if (0.0 < (this_ptr->base).base.hit_points) {
      if (0.0 < damage_info->damage_amount) {
        if (((damage_info->damage_type != DAMAGE_TYPE_ATTACK_GAS) &&
            ((this_ptr->base).ladder_to_climb == (CLadder *)0x0)) &&
           ((this_ptr->ladder_to_descend == (CLadder *)0x0 && (this_ptr->action_pending == 0)))) {
          iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0(damage_info->attacker);
          if (iVar4 == 0) {
            fVar6 = 0.4;
          }
          else {
            fVar6 = 0.333;
          }
          iVar4 = core_actor_cpp_randomChance_FUN_0040d060(fVar6);
          if (iVar4 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      (&this_ptr_00->base,0x26,1);
          }
        }
        iVar4 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handle);
        if (iVar4 == 0) {
          uVar5 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"lazhit0?.wav");
          this_ptr->sfx_handle = uVar5;
        }
      }
    }
    else {
      pCVar1 = (this_ptr->base).base.base.vtable._uc;
      (this_ptr->base).base.hit_points = 0.0;
      (*(pCVar1->_uc).releaseFromGrab)((CCharacter *)this_ptr);
      iVar4 = core_motion_cpp_FUN_005035c0(this_ptr_00);
      if (*(int *)(iVar4 + 0x24) != 0x2b) {
        iVar4 = core_motion_cpp_FUN_005035c0(this_ptr_00);
        if (*(int *)(iVar4 + 0x24) != 0x2a) {
          if (((this_ptr->base).ladder_to_climb == (CLadder *)0x0) &&
             (this_ptr->ladder_to_descend == (CLadder *)0x0)) {
            if (damage_info->damage_type == DAMAGE_TYPE_DROWN) {
              iVar4 = 0x29;
              fVar6 = 1.4013e-45;
            }
            else {
              fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,100.0);
              iVar4 = (fVar6 <= _DAT_005d05ef) + 0x27;
            }
          }
          else {
            fVar6 = 1.4013e-45;
            (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
            iVar4 = 0xf;
            this_ptr->ladder_to_descend = (CLadder *)0x0;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    (&(this_ptr->base).base.model.base,iVar4,(int)fVar6);
          sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
          if (damage_info->damage_type != DAMAGE_TYPE_DROWN) {
            uVar5 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,"lazdeath0?.wav");
            this_ptr->sfx_handle = uVar5;
          }
          core_gore_cpp_CGore_spawnFliesOnActor_FUN_004c9cc0
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
    }
    if (0.0 < damage_info->damage_amount) {
      core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004bb8b0(g_CGamePtr);
    }
    core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0((CCharacter *)this_ptr,damage_info);
  }
  return;
}
