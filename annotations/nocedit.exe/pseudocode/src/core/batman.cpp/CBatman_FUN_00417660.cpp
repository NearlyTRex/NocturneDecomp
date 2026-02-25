// Name: core_batman.cpp_CBatman_FUN_00417660
// Address: 00417660
// Address Range: [[00417660, 00417997]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_FUN_00417660(CBatman *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_batman_cpp_CBatman_FUN_00417660(CBatman *this_ptr)

{
  float fVar1;
  CConsole *this_ptr_00;
  int iVar2;
  CBodyPart *body_part;
  int *in_stack_00000008;
  CVector3f local_34;
  CVector3f local_28;
  float local_14;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar2 = rand();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = this_ptr->part_indices[2];
      break;
    case 1:
      iVar2 = this_ptr->part_indices[3];
      break;
    case 2:
      iVar2 = this_ptr->part_indices[4];
      break;
    case 3:
      iVar2 = this_ptr->part_indices[5];
      break;
    case 4:
      iVar2 = this_ptr->part_indices[0];
      break;
    case 5:
      iVar2 = this_ptr->part_indices[1];
      break;
    default:
      goto switchD_00417696_default;
    }
    *in_stack_00000008 = iVar2;
  }
switchD_00417696_default:
  iVar2 = *in_stack_00000008;
  if (((((iVar2 == this_ptr->part_indices[2]) || (iVar2 == this_ptr->part_indices[3])) ||
       (iVar2 == this_ptr->part_indices[4])) ||
      ((iVar2 == this_ptr->part_indices[5] || (iVar2 == this_ptr->part_indices[1])))) ||
     (iVar2 == this_ptr->part_indices[0])) {
    local_14 = (float)in_stack_00000008[0xb];
    if (this_ptr->part_indices[0] == *in_stack_00000008) {
      local_14 = 0.05;
    }
    if (this_ptr->part_indices[1] == *in_stack_00000008) {
      local_14 = 0.02;
    }
    if (g_CGamePtr->gratuitous_dismemberment != 0) {
      local_14 = 1.0;
    }
    if (g_CGamePtr->blood_flag == 0) {
      local_14 = 0.0;
    }
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(local_14);
    if (iVar2 != 0) {
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418e10();
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                ((CCharacter *)this_ptr,body_part,*in_stack_00000008,0);
      if (*in_stack_00000008 == this_ptr->part_indices[2]) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                  ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[3],0);
      }
      if (this_ptr->part_indices[4] == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                  ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[5],0);
      }
      if (this_ptr->part_indices[1] == *in_stack_00000008) {
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[4]);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[5]);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[2]);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3]);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[0]);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
                ((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(body_part);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] == 0) {
        in_stack_00000008[1] = 0x461c3c00;
      }
      in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
    }
  }
  iVar2 = *in_stack_00000008;
  if (iVar2 == this_ptr->part_indices[0]) {
    fVar1 = (float)in_stack_00000008[1] * (float)2.5;
  }
  else {
    if ((iVar2 == this_ptr->part_indices[6]) || (iVar2 == this_ptr->part_indices[1])) {
      in_stack_00000008[1] = in_stack_00000008[1];
      goto LAB_00417851;
    }
    fVar1 = (float)in_stack_00000008[1] * (float)0.5;
  }
  in_stack_00000008[1] = (int)fVar1;
LAB_00417851:
  this_ptr_00 = g_CConsolePtr;
  if ((this_ptr->part_indices[1] == *in_stack_00000008) && (in_stack_00000008[0xc] == 0x68)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)20);
    engine_console_cpp_CConsole_printf_FUN_00441890(this_ptr_00,"Shot thru the heart\n");
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
    if (iVar2 != 0) {
      local_28.x = 0.0;
      local_28.y = 20.0;
      local_28.z = 20.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                ((CDemonActor *)this_ptr,&local_34,&local_28);
      core_charactr_cpp_CCharacter_dismember_FUN_0042b9e0((CCharacter *)this_ptr,&local_34,-1.0);
      return;
    }
  }
  return;
}
