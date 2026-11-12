// Name: core_prye.cpp_CPrye_processDamage_FUN_00523e50
// Address: 00523e50
// Address Range: [[00523e50, 00524167]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_processDamage_FUN_00523e50(CPrye *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_processDamage_FUN_00523e50(CPrye *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  EDamageType EVar1;
  CCharacter_full_vtable *pCVar2;
  int iVar3;
  SMotion *pSVar4;
  uint uVar5;
  float fVar6;
  CDemonActor *pCVar7;
  int desired_state_index;
  
  if ((this_ptr->base).base.is_invulnerable != 0) {
    return;
  }
  if (g_CGamePtr->god_mode_enabled != 0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    damage_info->damage_amount = 0.0;
  }
  core_hero_cpp_CHero_stopNearbyInteraction_FUN_004d3af0(&this_ptr->base);
  if ((((0.0 < (this_ptr->base).invincibility_timer) &&
       (EVar1 = damage_info->damage_type, 0xb < (int)EVar1)) && (EVar1 != DAMAGE_TYPE_ATTACK_FIRE))
     && ((EVar1 != DAMAGE_TYPE_EXORCISM && (EVar1 != DAMAGE_TYPE_ATTACK_GAS)))) {
    damage_info->damage_amount = 0.0;
    return;
  }
  (this_ptr->base).invincibility_timer = _DAT_005e34f8;
  iVar3 = core_actor_cpp_isOfClass_FUN_0040c790(damage_info->wielder,"CBugs");
  if (iVar3 != 0) {
    (this_ptr->base).invincibility_timer = 0.15;
  }
  fVar6 = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_00 = &(this_ptr->base).base.model;
  (this_ptr->base).base.hit_points = fVar6;
  if (0.0 < fVar6) {
    if (0.0 < damage_info->damage_amount) {
      EVar1 = damage_info->damage_type;
      if ((((EVar1 != DAMAGE_TYPE_ATTACK_GAS) && (EVar1 != DAMAGE_TYPE_EXORCISM)) &&
          ((EVar1 != DAMAGE_TYPE_ATTACK_FIRE &&
           ((((this_ptr->base).ladder_to_climb == (CLadder *)0x0 &&
             (this_ptr->ladder_to_descend == (CLadder *)0x0)) &&
            ((this_ptr->base).action_pending == 0)))))) &&
         ((pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (damage_info->attacker,g_CTommyGunClassInfo.name_hash),
          pCVar7 == (CDemonActor *)0x0 ||
          (iVar3 = core_actor_cpp_randomChance_FUN_0040cf40(0.333), iVar3 != 0)))) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,0x31,1);
      }
      iVar3 = sound_sndmain_cpp_FUN_00556700(this_ptr->sfx_handle);
      if (iVar3 == 0) {
        uVar5 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"prye-pain?.wav");
        this_ptr->sfx_handle = uVar5;
      }
    }
  }
  else {
    pCVar2 = (this_ptr->base).base.base.vtable._uc;
    (this_ptr->base).base.hit_points = 0.0;
    (*(pCVar2->_uc).releaseFromGrab)((CCharacter *)this_ptr);
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
    if ((pSVar4->state_index != 0x36) &&
       (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base)
       , pSVar4->state_index != 0x35)) {
      if (((this_ptr->base).ladder_to_climb == (CLadder *)0x0) &&
         (this_ptr->ladder_to_descend == (CLadder *)0x0)) {
        if (damage_info->damage_type == DAMAGE_TYPE_DROWN) {
          desired_state_index = 0x34;
          iVar3 = 1;
        }
        else {
          iVar3 = 1;
          fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,100.0);
          desired_state_index = (fVar6 <= _DAT_005cd757) + 0x32;
        }
      }
      else {
        iVar3 = 1;
        desired_state_index = 0x1a;
        (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
        this_ptr->ladder_to_descend = (CLadder *)0x0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,desired_state_index,iVar3);
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
      if (damage_info->damage_type != DAMAGE_TYPE_DROWN) {
        uVar5 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"prye-death?.wav");
        this_ptr->sfx_handle = uVar5;
      }
      core_gore_cpp_CGore_spawnFliesOnActor_FUN_004cee30
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
  }
  if (0.0 < damage_info->damage_amount) {
    core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004bd910(g_CGamePtr);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00430d60((CCharacter *)this_ptr,damage_info);
  return;
}
