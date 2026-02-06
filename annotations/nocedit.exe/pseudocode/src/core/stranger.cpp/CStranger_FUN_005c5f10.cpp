// Name: core_stranger.cpp_CStranger_FUN_005c5f10
// Address: 005c5f10
// Address Range: [[005c5f10, 005c6215]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c5f10(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c5f10(CStranger *this_ptr)

{
  CDemonActor *this_ptr_00;
  char *pcVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  
  iVar5 = (this_ptr->base).action_bindings.fire_key;
  this_ptr->unk1[0x5c] = '\0';
  this_ptr->unk1[0x5d] = '\0';
  this_ptr->unk1[0x5e] = '\0';
  this_ptr->unk1[0x5f] = '\0';
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
  this_ptr_00 = *(CDemonActor **)(this_ptr->unk1 + 0x54);
  if (this_ptr_00 == (CDemonActor *)0x0) {
    this_ptr_00 = (this_ptr->base).base.carry_hands[1].carry_actor;
LAB_005c5f6e:
    if ((this_ptr_00 != (CDemonActor *)0x0) &&
       (uVar3 = (*((this_ptr_00->vtable)._ub)->getAllowedMeleeAttackTypes)(this_ptr_00), uVar3 != 0)
       ) {
      iVar5 = 0;
      while( true ) {
        iVar8 = *(int *)this_ptr->unk2 + 1;
        *(int *)this_ptr->unk2 = iVar8;
        if ((iVar8 < 0) || (1 < iVar8)) {
          this_ptr->unk2[0] = '\0';
          this_ptr->unk2[1] = '\0';
          this_ptr->unk2[2] = '\0';
          this_ptr->unk2[3] = '\0';
        }
        uVar7 = *(int *)this_ptr->unk2 + 0xc;
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
      (this_ptr->base).base.field48_0x2a90 = 0;
      this_ptr->action_pending = 7;
      (this_ptr->base).base.field47_0x2a8c = *(int *)this_ptr->unk2 + 0xc;
      return;
    }
  }
  else if (this_ptr_00[2].orient.pitch == 9.80909e-45) goto LAB_005c5f6e;
  if (*(int *)(this_ptr->unk1 + 0x54) == 0) {
    return;
  }
  iVar5 = *(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x2e0);
  if (iVar5 == 3) {
    return;
  }
  if (((this_ptr->base).aim_mode == 0) && (iVar5 == 0)) {
    pcVar6 = this_ptr->unk1 + 0x10;
    pcVar1 = this_ptr->unk1 + 0x30;
    if (*(int *)(this_ptr->unk1 + 0x58) != 0) {
      pcVar1 = pcVar6;
      pcVar6 = this_ptr->unk1 + 0x30;
    }
    if ((*(int *)(pcVar1 + 0x1c) == 2) && (*(int *)(pcVar6 + 0x1c) != 2)) {
      *(uint *)(this_ptr->unk1 + 0x58) = (uint)(*(int *)(this_ptr->unk1 + 0x58) == 0);
    }
  }
  if (*(int *)(this_ptr->unk1 + 0x54) == 0) {
switchD_005c5ffd_caseD_8:
  }
  else {
    switch(*(uint *)(*(int *)(this_ptr->unk1 + 0x54) + 0x2e0)) {
    case 0:
    case 5:
      break;
    case 1:
      break;
    case 2:
      break;
    default:
      goto switchD_005c5ffd_caseD_8;
    case 4:
      break;
    case 7:
    }
  }
  fVar2 = core_charactr_cpp_CCharacter_FUN_0042e840((CCharacter *)this_ptr);
  if ((float)0.98999999999999999 <= fVar2) {
    pcVar6 = this_ptr->unk1 + 0x10;
    if ((*(int *)(this_ptr->unk1 + 0x58) != 0) &&
       (*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x2e0) == 0)) {
      pcVar6 = this_ptr->unk1 + 0x30;
    }
    if (((1.0 <= *(float *)(pcVar6 + 0x14)) && (*(float *)(pcVar6 + 0x10) <= 0.0)) &&
       (iVar5 = (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x154) + 0xfc))(),
       iVar5 != 0)) {
      if (*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x2e0) == 0) {
        core_stranger_cpp_CStranger_FUN_005c06b0(this_ptr);
        *(uint *)(this_ptr->unk1 + 0x58) = (uint)(*(int *)(this_ptr->unk1 + 0x58) == 0);
      }
      iVar5 = *(int *)(this_ptr->unk1 + 0x54);
      this_ptr->unk1[0x5c] = '\0';
      this_ptr->unk1[0x5d] = '\0';
      this_ptr->unk1[0x5e] = '\0';
      this_ptr->unk1[0x5f] = '\0';
      iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0xf8))();
      if (iVar5 != 0) {
        this_ptr->unk1[0x5c] = '\x01';
        this_ptr->unk1[0x5d] = '\0';
        this_ptr->unk1[0x5e] = '\0';
        this_ptr->unk1[0x5f] = '\0';
      }
      core_stranger_cpp_CStranger_FUN_005c06b0(this_ptr);
      if (*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x2dc) == 2) {
        (this_ptr->base).base.field48_0x2a90 = 0;
        (this_ptr->base).base.field47_0x2a8c = 8;
        return;
      }
    }
  }
  return;
}
