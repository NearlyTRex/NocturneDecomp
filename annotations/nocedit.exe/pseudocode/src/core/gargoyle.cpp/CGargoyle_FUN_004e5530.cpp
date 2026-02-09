// Name: core_gargoyle.cpp_CGargoyle_FUN_004e5530
// Address: 004e5530
// Address Range: [[004e5530, 004e57c8]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_FUN_004e5530(CGargoyle *this_ptr)

#include "nocturne.h"

void __cdecl core_gargoyle_cpp_CGargoyle_FUN_004e5530(CGargoyle *this_ptr)

{
  int iVar1;
  CBodyPart *this_ptr_00;
  int *in_stack_00000008;
  float local_14;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
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
      iVar1 = *(int *)(this_ptr->unk + 0x28);
      break;
    case 5:
      iVar1 = *(int *)(this_ptr->unk + 0x24);
      break;
    default:
      goto switchD_004e5566_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_004e5566_default:
  iVar1 = *in_stack_00000008;
  if (((((iVar1 == *(int *)this_ptr->unk) || (iVar1 == *(int *)(this_ptr->unk + 4))) ||
       (iVar1 == *(int *)(this_ptr->unk + 8))) ||
      ((iVar1 == *(int *)(this_ptr->unk + 0xc) || (iVar1 == *(int *)(this_ptr->unk + 0x24))))) ||
     (iVar1 == *(int *)(this_ptr->unk + 0x28))) {
    local_14 = (float)in_stack_00000008[0xb];
    if (*(int *)(this_ptr->unk + 0x28) == *in_stack_00000008) {
      local_14 = 0.05;
    }
    if (*(int *)(this_ptr->unk + 0x24) == *in_stack_00000008) {
      local_14 = 0.02;
    }
    if (g_CGamePtr->unk4 != 0) {
      local_14 = 1.0;
    }
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(local_14);
    if (iVar1 != 0) {
      this_ptr_00 = core_bodypart_cpp_createBodyPart_FUN_00418e10();
      core_charactr_cpp_CCharacter_FUN_0042bd30((CCharacter *)this_ptr);
      if (*in_stack_00000008 == *(int *)this_ptr->unk) {
        core_charactr_cpp_CCharacter_FUN_0042bd30((CCharacter *)this_ptr);
      }
      if (*(int *)(this_ptr->unk + 8) == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bd30((CCharacter *)this_ptr);
      }
      if (*(int *)(this_ptr->unk + 0x24) == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
        core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
        core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
        core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
        core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
      }
      core_bodypart_cpp_CBodyPart_FUN_0041a050(this_ptr_00);
      if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk + 0x28)] == 0) {
        in_stack_00000008[1] = 0x461c3c00;
      }
      in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
    }
  }
  iVar1 = *in_stack_00000008;
  if (iVar1 == *(int *)(this_ptr->unk + 0x28)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)2.5);
    return;
  }
  if ((iVar1 != *(int *)(this_ptr->unk + 0x20)) && (iVar1 != *(int *)(this_ptr->unk + 0x24))) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)0.5);
    return;
  }
  in_stack_00000008[1] = in_stack_00000008[1];
  return;
}
