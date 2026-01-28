// Name: core_batcreat.cpp_FUN_00415dd0
// Address: 00415dd0
// Address Range: [[00415dd0, 0041602e]]
// Convention: unknown
// Signature: void core_batcreat_cpp_FUN_00415dd0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_batcreature.cpp_FUN_00415dd0(uint param_1, uint
   param_2) */

void core_batcreat_cpp_FUN_00415dd0(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  int *in_stack_00000008;
  float local_14;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x40);
      break;
    case 1:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x44);
      break;
    case 2:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x48);
      break;
    case 3:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x4c);
      break;
    case 4:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x20);
      break;
    case 5:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x24);
      break;
    default:
      goto switchD_00415e06_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_00415e06_default:
  iVar1 = *in_stack_00000008;
  if ((((iVar1 != *(int *)(in_stack_00000004[1].base.create_event + 0x40)) &&
       (iVar1 != *(int *)(in_stack_00000004[1].base.create_event + 0x44))) &&
      (iVar1 != *(int *)(in_stack_00000004[1].base.create_event + 0x48))) &&
     (((iVar1 != *(int *)(in_stack_00000004[1].base.create_event + 0x4c) &&
       (iVar1 != *(int *)(in_stack_00000004[1].base.create_event + 0x24))) &&
      (iVar1 != *(int *)(in_stack_00000004[1].base.create_event + 0x20))))) {
    return;
  }
  local_14 = (float)in_stack_00000008[0xb];
  if (*(int *)(in_stack_00000004[1].base.create_event + 0x20) == *in_stack_00000008) {
    local_14 = 0.05;
  }
  if (*(int *)(in_stack_00000004[1].base.create_event + 0x24) == *in_stack_00000008) {
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
    core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
    core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    if (*in_stack_00000008 == *(int *)(in_stack_00000004[1].base.create_event + 0x40)) {
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    }
    if (*(int *)(in_stack_00000004[1].base.create_event + 0x48) == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
    }
    if (*(int *)(in_stack_00000004[1].base.create_event + 0x24) == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
    }
    core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
    core_bodypart_cpp_FUN_0041a050();
    if ((in_stack_00000004->model).part_visibility_flags
        [*(int *)(in_stack_00000004[1].base.create_event + 0x20)] == 0) {
      in_stack_00000008[1] = 0x461c3c00;
    }
    in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
    return;
  }
  return;
}
