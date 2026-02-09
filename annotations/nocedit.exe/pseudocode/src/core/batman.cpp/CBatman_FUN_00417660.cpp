// Name: core_batman.cpp_CBatman_FUN_00417660
// Address: 00417660
// Address Range: [[00417660, 00417997]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_FUN_00417660(CBatman *this_ptr)

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_FUN_00417660(CBatman *this_ptr)

{
  float fVar1;
  CConsole *this_ptr_00;
  int iVar2;
  CBodyPart *this_ptr_01;
  int *in_stack_00000008;
  CVector3f local_34;
  CVector3f local_28;
  float local_14;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar2 = rand();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = *(int *)(this_ptr->unk1 + 0x6c);
      break;
    case 1:
      iVar2 = *(int *)(this_ptr->unk1 + 0x70);
      break;
    case 2:
      iVar2 = *(int *)(this_ptr->unk1 + 0x74);
      break;
    case 3:
      iVar2 = *(int *)(this_ptr->unk1 + 0x78);
      break;
    case 4:
      iVar2 = *(int *)(this_ptr->unk1 + 100);
      break;
    case 5:
      iVar2 = *(int *)(this_ptr->unk1 + 0x68);
      break;
    default:
      goto switchD_00417696_default;
    }
    *in_stack_00000008 = iVar2;
  }
switchD_00417696_default:
  iVar2 = *in_stack_00000008;
  if (((((iVar2 == *(int *)(this_ptr->unk1 + 0x6c)) || (iVar2 == *(int *)(this_ptr->unk1 + 0x70)))
       || (iVar2 == *(int *)(this_ptr->unk1 + 0x74))) ||
      ((iVar2 == *(int *)(this_ptr->unk1 + 0x78) || (iVar2 == *(int *)(this_ptr->unk1 + 0x68))))) ||
     (iVar2 == *(int *)(this_ptr->unk1 + 100))) {
    local_14 = (float)in_stack_00000008[0xb];
    if (*(int *)(this_ptr->unk1 + 100) == *in_stack_00000008) {
      local_14 = 0.05;
    }
    if (*(int *)(this_ptr->unk1 + 0x68) == *in_stack_00000008) {
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
      this_ptr_01 = core_bodypart_cpp_createBodyPart_FUN_00418e10();
      core_charactr_cpp_CCharacter_FUN_0042bd30((CCharacter *)this_ptr);
      if (*in_stack_00000008 == *(int *)(this_ptr->unk1 + 0x6c)) {
        core_charactr_cpp_CCharacter_FUN_0042bd30((CCharacter *)this_ptr);
      }
      if (*(int *)(this_ptr->unk1 + 0x74) == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bd30((CCharacter *)this_ptr);
      }
      if (*(int *)(this_ptr->unk1 + 0x68) == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
        core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
        core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
        core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
        core_charactr_cpp_CCharacter_FUN_0042bcc0((CCharacter *)this_ptr);
      }
      core_charactr_cpp_CCharacter_FUN_0042f300((CCharacter *)this_ptr);
      core_bodypart_cpp_CBodyPart_FUN_0041a050(this_ptr_01);
      if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk1 + 100)] == 0) {
        in_stack_00000008[1] = 0x461c3c00;
      }
      in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
    }
  }
  iVar2 = *in_stack_00000008;
  if (iVar2 == *(int *)(this_ptr->unk1 + 100)) {
    fVar1 = (float)in_stack_00000008[1] * (float)2.5;
  }
  else {
    if ((iVar2 == *(int *)(this_ptr->unk1 + 0x7c)) || (iVar2 == *(int *)(this_ptr->unk1 + 0x68))) {
      in_stack_00000008[1] = in_stack_00000008[1];
      goto LAB_00417851;
    }
    fVar1 = (float)in_stack_00000008[1] * (float)0.5;
  }
  in_stack_00000008[1] = (int)fVar1;
LAB_00417851:
  this_ptr_00 = g_CConsolePtr;
  if ((*(int *)(this_ptr->unk1 + 0x68) == *in_stack_00000008) && (in_stack_00000008[0xc] == 0x68)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)20);
    engine_console_cpp_CConsole_printf_FUN_00441890(this_ptr_00,"Shot thru the heart\n");
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
    if (iVar2 != 0) {
      local_28.x = 0.0;
      local_28.y = 20.0;
      local_28.z = 20.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                ((CDemonActor *)this_ptr,&local_34,&local_28);
      core_charactr_cpp_CCharacter_FUN_0042b9e0((CCharacter *)this_ptr);
      return;
    }
  }
  return;
}
