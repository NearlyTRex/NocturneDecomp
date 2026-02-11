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
      iVar1 = *(int *)this_ptr->unk;
      break;
    case 1:
      iVar1 = *(int *)(this_ptr->unk + 4);
      break;
    case 2:
      iVar1 = *(int *)(this_ptr->unk + 8);
      break;
    case 3:
      iVar1 = *(int *)(this_ptr->unk + 0xc);
      break;
    case 4:
      iVar1 = *(int *)(this_ptr->unk + 0x20);
      break;
    default:
      goto switchD_00424639_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_00424639_default:
  iVar1 = *in_stack_00000008;
  if ((((iVar1 == *(int *)this_ptr->unk) || (iVar1 == *(int *)(this_ptr->unk + 4))) ||
      (iVar1 == *(int *)(this_ptr->unk + 8))) ||
     ((iVar1 == *(int *)(this_ptr->unk + 0xc) || (iVar1 == *(int *)(this_ptr->unk + 0x20))))) {
    local_20 = (float)in_stack_00000008[0xb];
    if (*(int *)(this_ptr->unk + 0x20) == *in_stack_00000008) {
      local_20 = local_20 * (float)0.33300000000000002;
    }
    if (g_CGamePtr->unk4 != 0) {
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
      if (*in_stack_00000008 == *(int *)this_ptr->unk) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                  ((CCharacter *)this_ptr,body_part,*(int *)(this_ptr->unk + 4),0);
      }
      if (*(int *)(this_ptr->unk + 8) == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                  ((CCharacter *)this_ptr,body_part,*(int *)(this_ptr->unk + 0xc),0);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
                ((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_FUN_0041a050(body_part);
      if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk + 0x20)] ==
          0) {
        in_stack_00000008[1] = 0x461c3c00;
      }
      in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
    }
  }
  iVar1 = *in_stack_00000008;
  if (iVar1 == *(int *)(this_ptr->unk + 0x20)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)2.5);
    return;
  }
  if ((iVar1 != *(int *)(this_ptr->unk + 0x1c)) && (iVar1 != *(int *)(this_ptr->unk + 0x18))) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)0.5);
    return;
  }
  in_stack_00000008[1] = in_stack_00000008[1];
  return;
}
