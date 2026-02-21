// Name: core_bride.cpp_CBride_FUN_00424600
// Address: 00424600
// Address Range: [[00424600, 004247ff] [00424814, 0042482a]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_FUN_00424600(CBride *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bride_cpp_CBride_FUN_00424600(CBride *this_ptr)

{
  int iVar1;
  CBodyPart *body_part;
  int *in_stack_00000008;
  float local_20;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = rand();
    switch(iVar1 % 5) {
    case 0:
      iVar1 = this_ptr->part_index_lshoulder;
      break;
    case 1:
      iVar1 = this_ptr->part_index_lforearm;
      break;
    case 2:
      iVar1 = this_ptr->part_index_rshoulder;
      break;
    case 3:
      iVar1 = this_ptr->part_index_rforearm;
      break;
    case 4:
      iVar1 = this_ptr->part_index_head;
      break;
    default:
      goto switchD_00424639_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_00424639_default:
  iVar1 = *in_stack_00000008;
  if ((((iVar1 == this_ptr->part_index_lshoulder) || (iVar1 == this_ptr->part_index_lforearm)) ||
      (iVar1 == this_ptr->part_index_rshoulder)) ||
     ((iVar1 == this_ptr->part_index_rforearm || (iVar1 == this_ptr->part_index_head)))) {
    local_20 = (float)in_stack_00000008[0xb];
    if (this_ptr->part_index_head == *in_stack_00000008) {
      local_20 = local_20 * (float)0.33300000000000002;
    }
    if (g_CGamePtr->gratuitous_dismemberment != 0) {
      local_20 = 1.0;
    }
    if (g_CGamePtr->blood_flag == 0) {
      local_20 = 0.0;
    }
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(local_20);
    if (iVar1 != 0) {
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418e10();
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                ((CCharacter *)this_ptr,body_part,*in_stack_00000008,0);
      if (*in_stack_00000008 == this_ptr->part_index_lshoulder) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                  ((CCharacter *)this_ptr,body_part,this_ptr->part_index_lforearm,0);
      }
      if (this_ptr->part_index_rshoulder == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                  ((CCharacter *)this_ptr,body_part,this_ptr->part_index_rforearm,0);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
                ((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(body_part);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_index_head] == 0) {
        in_stack_00000008[1] = 0x461c3c00;
      }
      in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
    }
  }
  iVar1 = *in_stack_00000008;
  if (iVar1 == this_ptr->part_index_head) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)2.5);
    return;
  }
  if ((iVar1 != this_ptr->part_index_lowerbody) && (iVar1 != this_ptr->part_index_torso)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)0.5);
    return;
  }
  in_stack_00000008[1] = in_stack_00000008[1];
  return;
}
