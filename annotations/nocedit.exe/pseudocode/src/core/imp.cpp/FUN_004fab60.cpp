// Name: core_imp.cpp_FUN_004fab60
// Address: 004fab60
// Address Range: [[004fab60, 004fadf5]]
// Convention: unknown
// Signature: void core_imp_cpp_FUN_004fab60(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_imp.cpp_FUN_004fab60(uint param_1, uint param_2)
    */

void core_imp_cpp_FUN_004fab60(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  int *in_stack_00000008;
  float local_14;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x2c);
      break;
    case 1:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x30);
      break;
    case 2:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x34);
      break;
    case 3:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x38);
      break;
    case 4:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x54);
      break;
    case 5:
      iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x50);
      break;
    default:
      goto switchD_004fab96_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_004fab96_default:
  iVar1 = *in_stack_00000008;
  if (((((iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x2c)) ||
        (iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x30))) ||
       (iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x34))) ||
      ((iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x38) ||
       (iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x50))))) ||
     (iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x54))) {
    local_14 = (float)in_stack_00000008[0xb];
    if (*(int *)(in_stack_00000004[1].base.create_event + 0x54) == *in_stack_00000008) {
      local_14 = 0.05;
    }
    if (*(int *)(in_stack_00000004[1].base.create_event + 0x50) == *in_stack_00000008) {
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
      if (*in_stack_00000008 == *(int *)(in_stack_00000004[1].base.create_event + 0x2c)) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if (*(int *)(in_stack_00000004[1].base.create_event + 0x34) == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if (*(int *)(in_stack_00000004[1].base.create_event + 0x50) == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      }
      core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
      core_bodypart_cpp_FUN_0041a050();
      in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
    }
  }
  iVar1 = *in_stack_00000008;
  if (iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x54)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)2.5);
    return;
  }
  if ((iVar1 != *(int *)(in_stack_00000004[1].base.create_event + 0x4c)) &&
     (iVar1 != *(int *)(in_stack_00000004[1].base.create_event + 0x50))) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)0.5);
    return;
  }
  in_stack_00000008[1] = in_stack_00000008[1];
  return;
}
