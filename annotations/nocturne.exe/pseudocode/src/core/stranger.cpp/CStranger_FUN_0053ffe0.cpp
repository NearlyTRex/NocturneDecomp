// Name: core_stranger.cpp_CStranger_FUN_0053ffe0
// Address: 0053ffe0
// Address Range: [[0053ffe0, 005402e5]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_0053ffe0(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_0053ffe0(CStranger *this_ptr,float delta_time)

{
  CWeapon *this_ptr_00;
  SArmAimData *pSVar1;
  CDemonActor *grabber;
  uint uVar2;
  uint uVar3;
  int iVar4;
  SArmAimData *pSVar5;
  uint uVar6;
  CDemonActor *unaff_EBX;
  int iVar7;
  int unaff_EDI;
  
  iVar4 = (this_ptr->base).player_input.action_state.fire;
  this_ptr->can_grab_weapon = 0;
  if (iVar4 == 0) {
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
       (uVar2 = (*((this_ptr_00->base).vtable._ub)->getAllowedMeleeAttackTypes)(&this_ptr_00->base),
       uVar2 != 0)) {
      iVar4 = 0;
      while( true ) {
        iVar7 = this_ptr->melee_attack_index + 1;
        this_ptr->melee_attack_index = iVar7;
        if ((iVar7 < 0) || (1 < iVar7)) {
          this_ptr->melee_attack_index = 0;
        }
        uVar6 = this_ptr->melee_attack_index + 0xc;
        uVar3 = 0;
        if (0xb < uVar6) {
          if (uVar6 < 0xd) {
            uVar3 = 1;
          }
          else if (uVar6 == 0xd) {
            uVar3 = 2;
          }
        }
        if ((uVar3 & uVar2) != 0) break;
        iVar4 = iVar4 + 1;
        if (0x13 < iVar4) {
          return;
        }
      }
      (this_ptr->base).base.layer_action_t = 0.0;
      this_ptr->action_pending = 7;
      (this_ptr->base).base.layer_action_index = this_ptr->melee_attack_index + 0xc;
      return;
    }
  }
  else if (this_ptr_00->weapon_type == 7) goto LAB_0054003e;
  if (this_ptr->weapon == (CWeapon *)0x0) {
    return;
  }
  iVar4 = this_ptr->weapon->weapon_type;
  if (iVar4 == 3) {
    return;
  }
  if (((this_ptr->base).aim_mode == AIM_MODE_AUTO) && (iVar4 == 0)) {
    pSVar5 = &this_ptr->right_arm_aim;
    pSVar1 = &this_ptr->left_arm_aim;
    if (this_ptr->dual_wield_side != 0) {
      pSVar1 = pSVar5;
      pSVar5 = &this_ptr->left_arm_aim;
    }
    if ((pSVar1->aim_lock_state == 2) && (pSVar5->aim_lock_state != 2)) {
      this_ptr->dual_wield_side = (uint)(this_ptr->dual_wield_side == 0);
    }
  }
  if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_005400cd_caseD_3:
    iVar4 = 0;
  }
  else {
    switch(this_ptr->weapon->weapon_type) {
    case 0:
    case 5:
      iVar4 = 2;
      break;
    case 1:
      iVar4 = 4;
      break;
    case 2:
      iVar4 = 5;
      break;
    default:
      goto switchD_005400cd_caseD_3;
    case 4:
      iVar4 = 7;
      break;
    case 7:
      iVar4 = 8;
    }
  }
  grabber = (CDemonActor *)
            core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                      ((CCharacter *)this_ptr,iVar4);
  if ((float)0.98999999999999999 <= (float)grabber) {
    pSVar5 = &this_ptr->right_arm_aim;
    if ((this_ptr->dual_wield_side != 0) && (this_ptr->weapon->weapon_type == 0)) {
      pSVar5 = &this_ptr->left_arm_aim;
    }
    if (((1.0 <= pSVar5->kickback_factor) && (pSVar5->recoil_timer <= 0.0)) &&
       (iVar4 = (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).canBeGrabbed)
                          ((CCharacter *)this_ptr->weapon,grabber,unaff_EDI), iVar4 != 0)) {
      if (this_ptr->weapon->weapon_type == 0) {
        core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660
                  (this_ptr,this_ptr->dual_wield_side);
        this_ptr->dual_wield_side = (uint)(this_ptr->dual_wield_side == 0);
      }
      this_ptr->can_grab_weapon = 0;
      iVar4 = (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).isGrabbable)
                        ((CCharacter *)this_ptr->weapon,unaff_EBX);
      if (iVar4 != 0) {
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
