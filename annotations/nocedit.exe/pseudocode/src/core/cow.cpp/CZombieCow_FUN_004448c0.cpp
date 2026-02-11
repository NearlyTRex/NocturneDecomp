// Name: core_cow.cpp_CZombieCow_FUN_004448c0
// Address: 004448c0
// Address Range: [[004448c0, 00444b35]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_FUN_004448c0(CZombieCow *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_cow_cpp_CZombieCow_FUN_004448c0(CZombieCow *this_ptr)

{
  int iVar1;
  CBodyPart *body_part;
  int *in_stack_00000008;
  float local_14;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = rand();
    switch(iVar1 % 4) {
    case 0:
      iVar1 = *(int *)(this_ptr->unk + 0xc);
      break;
    case 1:
      iVar1 = *(int *)(this_ptr->unk + 0x28);
      break;
    case 2:
      iVar1 = *(int *)(this_ptr->unk + 0x2c);
      break;
    case 3:
      iVar1 = *(int *)(this_ptr->unk + 0x30);
      break;
    default:
      goto switchD_004448f6_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_004448f6_default:
  iVar1 = *in_stack_00000008;
  if ((((iVar1 == *(int *)(this_ptr->unk + 0x28)) || (iVar1 == *(int *)(this_ptr->unk + 0x2c))) ||
      (iVar1 == *(int *)(this_ptr->unk + 0x30))) ||
     ((iVar1 == *(int *)(this_ptr->unk + 0xc) || (iVar1 == *(int *)(this_ptr->unk + 0x24))))) {
    local_14 = (float)in_stack_00000008[0xb];
    if (g_CGamePtr->unk4 != 0) {
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
      if (*in_stack_00000008 == *(int *)(this_ptr->unk + 0x24)) {
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,*(int *)(this_ptr->unk + 0xc));
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,*(int *)(this_ptr->unk + 0x10));
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,*(int *)(this_ptr->unk + 0x14));
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,*(int *)(this_ptr->unk + 0x18));
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,*(int *)(this_ptr->unk + 0x1c));
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,*(int *)(this_ptr->unk + 0x20));
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,*(int *)(this_ptr->unk + 0x28));
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,*(int *)(this_ptr->unk + 0x2c));
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,*(int *)(this_ptr->unk + 0x30));
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
                ((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_FUN_0041a050(body_part);
      if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk + 0xc)] == 0
         ) {
        in_stack_00000008[1] = 0x461c3c00;
      }
      if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk + 0x28)] ==
          0) {
        in_stack_00000008[1] = 0x461c3c00;
      }
      in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
    }
  }
  if (*(int *)(this_ptr->unk + 0xc) != *in_stack_00000008) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)0.5);
    return;
  }
  in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)2.5);
  return;
}
