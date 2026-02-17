// Name: core_batcreat.cpp_CBatCreature_FUN_00415dd0
// Address: 00415dd0
// Address Range: [[00415dd0, 0041602e]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_FUN_00415dd0(CBatCreature *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_batcreat_cpp_CBatCreature_FUN_00415dd0(CBatCreature *this_ptr)

{
  int iVar1;
  CBodyPart *body_part;
  int *in_stack_00000008;
  float local_14;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = this_ptr->part_larm;
      break;
    case 1:
      iVar1 = this_ptr->part_lforearm;
      break;
    case 2:
      iVar1 = this_ptr->part_rarm;
      break;
    case 3:
      iVar1 = this_ptr->part_rforearm;
      break;
    case 4:
      iVar1 = this_ptr->part_head;
      break;
    case 5:
      iVar1 = this_ptr->part_torso;
      break;
    default:
      goto switchD_00415e06_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_00415e06_default:
  iVar1 = *in_stack_00000008;
  if ((((iVar1 != this_ptr->part_larm) && (iVar1 != this_ptr->part_lforearm)) &&
      (iVar1 != this_ptr->part_rarm)) &&
     (((iVar1 != this_ptr->part_rforearm && (iVar1 != this_ptr->part_torso)) &&
      (iVar1 != this_ptr->part_head)))) {
    return;
  }
  local_14 = (float)in_stack_00000008[0xb];
  if (this_ptr->part_head == *in_stack_00000008) {
    local_14 = 0.05;
  }
  if (this_ptr->part_torso == *in_stack_00000008) {
    local_14 = 0.02;
  }
  if (g_CGamePtr->gratuitous_dismemberment != 0) {
    local_14 = 1.0;
  }
  if (g_CGamePtr->blood_flag == 0) {
    local_14 = 0.0;
  }
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(local_14);
  if (iVar1 != 0) {
    body_part = core_bodypart_cpp_createBodyPart_FUN_00418e10();
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
              ((CCharacter *)this_ptr,body_part,*in_stack_00000008,0);
    if (*in_stack_00000008 == this_ptr->part_larm) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                ((CCharacter *)this_ptr,body_part,this_ptr->part_lforearm,0);
    }
    if (this_ptr->part_rarm == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                ((CCharacter *)this_ptr,body_part,this_ptr->part_rforearm,0);
    }
    if (this_ptr->part_torso == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_rarm);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_rforearm);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_larm);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_lforearm);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_head);
    }
    core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
              ((CCharacter *)this_ptr,"limb?.wav");
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(body_part);
    if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_head] == 0) {
      in_stack_00000008[1] = 0x461c3c00;
    }
    in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
    return;
  }
  return;
}
