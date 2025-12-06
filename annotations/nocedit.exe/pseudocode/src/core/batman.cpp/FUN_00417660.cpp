// Name: core_batman.cpp_FUN_00417660
// Address: 00417660
// Address Range: [[00417660, 00417997]]
// Convention: unknown
// Signature: undefined core_batman.cpp_FUN_00417660()

#include "nocturne.h"

/* Signature: byte actors_enemy_batman.cpp_FUN_00417660(uint param_1, uint
   param_2) */

void core_batman_cpp_FUN_00417660(void)

{
  CConsole *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  int *in_stack_00000008;
  CVector3f local_28;
  CVector3f CStack_1c;
  float fVar2;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = in_stack_00000004[1].base_actor.field17_0x104;
      break;
    case 1:
      iVar1 = in_stack_00000004[1].base_actor.scale.x;
      break;
    case 2:
      iVar1 = in_stack_00000004[1].base_actor.scale.y;
      break;
    case 3:
      iVar1 = in_stack_00000004[1].base_actor.scale.z;
      break;
    case 4:
      iVar1 = in_stack_00000004[1].base_actor.is_transparent;
      break;
    case 5:
      iVar1 = in_stack_00000004[1].base_actor.field16_0x100;
      break;
    default:
      goto switchD_00417696_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_00417696_default:
  iVar1 = *in_stack_00000008;
  if (((((iVar1 == in_stack_00000004[1].base_actor.field17_0x104) ||
        (iVar1 == in_stack_00000004[1].base_actor.scale.x)) ||
       (iVar1 == in_stack_00000004[1].base_actor.scale.y)) ||
      ((iVar1 == in_stack_00000004[1].base_actor.scale.z ||
       (iVar1 == in_stack_00000004[1].base_actor.field16_0x100)))) ||
     (iVar1 == in_stack_00000004[1].base_actor.is_transparent)) {
    fVar2 = (float)in_stack_00000008[0xb];
    if (in_stack_00000004[1].base_actor.is_transparent == *in_stack_00000008) {
      fVar2 = 0.05;
    }
    if (in_stack_00000004[1].base_actor.field16_0x100 == *in_stack_00000008) {
      fVar2 = 0.02;
    }
    if (g_CGamePtr->field57_0x1e0 != 0) {
      fVar2 = 1.0;
    }
    if (g_CGamePtr->blood_flag == 0) {
      fVar2 = 0.0;
    }
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(fVar2);
    if (iVar1 != 0) {
      core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
      core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      if (*in_stack_00000008 == in_stack_00000004[1].base_actor.field17_0x104) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if (in_stack_00000004[1].base_actor.scale.y == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
      }
      if (in_stack_00000004[1].base_actor.field16_0x100 == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
        core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
      }
      core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
      core_bodypart_cpp_FUN_0041a050();
      if ((in_stack_00000004->model).part_visibility_flags
          [in_stack_00000004[1].base_actor.is_transparent] == 0) {
        in_stack_00000008[1] = 0x461c3c00;
      }
      in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
    }
  }
  iVar1 = *in_stack_00000008;
  if (iVar1 == in_stack_00000004[1].base_actor.is_transparent) {
    fVar2 = (float)in_stack_00000008[1] * (float)2.5;
  }
  else {
    if ((iVar1 == in_stack_00000004[1].base_actor.field19_0x114) ||
       (iVar1 == in_stack_00000004[1].base_actor.field16_0x100)) {
      in_stack_00000008[1] = in_stack_00000008[1];
      goto LAB_00417851;
    }
    fVar2 = (float)in_stack_00000008[1] * (float)0.5;
  }
  in_stack_00000008[1] = (int)fVar2;
LAB_00417851:
  this_ptr = g_CConsolePtr;
  if ((in_stack_00000004[1].base_actor.field16_0x100 == *in_stack_00000008) &&
     (in_stack_00000008[0xc] == 0x68)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)20);
    engine_console_cpp_CConsole_printf_FUN_00441890(this_ptr,"Shot thru the heart\n");
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
    if (iVar1 != 0) {
      CStack_1c.x = 0.0;
      CStack_1c.y = 20.0;
      CStack_1c.z = 20.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                (&in_stack_00000004->base_actor,&local_28,&CStack_1c);
      local_28.x = 1.4013e-45;
      core_charactr_cpp_CCharacter_FUN_0042b9e0(in_stack_00000004);
      return;
    }
  }
  return;
}
