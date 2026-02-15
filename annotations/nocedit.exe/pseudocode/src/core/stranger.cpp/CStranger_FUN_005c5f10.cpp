// Name: core_stranger.cpp_CStranger_FUN_005c5f10
// Address: 005c5f10
// Address Range: [[005c5f10, 005c6215]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c5f10(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c5f10(CStranger *this_ptr)

{
  float fVar1;
  char *pcVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int unaff_EDI;
  
  iVar6 = (this_ptr->base).player_control.action_states[3];
  this_ptr->unk7 = 0;
  if (iVar6 == 0) {
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
  pCVar3 = this_ptr->weapon;
  if (pCVar3 == (CDemonActor *)0x0) {
    pCVar3 = (this_ptr->base).base.carry_hands[1].carry_actor;
LAB_005c5f6e:
    if ((pCVar3 != (CDemonActor *)0x0) &&
       (uVar4 = (*((pCVar3->vtable)._ub)->getAllowedMeleeAttackTypes)(pCVar3), uVar4 != 0)) {
      iVar6 = 0;
      while( true ) {
        iVar9 = this_ptr->melee_attack_index + 1;
        this_ptr->melee_attack_index = iVar9;
        if ((iVar9 < 0) || (1 < iVar9)) {
          this_ptr->melee_attack_index = 0;
        }
        uVar8 = this_ptr->melee_attack_index + 0xc;
        uVar5 = 0;
        if (0xb < uVar8) {
          if (uVar8 < 0xd) {
            uVar5 = 1;
          }
          else if (uVar8 == 0xd) {
            uVar5 = 2;
          }
        }
        if ((uVar5 & uVar4) != 0) break;
        iVar6 = iVar6 + 1;
        if (0x13 < iVar6) {
          return;
        }
      }
      (this_ptr->base).base.layer_action_t = 0.0;
      this_ptr->action_pending = 7;
      (this_ptr->base).base.layer_action_index = this_ptr->melee_attack_index + 0xc;
      return;
    }
  }
  else if (pCVar3[2].orient.vec.x == 9.80909e-45) goto LAB_005c5f6e;
  if (this_ptr->weapon == (CDemonActor *)0x0) {
    return;
  }
  fVar1 = this_ptr->weapon[2].orient.vec.x;
  if (fVar1 == 4.2039e-45) {
    return;
  }
  if (((this_ptr->base).aim_mode == 0) && (fVar1 == 0.0)) {
    pcVar7 = this_ptr->unk1 + 0x10;
    pcVar2 = this_ptr->unk3 + 4;
    if (this_ptr->unk6 != 0) {
      pcVar2 = pcVar7;
      pcVar7 = this_ptr->unk3 + 4;
    }
    if ((*(int *)(pcVar2 + 0x1c) == 2) && (*(int *)(pcVar7 + 0x1c) != 2)) {
      this_ptr->unk6 = (uint)(this_ptr->unk6 == 0);
    }
  }
  if (this_ptr->weapon == (CDemonActor *)0x0) {
switchD_005c5ffd_caseD_8:
    iVar6 = 0;
  }
  else {
    switch(this_ptr->weapon[2].orient.vec.x) {
    case 0.0:
    case 7.00649e-45:
      iVar6 = 2;
      break;
    case 1.4013e-45:
      iVar6 = 4;
      break;
    case 2.8026e-45:
      iVar6 = 5;
      break;
    default:
      goto switchD_005c5ffd_caseD_8;
    case 5.60519e-45:
      iVar6 = 7;
      break;
    case 9.80909e-45:
      iVar6 = 8;
    }
  }
  pCVar3 = (CDemonActor *)
           core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                     ((CCharacter *)this_ptr,iVar6);
  if ((float)0.98999999999999999 <= (float)pCVar3) {
    pcVar7 = this_ptr->unk1 + 0x10;
    if ((this_ptr->unk6 != 0) && (this_ptr->weapon[2].orient.vec.x == 0.0)) {
      pcVar7 = this_ptr->unk3 + 4;
    }
    if (((1.0 <= *(float *)(pcVar7 + 0x14)) && (*(float *)(pcVar7 + 0x10) <= 0.0)) &&
       (iVar6 = (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).canBeGrabbed)
                          ((CCharacter *)this_ptr->weapon,pCVar3,unaff_EDI), iVar6 != 0)) {
      if (this_ptr->weapon[2].orient.vec.x == 0.0) {
        core_stranger_cpp_CStranger_FUN_005c06b0(this_ptr);
        this_ptr->unk6 = (uint)(this_ptr->unk6 == 0);
      }
      this_ptr->unk7 = 0;
      iVar6 = (*(((((CCharacter *)this_ptr->weapon)->base).vtable._uc)->_uc).isGrabbable)
                        ((CCharacter *)this_ptr->weapon);
      if (iVar6 != 0) {
        this_ptr->unk7 = 1;
      }
      core_stranger_cpp_CStranger_FUN_005c06b0(this_ptr);
      if (this_ptr->weapon[2].location.area_id == 2) {
        (this_ptr->base).base.layer_action_t = 0.0;
        (this_ptr->base).base.layer_action_index = 8;
        return;
      }
    }
  }
  return;
}
