// Name: core_stranger.cpp_CStranger_processDamage_FUN_0053e860
// Address: 0053e860
// Address Range: [[0053e860, 0053ecba]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_processDamage_FUN_0053e860(CStranger *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_processDamage_FUN_0053e860(CStranger *this_ptr,SDamageInfo *damage_info)

{
  CDeformableModelInstance *this_ptr_00;
  CCharacter_full_vtable *pCVar1;
  CConsole *this_ptr_01;
  CGame *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  SMotion *pSVar5;
  uint uVar6;
  CDemonActor *pCVar7;
  float fVar8;
  CVector3f local_28;
  float local_1c;
  float local_18;
  float local_14;
  
  if (g_CGame_PTR_005b9354->god_mode_enabled != 0) {
    damage_info->damage_amount = 0.0;
  }
  if (g_CGame_PTR_005b9354->allow_damage_flag == 0) {
    damage_info->damage_amount = 0.0;
  }
  core_hero_cpp_CHero_stopNearbyInteraction_FUN_004b5920(&this_ptr->base);
  if ((0.0 < (this_ptr->base).invincibility_timer) && (0xb < (int)damage_info->damage_type)) {
    damage_info->damage_amount = 0.0;
    return;
  }
  (this_ptr->base).invincibility_timer = 2.0f;
  iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0(damage_info->wielder,"CBugs");
  if (iVar3 != 0) {
    (this_ptr->base).invincibility_timer = 0.15;
  }
  pCVar2 = g_CGame_PTR_005b9354;
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  this_ptr_01 = g_CConsole_PTR_005ad350;
  if (((pCVar2->auto_use_health != 0) && (0xb < (int)damage_info->damage_type)) &&
     ((this_ptr->base).base.hit_points <= 0.0)) {
    (this_ptr->base).base.hit_points = 0.0;
    engine_console_cpp_CConsole_printf_FUN_0043ac60(this_ptr_01,"Using auto health\n");
    core_inv_cpp_CInventory_autoUseHealthItem_FUN_004c3350(&(this_ptr->base).inventory);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"hit points: %3.2f\n");
  }
  local_28.y = 0.0;
  local_28.z = 1.0;
  local_28.x = 0.0;
  if (damage_info->attacker != (CDemonActor *)0x0) {
    pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                       ((CDemonActor *)this_ptr,(CVector3f *)&stack0xffffffcc,
                        &(damage_info->attacker->location).position);
    if (&local_28 != pCVar4) {
      local_28.x = pCVar4->x;
      local_28.z = pCVar4->z;
    }
    local_1c = SQRT(local_28.z * local_28.z + local_28.x * local_28.x);
    local_28.y = 0.0;
    if (local_1c <= 0.0) {
      local_28.x = 0.0;
      local_28.z = 0.0;
    }
    else {
      fVar8 = 1.0 / local_1c;
      local_28.x = local_28.x * fVar8;
      local_28.y = fVar8 * 0.0;
      local_28.z = local_28.z * fVar8;
    }
  }
  local_18 = damage_info->damage_amount * (float)0.050000000000000003;
  if (local_18 < (float)0.75) {
    local_18 = 0.75;
  }
  if (1.0 < local_18) {
    local_18 = 1.0;
  }
  local_28.x = local_28.x * local_18;
  local_28.y = local_28.y * local_18;
  local_28.z = local_28.z * local_18;
  xxx_unk_c_FUN_004940d0(PTR_DAT_005b9284,local_28.x);
  this_ptr_00 = &(this_ptr->base).base.model;
  if ((this_ptr->base).base.hit_points <= 0.0) {
    pCVar1 = (this_ptr->base).base.base.vtable._uc;
    (this_ptr->base).base.hit_points = 0.0;
    (*(pCVar1->_uc).releaseFromGrab)((CCharacter *)this_ptr);
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&this_ptr_00->motion_controller);
    if (pSVar5->state_index != 0x29) {
      pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                         (&this_ptr_00->motion_controller);
      if (pSVar5->state_index != 0x28) {
        if (((this_ptr->base).ladder_to_climb == (CLadder *)0x0) &&
           (this_ptr->ladder_to_descend == (CLadder *)0x0)) {
          if (damage_info->damage_type == DAMAGE_TYPE_DROWN) {
            iVar3 = 0x27;
            fVar8 = 1.4013e-45;
          }
          else {
            fVar8 = 1.4013e-45;
            local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,100.0);
            iVar3 = (local_14 <= 50.0f) + 0x25;
          }
        }
        else {
          fVar8 = 1.4013e-45;
          (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
          iVar3 = 0xf;
          this_ptr->ladder_to_descend = (CLadder *)0x0;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&(this_ptr->base).base.model.motion_controller,iVar3,(int)fVar8);
        sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handle);
        if (damage_info->damage_type != DAMAGE_TYPE_DROWN) {
          uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                            ((CDemonActor *)this_ptr,"stranger_die??.wav");
          this_ptr->sfx_handle = uVar6;
        }
        core_gore_cpp_CGore_spawnFliesOnActor_FUN_004b0670
                  (g_CGore_PTR_005b96c4,(CDemonActor *)this_ptr,0x32,50.0,(CVector3f *)0x0);
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
    goto LAB_0053eb7b;
  }
  if (damage_info->damage_amount <= 0.0) goto LAB_0053eb7b;
  if (((damage_info->damage_type != DAMAGE_TYPE_NO_FLINCH) &&
      ((this_ptr->base).ladder_to_climb == (CLadder *)0x0)) &&
     ((this_ptr->ladder_to_descend == (CLadder *)0x0 && (this_ptr->action_pending == 0)))) {
    pCVar7 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (damage_info->attacker,g_CTommyGunActorType_02dd0fd0.name_hash);
    if (pCVar7 != (CDemonActor *)0x0) {
      iVar3 = core_actor_cpp_randomChance_FUN_0040dea0(0.333);
      if (iVar3 == 0) goto LAB_0053ec87;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
              (&this_ptr_00->motion_controller,0x24,1);
  }
LAB_0053ec87:
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(this_ptr->sfx_handle);
  if (iVar3 == 0) {
    uVar6 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                      ((CDemonActor *)this_ptr,"stranger_hit??.wav");
    this_ptr->sfx_handle = uVar6;
  }
LAB_0053eb7b:
  if (0.0 < damage_info->damage_amount) {
    core_game_cpp_CGame_FUN_004a3a90(g_CGame_PTR_005b9354);
  }
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510((CCharacter *)this_ptr,damage_info);
  return;
}
