// Name: core_stranger.cpp_CStranger_FUN_005c5f10
// Address: 005c5f10
// Address Range: [[005c5f10, 005c6215]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c5f10(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c5f10(CStranger *this_ptr)

{
  CHero *pCVar1;
  CDemonActor *this_ptr_00;
  char *pcVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  
  iVar6 = (this_ptr->base).action_bindings.fire_key;
  this_ptr->unk1[0x5c] = '\0';
  this_ptr->unk1[0x5d] = '\0';
  this_ptr->unk1[0x5e] = '\0';
  this_ptr->unk1[0x5f] = '\0';
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
  this_ptr_00 = *(CDemonActor **)(this_ptr->unk1 + 0x54);
  if (this_ptr_00 == (CDemonActor *)0x0) {
    this_ptr_00 = (this_ptr->base).base.carry_hands[1].carry_actor;
LAB_005c5f6e:
    if ((this_ptr_00 != (CDemonActor *)0x0) &&
       (uVar4 = (*((this_ptr_00->vtable)._ub)->getAllowedMeleeAttackTypes)(this_ptr_00), uVar4 != 0)
       ) {
      iVar6 = 0;
      while( true ) {
        iVar9 = *(int *)this_ptr->unk2 + 1;
        *(int *)this_ptr->unk2 = iVar9;
        if ((iVar9 < 0) || (1 < iVar9)) {
          this_ptr->unk2[0] = '\0';
          this_ptr->unk2[1] = '\0';
          this_ptr->unk2[2] = '\0';
          this_ptr->unk2[3] = '\0';
        }
        uVar8 = *(int *)this_ptr->unk2 + 0xc;
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
      pCVar1 = &this_ptr->base;
      (pCVar1->base).unk3[0x470] = '\0';
      (pCVar1->base).unk3[0x471] = '\0';
      (pCVar1->base).unk3[0x472] = '\0';
      (pCVar1->base).unk3[0x473] = '\0';
      this_ptr->action_pending = 7;
      *(int *)((this_ptr->base).base.unk3 + 0x46c) = *(int *)this_ptr->unk2 + 0xc;
      return;
    }
  }
  else if (this_ptr_00[2].orient.pitch == 9.80909e-45) goto LAB_005c5f6e;
  if (*(int *)(this_ptr->unk1 + 0x54) == 0) {
    return;
  }
  iVar6 = *(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x2e0);
  if (iVar6 == 3) {
    return;
  }
  if (((this_ptr->base).aim_mode == 0) && (iVar6 == 0)) {
    pcVar7 = this_ptr->unk1 + 0x10;
    pcVar2 = this_ptr->unk1 + 0x30;
    if (*(int *)(this_ptr->unk1 + 0x58) != 0) {
      pcVar2 = pcVar7;
      pcVar7 = this_ptr->unk1 + 0x30;
    }
    if ((*(int *)(pcVar2 + 0x1c) == 2) && (*(int *)(pcVar7 + 0x1c) != 2)) {
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
  fVar3 = core_charactr_cpp_CCharacter_FUN_0042e840((CCharacter *)this_ptr);
  if ((float)0.98999999999999999 <= fVar3) {
    pcVar7 = this_ptr->unk1 + 0x10;
    if ((*(int *)(this_ptr->unk1 + 0x58) != 0) &&
       (*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x2e0) == 0)) {
      pcVar7 = this_ptr->unk1 + 0x30;
    }
    if (((1.0 <= *(float *)(pcVar7 + 0x14)) && (*(float *)(pcVar7 + 0x10) <= 0.0)) &&
       (iVar6 = (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x154) + 0xfc))(),
       iVar6 != 0)) {
      if (*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x2e0) == 0) {
        core_stranger_cpp_CStranger_FUN_005c06b0(this_ptr);
        *(uint *)(this_ptr->unk1 + 0x58) = (uint)(*(int *)(this_ptr->unk1 + 0x58) == 0);
      }
      iVar6 = *(int *)(this_ptr->unk1 + 0x54);
      this_ptr->unk1[0x5c] = '\0';
      this_ptr->unk1[0x5d] = '\0';
      this_ptr->unk1[0x5e] = '\0';
      this_ptr->unk1[0x5f] = '\0';
      iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0xf8))();
      if (iVar6 != 0) {
        this_ptr->unk1[0x5c] = '\x01';
        this_ptr->unk1[0x5d] = '\0';
        this_ptr->unk1[0x5e] = '\0';
        this_ptr->unk1[0x5f] = '\0';
      }
      core_stranger_cpp_CStranger_FUN_005c06b0(this_ptr);
      if (*(int *)(*(int *)(this_ptr->unk1 + 0x54) + 0x2dc) == 2) {
        pCVar1 = &this_ptr->base;
        (pCVar1->base).unk3[0x470] = '\0';
        (pCVar1->base).unk3[0x471] = '\0';
        (pCVar1->base).unk3[0x472] = '\0';
        (pCVar1->base).unk3[0x473] = '\0';
        pCVar1 = &this_ptr->base;
        (pCVar1->base).unk3[0x46c] = '\b';
        (pCVar1->base).unk3[0x46d] = '\0';
        (pCVar1->base).unk3[0x46e] = '\0';
        (pCVar1->base).unk3[0x46f] = '\0';
        return;
      }
    }
  }
  return;
}
