// Name: core_stranger.cpp_CStranger_handleFireButton_FUN_005914a0
// Address: 005914a0
// Address Range: [[005914a0, 005917af]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_handleFireButton_FUN_005914a0(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_handleFireButton_FUN_005914a0(CStranger *this_ptr,float delta_time)

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
  
  *(uint *)&this_ptr->field_0x2000c = 0;
  if (*(int *)&this_ptr->field_0xc1e4 == 0) {
    return;
  }
  if (*(int *)&this_ptr->field_0x26fc != 0) {
    return;
  }
  if (*(int *)&this_ptr->field_0x1ff5c != 0) {
    return;
  }
  if (this_ptr->guns_drawn == 0) {
    return;
  }
  this_ptr_00 = this_ptr->weapon;
  if (this_ptr_00 == (CWeapon *)0x0) {
    this_ptr_00 = *(CWeapon **)&this_ptr->field_0x2628;
LAB_005914fe:
    if ((this_ptr_00 != (CWeapon *)0x0) &&
       (uVar3 = (*((this_ptr_00->base).vtable._ub)->getAllowedMeleeAttackTypes)(&this_ptr_00->base),
       uVar3 != 0)) {
      iVar5 = 0;
      while( true ) {
        iVar8 = *(int *)&this_ptr->field_0x20010 + 1;
        *(int *)&this_ptr->field_0x20010 = iVar8;
        if ((iVar8 < 0) || (1 < iVar8)) {
          *(uint *)&this_ptr->field_0x20010 = 0;
        }
        uVar7 = *(int *)&this_ptr->field_0x20010 + 0xc;
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
      *(uint *)&this_ptr->field_0x2c9c = 0;
      *(uint *)&this_ptr->field_0x1ff5c = 7;
      *(int *)&this_ptr->field_0x2c98 = *(int *)&this_ptr->field_0x20010 + 0xc;
      return;
    }
  }
  else if (this_ptr_00->weapon_type == WEAPON_TYPE_MELEE) goto LAB_005914fe;
  if (this_ptr->weapon == (CWeapon *)0x0) {
    return;
  }
  EVar1 = this_ptr->weapon->weapon_type;
  if (EVar1 == WEAPON_TYPE_DYNAMITE) {
    return;
  }
  if ((*(int *)&this_ptr->field_0x1fae4 == 0) && (EVar1 == WEAPON_TYPE_GUN)) {
    pSVar6 = &this_ptr->right_arm_aim;
    pSVar2 = &this_ptr->left_arm_aim;
    if (*(int *)&this_ptr->field_0x20008 != 0) {
      pSVar2 = pSVar6;
      pSVar6 = &this_ptr->left_arm_aim;
    }
    if ((*(int *)(pSVar2 + 0x1c) == 2) && (*(int *)(pSVar6 + 0x1c) != 2)) {
      *(uint *)&this_ptr->field_0x20008 = (uint)(*(int *)&this_ptr->field_0x20008 == 0);
    }
  }
  if (this_ptr->weapon == (CWeapon *)0x0) {
switchD_0059158d_caseD_3:
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
      goto switchD_0059158d_caseD_3;
    case WEAPON_TYPE_TOMMY_GUN:
      iVar5 = 7;
      break;
    case WEAPON_TYPE_MELEE:
      iVar5 = 8;
      break;
    case WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN:
    case WEAPON_TYPE_BARON|WEAPON_TYPE_LIGHT_GUN:
      iVar5 = 0xe;
    }
  }
  grabber = (CDemonActor *)
            core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                      ((CCharacter *)this_ptr,iVar5);
  if ((float)_DAT_005f70c1 <= (float)grabber) {
    pSVar6 = &this_ptr->right_arm_aim;
    if ((*(int *)&this_ptr->field_0x20008 != 0) &&
       (this_ptr->weapon->weapon_type == WEAPON_TYPE_GUN)) {
      pSVar6 = &this_ptr->left_arm_aim;
    }
    if (((1.0 <= *(float *)(pSVar6 + 0x14)) && (*(float *)(pSVar6 + 0x10) <= 0.0)) &&
       (iVar5 = (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).canBeGrabbed)
                          ((CCharacter *)this_ptr->weapon,grabber,unaff_EDI), iVar5 != 0)) {
      if (this_ptr->weapon->weapon_type == WEAPON_TYPE_GUN) {
        core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0058aeb0
                  (this_ptr,*(int *)&this_ptr->field_0x20008);
        *(uint *)&this_ptr->field_0x20008 = (uint)(*(int *)&this_ptr->field_0x20008 == 0);
      }
      *(uint *)&this_ptr->field_0x2000c = 0;
      iVar5 = (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).isGrabbable)
                        ((CCharacter *)this_ptr->weapon,unaff_EBX);
      if (iVar5 != 0) {
        *(uint *)&this_ptr->field_0x2000c = 1;
      }
      core_stranger_cpp_CStranger_updateWeaponPosition_FUN_0058aeb0(this_ptr,0);
      if (this_ptr->weapon->fire_mode == FIRE_MODE_PUMP) {
        *(uint *)&this_ptr->field_0x2c9c = 0;
        *(uint *)&this_ptr->field_0x2c98 = 8;
        return;
      }
    }
  }
  return;
}
