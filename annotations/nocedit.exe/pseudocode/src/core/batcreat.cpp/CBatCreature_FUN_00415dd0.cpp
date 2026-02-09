// Name: core_batcreat.cpp_CBatCreature_FUN_00415dd0
// Address: 00415dd0
// Address Range: [[00415dd0, 0041602e]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_FUN_00415dd0(CBatCreature *this_ptr)

#include "nocturne.h"

void __cdecl core_batcreat_cpp_CBatCreature_FUN_00415dd0(CBatCreature *this_ptr)

{
  int iVar1;
  CBodyPart *this_ptr_00;
  int *in_stack_00000008;
  float local_14;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = *(int *)(this_ptr->unk + 0x20);
      break;
    case 1:
      iVar1 = *(int *)(this_ptr->unk + 0x24);
      break;
    case 2:
      iVar1 = *(int *)(this_ptr->unk + 0x28);
      break;
    case 3:
      iVar1 = *(int *)(this_ptr->unk + 0x2c);
      break;
    case 4:
      iVar1 = *(int *)this_ptr->unk;
      break;
    case 5:
      iVar1 = *(int *)(this_ptr->unk + 4);
      break;
    default:
      goto switchD_00415e06_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_00415e06_default:
  iVar1 = *in_stack_00000008;
  if ((((iVar1 != *(int *)(this_ptr->unk + 0x20)) && (iVar1 != *(int *)(this_ptr->unk + 0x24))) &&
      (iVar1 != *(int *)(this_ptr->unk + 0x28))) &&
     (((iVar1 != *(int *)(this_ptr->unk + 0x2c) && (iVar1 != *(int *)(this_ptr->unk + 4))) &&
      (iVar1 != *(int *)this_ptr->unk)))) {
    return;
  }
  local_14 = (float)in_stack_00000008[0xb];
  if (*(int *)this_ptr->unk == *in_stack_00000008) {
    local_14 = 0.05;
  }
  if (*(int *)(this_ptr->unk + 4) == *in_stack_00000008) {
    local_14 = 0.02;
  }
  if (g_CGamePtr->unk4 != 0) {
    local_14 = 1.0;
  }
  if (g_CGamePtr->blood_flag == 0) {
    local_14 = 0.0;
  }
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(local_14);
  if (iVar1 != 0) {
    this_ptr_00 = core_bodypart_cpp_createBodyPart_FUN_00418e10();
    core_charactr_cpp_CCharacter_FUN_0042bd30((CCharacter *)this_ptr);
    if (*in_stack_00000008 == *(int *)(this_ptr->unk + 0x20)) {
      core_charactr_cpp_CCharacter_FUN_0042bd30((CCharacter *)this_ptr);
    }
    if (*(int *)(this_ptr->unk + 0x28) == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_FUN_0042bd30((CCharacter *)this_ptr);
    }
    if (*(int *)(this_ptr->unk + 4) == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
      core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
      core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
      core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
      core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
    }
    core_charactr_cpp_CCharacter_FUN_0042f300((CCharacter *)this_ptr);
    core_bodypart_cpp_CBodyPart_FUN_0041a050(this_ptr_00);
    if ((this_ptr->base).base.model.part_visibility_flags[*(int *)this_ptr->unk] == 0) {
      in_stack_00000008[1] = 0x461c3c00;
    }
    in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
    return;
  }
  return;
}
