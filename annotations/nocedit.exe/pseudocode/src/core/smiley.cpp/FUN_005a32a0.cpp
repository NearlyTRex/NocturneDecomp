// Name: core_smiley.cpp_FUN_005a32a0
// Address: 005a32a0
// Address Range: [[005a32a0, 005a357f]]
// Convention: unknown
// Signature: undefined core_smiley.cpp_FUN_005a32a0()

#include "nocturne.h"

/* Signature: byte actors_enemy_smiley.cpp_FUN_005a32a0(uint param_1, uint
   param_2) */

void core_smiley_cpp_FUN_005a32a0(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  int *in_stack_00000008;
  float local_14;
  
  if (in_stack_00000008[0xc] < 0xc) {
    return;
  }
  if ((in_stack_00000008[0xc] == 0x6b) &&
     (*(float *)(in_stack_00000004[1].base.create_event + 0x5c) <= 0.0)) {
    iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x58) + 1;
    *(float *)(in_stack_00000004[1].base.create_event + 0x5c) =
         *(float *)(in_stack_00000004[1].base.create_event + 0x5c) + 1.0;
    *(int *)(in_stack_00000004[1].base.create_event + 0x58) = iVar1;
    if (2 < iVar1) {
      in_stack_00000008[0xb] = 0x3f800000;
      if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
        iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
        switch(iVar1 % 6) {
        case 0:
          iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x28);
          break;
        case 1:
          iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x2c);
          break;
        case 2:
          iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x30);
          break;
        case 3:
          iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x34);
          break;
        case 4:
          iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x50);
          break;
        case 5:
          iVar1 = *(int *)(in_stack_00000004[1].base.create_event + 0x4c);
          break;
        default:
          goto switchD_005a3329_default;
        }
        *in_stack_00000008 = iVar1;
      }
switchD_005a3329_default:
      iVar1 = *in_stack_00000008;
      if (((((iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x28)) ||
            (iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x2c))) ||
           (iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x30))) ||
          ((iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x34) ||
           (iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x4c))))) ||
         (iVar1 == *(int *)(in_stack_00000004[1].base.create_event + 0x50))) {
        local_14 = (float)in_stack_00000008[0xb];
        if (g_CGamePtr->unk4 != 0) {
          local_14 = 1.0;
        }
        iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(local_14);
        if (iVar1 != 0) {
          core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
          core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
          if (*in_stack_00000008 == *(int *)(in_stack_00000004[1].base.create_event + 0x28)) {
            core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
          }
          if (*(int *)(in_stack_00000004[1].base.create_event + 0x30) == *in_stack_00000008) {
            core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
          }
          if (*(int *)(in_stack_00000004[1].base.create_event + 0x4c) == *in_stack_00000008) {
            core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
            core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
            core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
            core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
            core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
          }
          core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
          core_bodypart_cpp_FUN_0041a050();
          if ((in_stack_00000004->model).part_visibility_flags
              [*(int *)(in_stack_00000004[1].base.create_event + 0x50)] == 0) {
            in_stack_00000008[1] = 0x461c3c00;
          }
          in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
        }
      }
      iVar1 = *in_stack_00000008;
      if (iVar1 != *(int *)(in_stack_00000004[1].base.create_event + 0x50)) {
        if ((iVar1 != *(int *)(in_stack_00000004[1].base.create_event + 0x48)) &&
           (iVar1 != *(int *)(in_stack_00000004[1].base.create_event + 0x4c))) {
          in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)0.5);
          return;
        }
        in_stack_00000008[1] = in_stack_00000008[1];
        return;
      }
      in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)2.5);
      return;
    }
  }
  in_stack_00000008[1] = 0;
  return;
}
