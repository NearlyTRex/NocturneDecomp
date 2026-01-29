// Name: core_ghoul.cpp_FUN_004e8520
// Address: 004e8520
// Address Range: [[004e8520, 004e87d1]]
// Convention: unknown
// Signature: void core_ghoul_cpp_FUN_004e8520(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_ghoul.cpp_FUN_004e8520(uint param_1, uint param_2)
    */

void core_ghoul_cpp_FUN_004e8520(void)

{
  int iVar1;
  float fVar2;
  CCharacter *in_stack_00000004;
  float *in_stack_00000008;
  float local_14;
  
  if ((0.0 < in_stack_00000008[0xb]) && (*in_stack_00000008 == -NAN)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      fVar2 = *(float *)(in_stack_00000004[1].base.create_event + 0x44);
      break;
    case 1:
      fVar2 = *(float *)(in_stack_00000004[1].base.create_event + 0x48);
      break;
    case 2:
      fVar2 = *(float *)(in_stack_00000004[1].base.create_event + 0x4c);
      break;
    case 3:
      fVar2 = *(float *)(in_stack_00000004[1].base.create_event + 0x50);
      break;
    case 4:
      fVar2 = in_stack_00000004[1].base.unk3.y;
      break;
    case 5:
      fVar2 = in_stack_00000004[1].base.unk3.x;
      break;
    default:
      goto switchD_004e8556_default;
    }
    *in_stack_00000008 = fVar2;
  }
switchD_004e8556_default:
  fVar2 = *in_stack_00000008;
  if (((((fVar2 == *(float *)(in_stack_00000004[1].base.create_event + 0x44)) ||
        (fVar2 == *(float *)(in_stack_00000004[1].base.create_event + 0x48))) ||
       (fVar2 == *(float *)(in_stack_00000004[1].base.create_event + 0x4c))) ||
      ((fVar2 == *(float *)(in_stack_00000004[1].base.create_event + 0x50) ||
       (fVar2 == in_stack_00000004[1].base.unk3.x)))) || (fVar2 == in_stack_00000004[1].base.unk3.y)
     ) {
    local_14 = in_stack_00000008[0xb];
    if (in_stack_00000004[1].base.unk3.y == *in_stack_00000008) {
      local_14 = 0.05;
    }
    if (in_stack_00000004[1].base.unk3.x == *in_stack_00000008) {
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
      if (*in_stack_00000008 == *(float *)(in_stack_00000004[1].base.create_event + 0x44)) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if (*(float *)(in_stack_00000004[1].base.create_event + 0x4c) == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if (in_stack_00000004[1].base.unk3.x == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      }
      core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
      core_bodypart_cpp_FUN_0041a050();
      if ((in_stack_00000004->model).part_visibility_flags[(int)in_stack_00000004[1].base.unk3.y] ==
          0) {
        in_stack_00000008[1] = 9999.0;
      }
      in_stack_00000008[2] = in_stack_00000008[2] * (float)7;
    }
  }
  fVar2 = *in_stack_00000008;
  if (fVar2 == in_stack_00000004[1].base.unk3.y) {
    in_stack_00000008[1] = in_stack_00000008[1] * (float)2.5;
    return;
  }
  if ((fVar2 != (float)in_stack_00000004[1].base.unk2) &&
     (fVar2 != in_stack_00000004[1].base.unk3.x)) {
    in_stack_00000008[1] = in_stack_00000008[1] * (float)0.5;
    return;
  }
  in_stack_00000008[1] = in_stack_00000008[1];
  return;
}
