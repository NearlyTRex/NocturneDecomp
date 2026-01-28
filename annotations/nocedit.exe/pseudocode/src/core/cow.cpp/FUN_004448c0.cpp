// Name: core_cow.cpp_FUN_004448c0
// Address: 004448c0
// Address Range: [[004448c0, 00444b35]]
// Convention: unknown
// Signature: void core_cow_cpp_FUN_004448c0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_cow.cpp_FUN_004448c0(uint param_1, uint param_2)
    */

void core_cow_cpp_FUN_004448c0(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  int *in_stack_00000008;
  float local_14;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar1 % 4) {
    case 0:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x2c);
      break;
    case 1:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x48);
      break;
    case 2:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x4c);
      break;
    case 3:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x50);
      break;
    default:
      goto switchD_004448f6_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_004448f6_default:
  iVar1 = *in_stack_00000008;
  if ((((iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x48)) ||
       (iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x4c))) ||
      (iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x50))) ||
     ((iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x2c) ||
      (iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x44))))) {
    local_14 = (float)in_stack_00000008[0xb];
    if (g_CGamePtr->unk4 != 0) {
      local_14 = 1.0;
    }
    if (g_CGamePtr->blood_flag == 0) {
      local_14 = 0.0;
    }
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(local_14);
    if (iVar1 != 0) {
      core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      if (*in_stack_00000008 == *(int *)(in_stack_00000004[1].base.create_event + 0x44)) {
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      }
      core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
      core_bodypart_cpp_FUN_0041a050();
      if ((in_stack_00000004->model).part_visibility_flags
          [*(int *)(in_stack_00000004[1].base.create_event + 0x2c)] == 0) {
        in_stack_00000008[1] = 0x461c3c00;
      }
      if ((in_stack_00000004->model).part_visibility_flags
          [*(int *)(in_stack_00000004[1].base.create_event + 0x48)] == 0) {
        in_stack_00000008[1] = 0x461c3c00;
      }
      in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
    }
  }
  if (*(int *)(in_stack_00000004[1].base.create_event + 0x2c) != *in_stack_00000008) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)0.5);
    return;
  }
  in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)2.5);
  return;
}
