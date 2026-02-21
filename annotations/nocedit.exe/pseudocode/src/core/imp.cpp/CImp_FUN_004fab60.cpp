// Name: core_imp.cpp_CImp_FUN_004fab60
// Address: 004fab60
// Address Range: [[004fab60, 004fadf5]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_FUN_004fab60(CImp *this_ptr)

#include "nocturne.h"

void __cdecl core_imp_cpp_CImp_FUN_004fab60(CImp *this_ptr)

{
  int iVar1;
  CBodyPart *body_part;
  int *in_stack_00000008;
  float local_14;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = this_ptr->part_index_larm;
      break;
    case 1:
      iVar1 = this_ptr->part_index_lforearm;
      break;
    case 2:
      iVar1 = this_ptr->part_index_rarm;
      break;
    case 3:
      iVar1 = this_ptr->part_index_rforearm;
      break;
    case 4:
      iVar1 = this_ptr->part_index_head;
      break;
    case 5:
      iVar1 = this_ptr->part_index_torso;
      break;
    default:
      goto switchD_004fab96_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_004fab96_default:
  iVar1 = *in_stack_00000008;
  if (((((iVar1 == this_ptr->part_index_larm) || (iVar1 == this_ptr->part_index_lforearm)) ||
       (iVar1 == this_ptr->part_index_rarm)) ||
      ((iVar1 == this_ptr->part_index_rforearm || (iVar1 == this_ptr->part_index_torso)))) ||
     (iVar1 == this_ptr->part_index_head)) {
    local_14 = (float)in_stack_00000008[0xb];
    if (this_ptr->part_index_head == *in_stack_00000008) {
      local_14 = 0.05;
    }
    if (this_ptr->part_index_torso == *in_stack_00000008) {
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
                ((CCharacter *)this_ptr,body_part,*in_stack_00000008,1);
      if (*in_stack_00000008 == this_ptr->part_index_larm) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                  ((CCharacter *)this_ptr,body_part,this_ptr->part_index_lforearm,0);
      }
      if (this_ptr->part_index_rarm == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                  ((CCharacter *)this_ptr,body_part,this_ptr->part_index_rforearm,0);
      }
      if (this_ptr->part_index_torso == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_index_rarm);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_index_rforearm);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_index_larm);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_index_lforearm);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_index_head);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
                ((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(body_part);
      in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
    }
  }
  iVar1 = *in_stack_00000008;
  if (iVar1 == this_ptr->part_index_head) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)2.5);
    return;
  }
  if ((iVar1 != this_ptr->part_index_ass) && (iVar1 != this_ptr->part_index_torso)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)0.5);
    return;
  }
  in_stack_00000008[1] = in_stack_00000008[1];
  return;
}
