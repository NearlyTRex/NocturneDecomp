// Name: core_batman.cpp_FUN_00417660
// Address: 00417660
// Address Range: [[00417660, 00417997]]
// Convention: unknown
// Signature: void core_batman_cpp_FUN_00417660(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_batman.cpp_FUN_00417660(uint param_1, uint
   param_2) */

void core_batman_cpp_FUN_00417660(void)

{
  float fVar1;
  CConsole *this_ptr;
  int iVar2;
  CCharacter *in_stack_00000004;
  int *in_stack_00000008;
  CVector3f local_34;
  CVector3f local_28;
  float local_14;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = in_stack_00000004[1].base.unk7;
      break;
    case 1:
      iVar2 = in_stack_00000004[1].base.scale.x;
      break;
    case 2:
      iVar2 = in_stack_00000004[1].base.scale.y;
      break;
    case 3:
      iVar2 = in_stack_00000004[1].base.scale.z;
      break;
    case 4:
      iVar2 = in_stack_00000004[1].base.is_transparent;
      break;
    case 5:
      iVar2 = in_stack_00000004[1].base.unk6;
      break;
    default:
      goto switchD_00417696_default;
    }
    *in_stack_00000008 = iVar2;
  }
switchD_00417696_default:
  iVar2 = *in_stack_00000008;
  if (((((iVar2 == in_stack_00000004[1].base.unk7) || (iVar2 == in_stack_00000004[1].base.scale.x))
       || (iVar2 == in_stack_00000004[1].base.scale.y)) ||
      ((iVar2 == in_stack_00000004[1].base.scale.z || (iVar2 == in_stack_00000004[1].base.unk6))))
     || (iVar2 == in_stack_00000004[1].base.is_transparent)) {
    local_14 = (float)in_stack_00000008[0xb];
    if (in_stack_00000004[1].base.is_transparent == *in_stack_00000008) {
      local_14 = 0.05;
    }
    if (in_stack_00000004[1].base.unk6 == *in_stack_00000008) {
      local_14 = 0.02;
    }
    if (g_CGamePtr->unk4 != 0) {
      local_14 = 1.0;
    }
    if (g_CGamePtr->blood_flag == 0) {
      local_14 = 0.0;
    }
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(local_14);
    if (iVar2 != 0) {
      core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      if (*in_stack_00000008 == in_stack_00000004[1].base.unk7) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if (in_stack_00000004[1].base.scale.y == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if (in_stack_00000004[1].base.unk6 == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      }
      core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
      core_bodypart_cpp_FUN_0041a050();
      if ((in_stack_00000004->model).part_visibility_flags[in_stack_00000004[1].base.is_transparent]
          == 0) {
        in_stack_00000008[1] = 0x461c3c00;
      }
      in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
    }
  }
  iVar2 = *in_stack_00000008;
  if (iVar2 == in_stack_00000004[1].base.is_transparent) {
    fVar1 = (float)in_stack_00000008[1] * (float)2.5;
  }
  else {
    if ((iVar2 == in_stack_00000004[1].base.unk8) || (iVar2 == in_stack_00000004[1].base.unk6)) {
      in_stack_00000008[1] = in_stack_00000008[1];
      goto LAB_00417851;
    }
    fVar1 = (float)in_stack_00000008[1] * (float)0.5;
  }
  in_stack_00000008[1] = (int)fVar1;
LAB_00417851:
  this_ptr = g_CConsolePtr;
  if ((in_stack_00000004[1].base.unk6 == *in_stack_00000008) && (in_stack_00000008[0xc] == 0x68)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)20);
    engine_console_cpp_CConsole_printf_FUN_00441890(this_ptr,"Shot thru the heart\n");
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
    if (iVar2 != 0) {
      local_28.x = 0.0;
      local_28.y = 20.0;
      local_28.z = 20.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                (&in_stack_00000004->base,&local_34,&local_28);
      core_charactr_cpp_CCharacter_FUN_0042b9e0(in_stack_00000004);
      return;
    }
  }
  return;
}
