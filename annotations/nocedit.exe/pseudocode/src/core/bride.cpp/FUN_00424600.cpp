// Name: core_bride.cpp_FUN_00424600
// Address: 00424600
// Address Range: [[00424600, 004247ff] [00424814, 0042482a]]
// Convention: unknown
// Signature: void core_bride_cpp_FUN_00424600(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_bride.cpp_FUN_00424600(uint param_1, uint param_2)
    */

void core_bride_cpp_FUN_00424600(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  int *in_stack_00000008;
  float local_20;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = rand();
    switch(iVar1 % 5) {
    case 0:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x20);
      break;
    case 1:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x24);
      break;
    case 2:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x28);
      break;
    case 3:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x2c);
      break;
    case 4:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x40);
      break;
    default:
      goto switchD_00424639_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_00424639_default:
  iVar1 = *in_stack_00000008;
  if ((((iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x20)) ||
       (iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x24))) ||
      (iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x28))) ||
     ((iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x2c) ||
      (iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x40))))) {
    local_20 = (float)in_stack_00000008[0xb];
    if (*(int *)(in_stack_00000004[1].base.create_event + 0x40) == *in_stack_00000008) {
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
      core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      if (*in_stack_00000008 == *(int *)(in_stack_00000004[1].base.create_event + 0x20)) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if (*(int *)(in_stack_00000004[1].base.create_event + 0x28) == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
      core_bodypart_cpp_FUN_0041a050();
      if ((in_stack_00000004->model).part_visibility_flags
          [*(int *)(in_stack_00000004[1].base.create_event + 0x40)] == 0) {
        in_stack_00000008[1] = 0x461c3c00;
      }
      in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
    }
  }
  iVar1 = *in_stack_00000008;
  if (iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x40)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)2.5);
    return;
  }
  if ((iVar1 != *(int *)(in_stack_00000004[1].base.create_event + 0x3c)) &&
     (iVar1 != *(int *)(in_stack_00000004[1].base.create_event + 0x38))) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)0.5);
    return;
  }
  in_stack_00000008[1] = in_stack_00000008[1];
  return;
}
