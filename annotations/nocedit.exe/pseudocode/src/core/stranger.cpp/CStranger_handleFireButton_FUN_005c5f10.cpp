// Name: core_stranger.cpp_CStranger_handleFireButton_FUN_005c5f10
// Address: 005c5f10
// Address Range: [[005c5f10, 005c6215]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_handleFireButton_FUN_005c5f10(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_handleFireButton_FUN_005c5f10(CStranger *this_ptr)

{
  CWeapon *this_ptr_00;
  SArmAimData *pSVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  SArmAimData *pSVar6;
  uint uVar7;
  int iVar8;
  
  iVar5 = (this_ptr->base).player_control.action_states[3];
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
LAB_005c5f6e:
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
  else if (this_ptr_00->weapon_type == 7) goto LAB_005c5f6e;
  if (this_ptr->weapon == (CWeapon *)0x0) {
    return;
  }
  iVar5 = this_ptr->weapon->weapon_type;
  if (iVar5 == 3) {
    return;
  }
  if (((this_ptr->base).aim_mode == 0) && (iVar5 == 0)) {
    pSVar6 = &this_ptr->right_arm_aim;
    pSVar1 = &this_ptr->left_arm_aim;
    if (this_ptr->dual_wield_side != 0) {
      pSVar1 = pSVar6;
      pSVar6 = &this_ptr->left_arm_aim;
    }
    if ((pSVar1->aim_lock_state == 2) && (pSVar6->aim_lock_state != 2)) {
      this_ptr->dual_wield_side = (uint)(this_ptr->dual_wield_side == 0);
    }
  }
  if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_005c5ffd_caseD_8:
    iVar5 = 0;
  }
  else {
    switch(this_ptr->weapon->weapon_type) {
    case 0:
    case 5:
      iVar5 = 2;
      break;
    case 1:
      iVar5 = 4;
      break;
    case 2:
      iVar5 = 5;
      break;
    default:
      goto switchD_005c5ffd_caseD_8;
    case 4:
      iVar5 = 7;
      break;
    case 7:
      iVar5 = 8;
    }
  }
  fVar2 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                    ((CCharacter *)this_ptr,iVar5);
  if ((float)0.98999999999999999 <= fVar2) {
    pSVar6 = &this_ptr->right_arm_aim;
    if ((this_ptr->dual_wield_side != 0) && (this_ptr->weapon->weapon_type == 0)) {
      pSVar6 = &this_ptr->left_arm_aim;
    }
    if (((1.0 <= pSVar6->kickback_factor) && (pSVar6->recoil_timer <= 0.0)) &&
       (iVar5 = (*(((this_ptr->weapon->base).vtable._uw)->_uw).isReadyToFire)(this_ptr->weapon),
       iVar5 != 0)) {
      if (this_ptr->weapon->weapon_type == 0) {
        core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005c06b0
                  (this_ptr,this_ptr->dual_wield_side);
        this_ptr->dual_wield_side = (uint)(this_ptr->dual_wield_side == 0);
      }
      this_ptr->can_grab_weapon = 0;
      iVar5 = (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).isGrabbable)
                        ((CCharacter *)this_ptr->weapon);
      if (iVar5 != 0) {
        this_ptr->can_grab_weapon = 1;
      }
      core_stranger_cpp_CStranger_updateWeaponPosition_FUN_005c06b0(this_ptr,0);
      if (this_ptr->weapon->fire_mode == 2) {
        (this_ptr->base).base.layer_action_t = 0.0;
        (this_ptr->base).base.layer_action_index = 8;
        return;
      }
    }
  }
  return;
}
