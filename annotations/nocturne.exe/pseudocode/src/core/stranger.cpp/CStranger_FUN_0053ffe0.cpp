// Name: core_stranger.cpp_CStranger_FUN_0053ffe0
// Address: 0053ffe0
// Address Range: [[0053ffe0, 005402e5]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_0053ffe0(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_0053ffe0(CStranger *this_ptr,float delta_time)

{
  EWeaponType EVar1;
  CWeapon *this_ptr_00;
  SArmAimData *pSVar2;
  CDemonActor *grabber;
  uint uVar3;
  uint uVar4;
  int iVar5;
  SArmAimData *pSVar6;
  uint uVar7;
  CDemonActor *unaff_EBX;
  int iVar8;
  int unaff_EDI;
  
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
  if (this_ptr->guns_drawn == 0) {
    return;
  }
  this_ptr_00 = this_ptr->weapon;
  if (this_ptr_00 == (CWeapon *)0x0) {
    this_ptr_00 = (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor;
LAB_0054003e:
    if ((this_ptr_00 != (CWeapon *)0x0) &&
       (uVar3 = (*((this_ptr_00->base).vtable._ub)->getAllowedMeleeAttackTypes)(&this_ptr_00->base),
       uVar3 != 0)) {
      iVar5 = 0;
      while( true ) {
        iVar8 = this_ptr->melee_attack_index + 1;
        this_ptr->melee_attack_index = iVar8;
        if ((iVar8 < 0) || (1 < iVar8)) {
          this_ptr->melee_attack_index = 0;
        }
        uVar7 = this_ptr->melee_attack_index + 0xc;
        uVar4 = 0;
        if (0xb < uVar7) {
          if (uVar7 < 0xd) {
            uVar4 = 1;
          }
          else if (uVar7 == 0xd) {
            uVar4 = 2;
          }
        }
        if ((uVar4 & uVar3) != 0) break;
        iVar5 = iVar5 + 1;
        if (0x13 < iVar5) {
          return;
        }
      }
      (this_ptr->base).base.layer_action_t = 0.0;
      this_ptr->action_pending = 7;
      (this_ptr->base).base.layer_action_index = this_ptr->melee_attack_index + 0xc;
      return;
    }
  }
  else if (this_ptr_00->weapon_type == WEAPON_TYPE_MELEE) goto LAB_0054003e;
  if (this_ptr->weapon == (CWeapon *)0x0) {
    return;
  }
  EVar1 = this_ptr->weapon->weapon_type;
  if (EVar1 == WEAPON_TYPE_DYNAMITE) {
    return;
  }
  if (((this_ptr->base).aim_mode == AIM_MODE_AUTO) && (EVar1 == WEAPON_TYPE_GUN)) {
    pSVar6 = &this_ptr->right_arm_aim;
    pSVar2 = &this_ptr->left_arm_aim;
    if (this_ptr->dual_wield_side != 0) {
      pSVar2 = pSVar6;
      pSVar6 = &this_ptr->left_arm_aim;
    }
    if ((pSVar2->aim_lock_state == 2) && (pSVar6->aim_lock_state != 2)) {
      this_ptr->dual_wield_side = (uint)(this_ptr->dual_wield_side == 0);
    }
  }
  if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_005400cd_caseD_3:
    iVar5 = 0;
  }
  else {
    switch(this_ptr->weapon->weapon_type) {
    case WEAPON_TYPE_GUN:
    case WEAPON_TYPE_FLASHLIGHT:
      iVar5 = 2;
      break;
    case WEAPON_TYPE_SHOTGUN:
      iVar5 = 4;
      break;
    case WEAPON_TYPE_LIGHT_GUN:
      iVar5 = 5;
      break;
    default:
      goto switchD_005400cd_caseD_3;
    case WEAPON_TYPE_TOMMY_GUN:
      iVar5 = 7;
      break;
    case WEAPON_TYPE_MELEE:
      iVar5 = 8;
    }
  }
  grabber = (CDemonActor *)
            core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                      ((CCharacter *)this_ptr,iVar5);
  if ((float)0.98999999999999999 <= (float)grabber) {
    pSVar6 = &this_ptr->right_arm_aim;
    if ((this_ptr->dual_wield_side != 0) && (this_ptr->weapon->weapon_type == WEAPON_TYPE_GUN)) {
      pSVar6 = &this_ptr->left_arm_aim;
    }
    if (((1.0 <= pSVar6->kickback_factor) && (pSVar6->recoil_timer <= 0.0)) &&
       (iVar5 = (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).canBeGrabbed)
                          ((CCharacter *)this_ptr->weapon,grabber,unaff_EDI), iVar5 != 0)) {
      if (this_ptr->weapon->weapon_type == WEAPON_TYPE_GUN) {
        core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660
                  (this_ptr,this_ptr->dual_wield_side);
        this_ptr->dual_wield_side = (uint)(this_ptr->dual_wield_side == 0);
      }
      this_ptr->can_grab_weapon = 0;
      iVar5 = (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).isGrabbable)
                        ((CCharacter *)this_ptr->weapon,unaff_EBX);
      if (iVar5 != 0) {
        this_ptr->can_grab_weapon = 1;
      }
      core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(this_ptr,0);
      if (this_ptr->weapon->fire_mode == 2) {
        (this_ptr->base).base.layer_action_t = 0.0;
        (this_ptr->base).base.layer_action_index = 8;
        return;
      }
    }
  }
  return;
}
