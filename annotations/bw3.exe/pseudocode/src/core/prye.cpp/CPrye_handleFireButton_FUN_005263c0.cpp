// Name: core_prye.cpp_CPrye_handleFireButton_FUN_005263c0
// Address: 005263c0
// Address Range: [[005263c0, 005267a1]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_handleFireButton_FUN_005263c0(CPrye *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_handleFireButton_FUN_005263c0(CPrye *this_ptr,float delta_time)

{
  EWeaponType EVar1;
  CCharacter *this_ptr_00;
  float fVar2;
  CDemonActor_vtable *pCVar3;
  CWeapon *this_ptr_01;
  CDemonActor *pCVar4;
  uint uVar5;
  int iVar6;
  CDemonActor *unaff_EBX;
  uint uVar7;
  int unaff_EDI;
  int iVar8;
  
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
  this_ptr_01 = this_ptr->weapon;
  if (this_ptr_01 == (CWeapon *)0x0) {
    this_ptr_01 = (CWeapon *)(this_ptr->base).base.carry_hands[1].carry_actor;
  }
  else if (this_ptr_01->weapon_type != WEAPON_TYPE_MELEE) goto LAB_00526426;
  if ((this_ptr_01 != (CWeapon *)0x0) &&
     (uVar5 = (*((this_ptr_01->base).vtable._ub)->getAllowedMeleeAttackTypes)(&this_ptr_01->base),
     uVar5 != 0)) {
    iVar8 = 0;
    iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
    this_ptr->melee_attack_index = iVar6;
    do {
      iVar6 = this_ptr->melee_attack_index + 1;
      this_ptr->melee_attack_index = iVar6;
      if ((iVar6 < 0) || (2 < iVar6)) {
        this_ptr->melee_attack_index = 0;
      }
      pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (&this_ptr->weapon->base,g_CWeaponClassInfo.name_hash);
      uVar7 = 0;
      switch(this_ptr->melee_attack_index) {
      case 0:
      case 1:
      case 2:
      case 3:
switchD_005265a3_caseD_0:
        uVar7 = 2;
        break;
      case -1:
        if (pCVar4 == (CDemonActor *)0x0) goto switchD_005265a3_caseD_0;
        if (this_ptr->weapon->ammo_type == AMMO_TYPE_STAGGER) {
          uVar7 = 8;
        }
        else {
          uVar7 = 1;
        }
      }
      if ((uVar7 & uVar5) != 0) {
        iVar6 = this_ptr->melee_attack_index;
        (this_ptr->base).base.layer_action_t = 0.0;
        (this_ptr->base).base.layer_action_index = iVar6 + 0xd;
        pCVar3 = (this_ptr->base).base.base.vtable._ub;
        (this_ptr->base).action_pending = 7;
        (*pCVar3->playSound)((CDemonActor *)this_ptr,"?wp_holystaff.wav" + 1);
        return;
      }
      iVar8 = iVar8 + 1;
      if (0x13 < iVar8) {
        return;
      }
    } while( true );
  }
LAB_00526426:
  if ((this_ptr->weapon != (CWeapon *)0x0) &&
     (EVar1 = this_ptr->weapon->weapon_type, EVar1 != WEAPON_TYPE_DYNAMITE)) {
    switch(EVar1) {
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
      iVar6 = 0;
      break;
    case WEAPON_TYPE_TOMMY_GUN:
      iVar6 = 7;
      break;
    case WEAPON_TYPE_MELEE:
    case WEAPON_TYPE_BARON|WEAPON_TYPE_TOMMY_GUN:
      iVar6 = 8;
      break;
    case WEAPON_TYPE_BARON:
      iVar6 = 0;
      break;
    case WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN:
    case WEAPON_TYPE_BARON|WEAPON_TYPE_LIGHT_GUN:
      iVar6 = 0xe;
      break;
    case WEAPON_TYPE_BARON|WEAPON_TYPE_FLASHLIGHT:
      iVar6 = 0x11;
      break;
    case WEAPON_TYPE_BARON|WEAPON_TYPE_UNUSED:
      iVar6 = 0x12;
    }
    pCVar4 = (CDemonActor *)
             core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
                       ((CCharacter *)this_ptr,iVar6);
    if ((((float)_DAT_005cd987 <= (float)pCVar4) &&
        (1.0 <= (this_ptr->right_arm_aim).kickback_factor)) &&
       ((this_ptr->right_arm_aim).recoil_timer <= 0.0)) {
      if (0.0 < (this_ptr->base).base.bind_time) {
        if ((this_ptr->base).base.bind_type == 4) {
          (this_ptr->base).staff_blocked = 1;
        }
      }
      else {
        (this_ptr->base).staff_blocked = 0;
      }
      iVar6 = (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).canBeGrabbed)
                        ((CCharacter *)this_ptr->weapon,pCVar4,unaff_EDI);
      if (iVar6 != 0) {
        this_ptr_00 = (CCharacter *)this_ptr->weapon;
        fVar2 = (this_ptr_00->model).bone_origins[0x19].y;
        if (fVar2 == 1.68156e-44) {
          pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                             ((CDemonActor *)this_ptr_00,g_CLightStaffClassInfo.name_hash);
          if (pCVar4 != (CDemonActor *)0x0) {
            (this_ptr->base).base.layer_action_t = 0.0;
            (this_ptr->base).action_pending = 10;
            (this_ptr->base).base.layer_action_index = 0x1c;
            return;
          }
          pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c840
                             (&this_ptr->weapon->base,g_CFirestaffClassInfo.name_hash);
          if (pCVar4 != (CDemonActor *)0x0) {
            (this_ptr->base).base.layer_action_t = 0.0;
            (this_ptr->base).action_pending = 0xb;
            (this_ptr->base).base.layer_action_index = 0x1b;
            return;
          }
        }
        else {
          if (fVar2 == 1.82169e-44) {
            (this_ptr->base).base.layer_action_t = 0.0;
            (this_ptr->base).action_pending = 0xc;
            (this_ptr->base).base.layer_action_index = 0x1f;
            return;
          }
          if (fVar2 == 1.96182e-44) {
            (this_ptr->base).base.layer_action_t = 0.0;
            (this_ptr->base).action_pending = 0xd;
            (this_ptr->base).base.layer_action_index = 0x20;
          }
          else {
            (*(((this_ptr_00->base).vtable._uc)->_uc).isGrabbable)(this_ptr_00,unaff_EBX);
            core_prye_cpp_CPrye_updateWeaponPosition_FUN_0051f360(this_ptr,0);
            if (this_ptr->weapon->fire_mode == FIRE_MODE_PUMP) {
              (this_ptr->base).base.layer_action_t = 0.0;
              (this_ptr->base).base.layer_action_index = 8;
            }
            if (this_ptr->weapon->fire_mode == FIRE_MODE_SINGLE) {
              (this_ptr->base).base.layer_action_t = 0.0;
              (this_ptr->base).base.layer_action_index = 0x19;
              return;
            }
          }
        }
      }
    }
  }
  return;
}
