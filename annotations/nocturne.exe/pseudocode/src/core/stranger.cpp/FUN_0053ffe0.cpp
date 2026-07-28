// Name: core_stranger.cpp_FUN_0053ffe0
// Address: 0053ffe0
// Address Range: [[0053ffe0, 005402e5]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_0053ffe0(CStranger *param_1)

#include "nocturne.h"

void core_stranger_cpp_FUN_0053ffe0(CStranger *param_1)

{
  CWeapon *this_ptr;
  SArmAimData *pSVar1;
  _FILE *file_handle;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  SArmAimData *pSVar6;
  uint uVar7;
  int iVar8;
  int *unaff_ESI;
  
  iVar5 = (param_1->base).player_input.action_state.fire;
  param_1->can_grab_weapon = 0;
  if (iVar5 == 0) {
    return;
  }
  if ((param_1->base).base.grabbed_by != (CDemonActor *)0x0) {
    return;
  }
  if (param_1->action_pending != 0) {
    return;
  }
  if (param_1->guns_drawn == 0) {
    return;
  }
  this_ptr = param_1->weapon;
  if (this_ptr == (CWeapon *)0x0) {
    this_ptr = (CWeapon *)(param_1->base).base.carry_hands[1].carry_actor;
LAB_0054003e:
    if ((this_ptr != (CWeapon *)0x0) &&
       (uVar2 = (*((this_ptr->base).vtable._ub)->getAllowedMeleeAttackTypes)(&this_ptr->base),
       uVar2 != 0)) {
      iVar5 = 0;
      while( true ) {
        iVar8 = param_1->melee_attack_index + 1;
        param_1->melee_attack_index = iVar8;
        if ((iVar8 < 0) || (1 < iVar8)) {
          param_1->melee_attack_index = 0;
        }
        uVar7 = param_1->melee_attack_index + 0xc;
        uVar3 = 0;
        if (0xb < uVar7) {
          if (uVar7 < 0xd) {
            uVar3 = 1;
          }
          else if (uVar7 == 0xd) {
            uVar3 = 2;
          }
        }
        if ((uVar3 & uVar2) != 0) break;
        iVar5 = iVar5 + 1;
        if (0x13 < iVar5) {
          return;
        }
      }
      (param_1->base).base.layer_action_t = 0.0;
      param_1->action_pending = 7;
      (param_1->base).base.layer_action_index = param_1->melee_attack_index + 0xc;
      return;
    }
  }
  else if (this_ptr->weapon_type == 7) goto LAB_0054003e;
  if (param_1->weapon == (CWeapon *)0x0) {
    return;
  }
  iVar5 = param_1->weapon->weapon_type;
  if (iVar5 == 3) {
    return;
  }
  if (((param_1->base).aim_mode == AIM_MODE_AUTO) && (iVar5 == 0)) {
    pSVar6 = &param_1->right_arm_aim;
    pSVar1 = &param_1->left_arm_aim;
    if (param_1->dual_wield_side != 0) {
      pSVar1 = pSVar6;
      pSVar6 = &param_1->left_arm_aim;
    }
    if ((pSVar1->aim_lock_state == 2) && (pSVar6->aim_lock_state != 2)) {
      param_1->dual_wield_side = (uint)(param_1->dual_wield_side == 0);
    }
  }
  if (param_1->weapon == (CWeapon *)0x0) {
switchD_005400cd_caseD_3:
    uVar4 = 0;
  }
  else {
    switch(param_1->weapon->weapon_type) {
    case 0:
    case 5:
      uVar4 = 2;
      break;
    case 1:
      uVar4 = 4;
      break;
    case 2:
      uVar4 = 5;
      break;
    default:
      goto switchD_005400cd_caseD_3;
    case 4:
      uVar4 = 7;
      break;
    case 7:
      uVar4 = 8;
    }
  }
  file_handle = (_FILE *)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                                   (param_1,uVar4);
  if ((float)0.98999999999999999 <= (float)file_handle) {
    pSVar6 = &param_1->right_arm_aim;
    if ((param_1->dual_wield_side != 0) && (param_1->weapon->weapon_type == 0)) {
      pSVar6 = &param_1->left_arm_aim;
    }
    if (((1.0 <= pSVar6->kickback_factor) && (pSVar6->recoil_timer <= 0.0)) &&
       (iVar5 = (*((param_1->weapon->base).vtable._ub)->addFilesToExtract)
                          (&param_1->weapon->base,file_handle), iVar5 != 0)) {
      if (param_1->weapon->weapon_type == 0) {
        core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660
                  (param_1,param_1->dual_wield_side);
        param_1->dual_wield_side = (uint)(param_1->dual_wield_side == 0);
      }
      param_1->can_grab_weapon = 0;
      iVar5 = (*((param_1->weapon->base).vtable._ub)->showEditorHelp)
                        (&param_1->weapon->base,unaff_ESI);
      if (iVar5 != 0) {
        param_1->can_grab_weapon = 1;
      }
      core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0053a660(param_1,0);
      if (param_1->weapon->fire_mode == 2) {
        (param_1->base).base.layer_action_t = 0.0;
        (param_1->base).base.layer_action_index = 8;
        return;
      }
    }
  }
  return;
}
