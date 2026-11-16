// Name: core_doc.cpp_CDoc_handleFireButton_FUN_0045d2c0
// Address: 0045d2c0
// Address Range: [[0045d2c0, 0045d6b2]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_handleFireButton_FUN_0045d2c0(CDoc *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_handleFireButton_FUN_0045d2c0(CDoc *this_ptr,float delta_time)

{
  EWeaponType EVar1;
  CSound *this_ptr_00;
  SArmAimData *pSVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  CDemonActor *pCVar6;
  SArmAimData *pSVar7;
  CAmmo *this_ptr_01;
  CWeapon *this_ptr_02;
  int iVar8;
  CInventory *pCVar9;
  CDemonActor *unaff_EDI;
  uint uVar10;
  CDemonActor *in_stack_ffffffe8;
  CInventory *pCVar11;
  
  iVar5 = (this_ptr->base).player_input.action_state.fire;
  this_ptr->can_grab_weapon = 0;
  if (iVar5 == 0) {
    return;
  }
  if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
    return;
  }
  if (this_ptr->action_pending != 0) {
    return;
  }
  if ((iVar5 != 0) && (this_ptr->guns_drawn == 0)) {
    return;
  }
  this_ptr_02 = this_ptr->weapon;
  if (this_ptr_02 == (CWeapon *)0x0) {
    this_ptr_02 = (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor;
LAB_0045d323:
    if ((this_ptr_02 != (CWeapon *)0x0) &&
       (iVar5 = (*((this_ptr_02->base).vtable._ub)->getAllowedMeleeAttackTypes)(&this_ptr_02->base),
       iVar5 != 0)) {
      uVar10 = g_CWeaponClassInfo.name_hash;
      pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (&this_ptr_02->base,g_CWeaponClassInfo.name_hash);
      if (pCVar6 == (CDemonActor *)0x0) {
        return;
      }
      if (pCVar6[1].particle_systems[0].stop_after_fade == 6) {
        iVar5 = 0;
        do {
          iVar8 = this_ptr->melee_attack_index + 1;
          this_ptr->melee_attack_index = iVar8;
          if ((iVar8 < 0) || (1 < iVar8)) {
            this_ptr->melee_attack_index = 0;
          }
          uVar4 = this_ptr->melee_attack_index + 4;
          if (uVar4 < 5) {
            if (uVar4 == 4) {
LAB_0045d483:
              if (uVar10 != 0) {
                (this_ptr->base).base.layer_action_index = this_ptr->melee_attack_index + 4;
                this_ptr_00 = 0x0264B290;
                (this_ptr->base).base.layer_action_t = 0.0;
                this_ptr->action_pending = 7;
                core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                          (this_ptr_00,(CDemonActor *)this_ptr,"?swordswing0?.wav" + 1,
                           &(this_ptr->base).base.base.location.position);
                return;
              }
            }
          }
          else if ((uVar4 < 6) || (uVar4 == 6)) goto LAB_0045d483;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x14);
      }
      iVar5 = pCVar6[1].particle_systems[0].stop_after_fade;
      if (iVar5 == 8) {
        (this_ptr->base).base.layer_action_t = 0.0;
        this_ptr->action_pending = 7;
        (this_ptr->base).base.layer_action_index = 7;
        return;
      }
      if (iVar5 != 0xd) {
        return;
      }
      (this_ptr->base).base.layer_action_t = 0.0;
      this_ptr->action_pending = 7;
      (this_ptr->base).base.layer_action_index = 8;
      return;
    }
  }
  else {
    EVar1 = this_ptr_02->weapon_type;
    if ((((EVar1 == WEAPON_TYPE_MELEE) || (EVar1 == WEAPON_TYPE_UNUSED)) ||
        (EVar1 == WEAPON_TYPE_BARON)) || (EVar1 == (WEAPON_TYPE_BARON|WEAPON_TYPE_FLASHLIGHT)))
    goto LAB_0045d323;
  }
  if (this_ptr->weapon == (CWeapon *)0x0) {
    return;
  }
  EVar1 = this_ptr->weapon->weapon_type;
  if (EVar1 == WEAPON_TYPE_DYNAMITE) {
    return;
  }
  if (((this_ptr->base).aim_mode == AIM_MODE_AUTO) && (EVar1 == WEAPON_TYPE_GUN)) {
    pSVar7 = &this_ptr->right_arm_aim;
    pSVar2 = &this_ptr->left_arm_aim;
    if (this_ptr->dual_wield_side != 0) {
      pSVar2 = pSVar7;
      pSVar7 = &this_ptr->left_arm_aim;
    }
    if ((pSVar2->aim_lock_state == 2) && (pSVar7->aim_lock_state != 2)) {
      this_ptr->dual_wield_side = (uint)(this_ptr->dual_wield_side == 0);
    }
  }
  this_ptr->dual_wield_side = 1;
  if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_0045d3bc_caseD_3:
    iVar5 = 0;
  }
  else {
    switch(this_ptr->weapon->weapon_type) {
    case WEAPON_TYPE_GUN:
    case WEAPON_TYPE_FLASHLIGHT:
      iVar5 = 2;
      break;
    case WEAPON_TYPE_SHOTGUN:
      iVar5 = 0xb;
      break;
    case WEAPON_TYPE_LIGHT_GUN:
      iVar5 = 9;
      break;
    default:
      goto switchD_0045d3bc_caseD_3;
    case WEAPON_TYPE_TOMMY_GUN:
      iVar5 = 10;
      break;
    case WEAPON_TYPE_UNUSED:
    case WEAPON_TYPE_MELEE:
    case WEAPON_TYPE_BARON:
    case WEAPON_TYPE_BARON|WEAPON_TYPE_FLASHLIGHT:
      iVar5 = 6;
      break;
    case WEAPON_TYPE_BARON|WEAPON_TYPE_LIGHT_GUN:
    case WEAPON_TYPE_BARON|WEAPON_TYPE_DYNAMITE:
      iVar5 = 0xe;
    }
  }
  fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                    ((CCharacter *)this_ptr,iVar5);
  if (((((float)_DAT_005d07f7 <= fVar3) &&
       (fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                          ((CCharacter *)this_ptr,0x12), fVar3 <= (float)_DAT_005d07ff)) &&
      (1.0 <= (this_ptr->left_arm_aim).kickback_factor)) &&
     (((this_ptr->left_arm_aim).recoil_timer <= 0.0 &&
      (iVar5 = (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).canBeGrabbed)
                         ((CCharacter *)this_ptr->weapon,in_stack_ffffffe8,(int)fVar3), iVar5 != 0))
     )) {
    this_ptr->can_grab_weapon = 0;
    iVar5 = (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).isGrabbable)
                      ((CCharacter *)this_ptr->weapon,unaff_EDI);
    if (iVar5 != 0) {
      this_ptr->can_grab_weapon = 1;
      return;
    }
    pCVar9 = (this_ptr->base).inventories;
    this_ptr_01 = (CAmmo *)0x0;
    pCVar11 = pCVar9;
    for (iVar5 = 0; iVar5 < pCVar11->item_count; iVar5 = iVar5 + 1) {
      if (pCVar11->current_group == pCVar9->item_groups[0]) {
        pCVar6 = pCVar9->items[0];
      }
      else {
        pCVar6 = (CDemonActor *)0x0;
      }
      this_ptr_01 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                       (pCVar6,g_CAmmoClassInfo.name_hash);
      if (this_ptr_01 != (CAmmo *)0x0) break;
      pCVar9 = (CInventory *)&pCVar9->owner;
    }
    if ((this_ptr_01 != (CAmmo *)0x0) &&
       (iVar5 = core_ammo_cpp_CAmmo_consumeForReload_FUN_0040e450(this_ptr_01,this_ptr), iVar5 != 0)
       ) {
      this_ptr->weapon->ammo_count = 6;
      (this_ptr->base).base.layer_action_index = 0xf;
      (this_ptr->base).base.layer_action_t = 0.0;
      return;
    }
  }
  return;
}
