// Name: core_doc.cpp_CDoc_handleFireButton_FUN_00475920
// Address: 00475920
// Address Range: [[00475920, 00475c08]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_handleFireButton_FUN_00475920(CDoc *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_handleFireButton_FUN_00475920(CDoc *this_ptr,float delta_time)

{
  EWeaponType EVar1;
  CWeapon *this_ptr_00;
  SArmAimData *pSVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  CDemonActor *unaff_EBX;
  SArmAimData *pSVar7;
  int iVar8;
  uint uVar9;
  int unaff_EDI;
  
  iVar6 = (this_ptr->base).player_input.action_state.fire;
  this_ptr->can_grab_weapon = 0;
  if (iVar6 == 0) {
    return;
  }
  if ((this_ptr->base).base.grabbed_by != (CDemonActor *)0x0) {
    return;
  }
  if ((this_ptr->base).action_pending != 0) {
    return;
  }
  if (this_ptr->guns_drawn == 0) {
    return;
  }
  this_ptr_00 = this_ptr->weapon;
  if (this_ptr_00 == (CWeapon *)0x0) {
    this_ptr_00 = (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor;
LAB_0047597e:
    if ((this_ptr_00 != (CWeapon *)0x0) &&
       (uVar4 = (*((this_ptr_00->base).vtable._ub)->getAllowedMeleeAttackTypes)(&this_ptr_00->base),
       uVar4 != 0)) {
      iVar6 = 0;
      do {
        iVar8 = this_ptr->melee_attack_index + 1;
        this_ptr->melee_attack_index = iVar8;
        if ((iVar8 < 0) || (1 < iVar8)) {
          this_ptr->melee_attack_index = 0;
        }
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                           (&this_ptr->weapon->base,g_CWeaponClassInfo.name_hash);
        uVar9 = 0;
        uVar5 = this_ptr->melee_attack_index + 0xc;
        if (0xb < uVar5) {
          if (uVar5 < 0xd) {
            if (pCVar3 == (CDemonActor *)0x0) goto LAB_00475b04;
            if (this_ptr->weapon->ammo_type == AMMO_TYPE_STAGGER) {
              uVar9 = 8;
            }
            else {
              uVar9 = 1;
            }
          }
          else if (uVar5 == 0xd) {
LAB_00475b04:
            uVar9 = 2;
          }
        }
        if ((uVar9 & uVar4) != 0) {
          (this_ptr->base).base.layer_action_t = 0.0;
          iVar6 = this_ptr->melee_attack_index;
          (this_ptr->base).action_pending = 7;
          (this_ptr->base).base.layer_action_index = iVar6 + 0xc;
          return;
        }
        iVar6 = iVar6 + 1;
        if (0x13 < iVar6) {
          return;
        }
      } while( true );
    }
  }
  else if (this_ptr_00->weapon_type == WEAPON_TYPE_MELEE) goto LAB_0047597e;
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
  if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_00475a0b_caseD_3:
    iVar6 = 0;
  }
  else {
    switch(this_ptr->weapon->weapon_type) {
    case WEAPON_TYPE_GUN:
    case WEAPON_TYPE_FLASHLIGHT:
      iVar6 = 2;
      break;
    case WEAPON_TYPE_SHOTGUN:
      iVar6 = 4;
      break;
    case WEAPON_TYPE_LIGHT_GUN:
      iVar6 = 5;
      break;
    default:
      goto switchD_00475a0b_caseD_3;
    case WEAPON_TYPE_TOMMY_GUN:
      iVar6 = 7;
      break;
    case WEAPON_TYPE_MELEE:
      iVar6 = 8;
      break;
    case WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN:
    case WEAPON_TYPE_BARON|WEAPON_TYPE_LIGHT_GUN:
      iVar6 = 0xe;
    }
  }
  pCVar3 = (CDemonActor *)
           core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                     ((CCharacter *)this_ptr,iVar6);
  if (((((float)_DAT_005da5c4 <= (float)pCVar3) &&
       (1.0 <= (this_ptr->right_arm_aim).kickback_factor)) &&
      ((this_ptr->right_arm_aim).recoil_timer <= 0.0)) &&
     (iVar6 = (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).canBeGrabbed)
                        ((CCharacter *)this_ptr->weapon,pCVar3,unaff_EDI), iVar6 != 0)) {
    this_ptr->can_grab_weapon = 0;
    iVar6 = (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).isGrabbable)
                      ((CCharacter *)this_ptr->weapon,unaff_EBX);
    if (iVar6 != 0) {
      this_ptr->can_grab_weapon = 1;
    }
    core_doc_cpp_CDoc_updateWeaponPosition_FUN_0046f610(this_ptr,0);
    if (this_ptr->weapon->fire_mode == (FIRE_MODE_PUMP|FIRE_MODE_SINGLE)) {
      (this_ptr->base).base.layer_action_t = 0.0;
      (this_ptr->base).base.layer_action_index = 0x12;
      return;
    }
  }
  return;
}
