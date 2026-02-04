// Name: core_zombie.cpp_CZombie_FUN_005fc220
// Address: 005fc220
// Address Range: [[005fc220, 005fc4ea]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_FUN_005fc220(CZombie *this_ptr)

#include "nocturne.h"

void __cdecl core_zombie_cpp_CZombie_FUN_005fc220(CZombie *this_ptr)

{
  int iVar1;
  CBodyPart *this_ptr_00;
  int *in_stack_00000008;
  float local_14;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = *(int *)(this_ptr->unk4 + 0x30);
      break;
    case 1:
      iVar1 = *(int *)(this_ptr->unk4 + 0x34);
      break;
    case 2:
      iVar1 = *(int *)(this_ptr->unk4 + 0x38);
      break;
    case 3:
      iVar1 = *(int *)(this_ptr->unk4 + 0x3c);
      break;
    case 4:
      iVar1 = *(int *)(this_ptr->unk4 + 0x48);
      break;
    case 5:
      iVar1 = *(int *)(this_ptr->unk4 + 0x44);
      break;
    default:
      goto switchD_005fc256_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_005fc256_default:
  iVar1 = *in_stack_00000008;
  if (((((iVar1 == *(int *)(this_ptr->unk4 + 0x30)) || (iVar1 == *(int *)(this_ptr->unk4 + 0x34)))
       || (iVar1 == *(int *)(this_ptr->unk4 + 0x38))) ||
      ((iVar1 == *(int *)(this_ptr->unk4 + 0x3c) || (iVar1 == *(int *)(this_ptr->unk4 + 0x44))))) ||
     (iVar1 == *(int *)(this_ptr->unk4 + 0x48))) {
    local_14 = (float)in_stack_00000008[0xb];
    if (*(int *)(this_ptr->unk4 + 0x48) == *in_stack_00000008) {
      local_14 = 0.05;
    }
    if (*(int *)(this_ptr->unk4 + 0x44) == *in_stack_00000008) {
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
      if (*in_stack_00000008 == *(int *)(this_ptr->unk4 + 0x30)) {
        core_charactr_cpp_CCharacter_FUN_0042bd30((CCharacter *)this_ptr);
      }
      if (*(int *)(this_ptr->unk4 + 0x38) == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bd30((CCharacter *)this_ptr);
      }
      if (*(int *)(this_ptr->unk4 + 0x44) == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
        core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
        core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
        core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
        core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
      }
      core_charactr_cpp_CCharacter_FUN_0042f300((CCharacter *)this_ptr);
      core_bodypart_cpp_CBodyPart_FUN_0041a050(this_ptr_00);
      if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk4 + 0x48)] == 0) {
        in_stack_00000008[1] = 0x461c3c00;
      }
      in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
      if (*(int *)(this_ptr->unk4 + 0x40) < 0) {
        in_stack_00000008[1] = 0x4479c000;
      }
    }
  }
  iVar1 = *in_stack_00000008;
  if (iVar1 == *(int *)(this_ptr->unk4 + 0x48)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)2.5);
    return;
  }
  if ((iVar1 != *(int *)(this_ptr->unk4 + 0x40)) && (iVar1 != *(int *)(this_ptr->unk4 + 0x44))) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)0.5);
    return;
  }
  in_stack_00000008[1] = in_stack_00000008[1];
  return;
}
