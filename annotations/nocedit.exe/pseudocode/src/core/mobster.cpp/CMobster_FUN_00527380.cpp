// Name: core_mobster.cpp_CMobster_FUN_00527380
// Address: 00527380
// Address Range: [[00527380, 0052773b]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_FUN_00527380(CMobster *this_ptr)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_FUN_00527380(CMobster *this_ptr)

{
  int iVar1;
  float fVar2;
  CBodyPart *body_part;
  CBodyPart *unaff_ESI;
  int *in_stack_00000008;
  CBodyPart *body_part_00;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = *(int *)(this_ptr->unk2 + 0x10);
      break;
    case 1:
      iVar1 = *(int *)(this_ptr->unk2 + 0x14);
      break;
    case 2:
      iVar1 = *(int *)(this_ptr->unk2 + 0x18);
      break;
    case 3:
      iVar1 = *(int *)(this_ptr->unk2 + 0x1c);
      break;
    case 4:
      iVar1 = *(int *)(this_ptr->unk2 + 0x38);
      break;
    case 5:
      iVar1 = *(int *)(this_ptr->unk2 + 0x34);
      break;
    default:
      goto switchD_005273b9_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_005273b9_default:
  iVar1 = *in_stack_00000008;
  if (((((iVar1 != *(int *)(this_ptr->unk2 + 0x10)) && (iVar1 != *(int *)(this_ptr->unk2 + 0x14)))
       && (iVar1 != *(int *)(this_ptr->unk2 + 0x18))) &&
      ((iVar1 != *(int *)(this_ptr->unk2 + 0x1c) && (iVar1 != *(int *)(this_ptr->unk2 + 0x34))))) &&
     (iVar1 != *(int *)(this_ptr->unk2 + 0x38))) goto LAB_0052761a;
  if (*(int *)(this_ptr->unk2 + 0x34) == *in_stack_00000008) {
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    if ((float)0.33300000000000002 <= fVar2) {
      if (0.66600000000000004 <= (double)fVar2) goto LAB_00527413;
      iVar1 = *(int *)(this_ptr->unk2 + 0x18);
    }
    else {
      iVar1 = *(int *)(this_ptr->unk2 + 0x10);
    }
    *in_stack_00000008 = iVar1;
  }
LAB_00527413:
  fVar2 = (float)in_stack_00000008[0xb];
  if (*(int *)(this_ptr->unk2 + 0x38) == *in_stack_00000008) {
    fVar2 = 0.05;
  }
  if (*(int *)(this_ptr->unk2 + 0x34) == *in_stack_00000008) {
    fVar2 = 0.06;
  }
  if (g_CGamePtr->unk4 != 0) {
    fVar2 = 1.0;
  }
  if (g_CGamePtr->blood_flag == 0) {
    fVar2 = 0.0;
  }
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(fVar2);
  if (iVar1 != 0) {
    body_part = core_bodypart_cpp_createBodyPart_FUN_00418e10();
    body_part_00 = body_part;
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
              ((CCharacter *)this_ptr,body_part,*in_stack_00000008,0);
    if (*in_stack_00000008 == *(int *)(this_ptr->unk2 + 0x10)) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                ((CCharacter *)this_ptr,body_part,*(int *)(this_ptr->unk2 + 0x14),0);
    }
    if (*(int *)(this_ptr->unk2 + 0x18) == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                ((CCharacter *)this_ptr,body_part_00,*(int *)(this_ptr->unk2 + 0x1c),0);
    }
    if (*(int *)(this_ptr->unk2 + 0x34) == *in_stack_00000008) {
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,*(int *)(this_ptr->unk2 + 0x18));
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,*(int *)(this_ptr->unk2 + 0x1c));
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,*(int *)(this_ptr->unk2 + 0x10));
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,*(int *)(this_ptr->unk2 + 0x14));
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,*(int *)(this_ptr->unk2 + 0x38));
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    }
    core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
              ((CCharacter *)this_ptr,"limb?.wav");
    core_bodypart_cpp_CBodyPart_FUN_0041a050(unaff_ESI);
    if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk2 + 0x38)] == 0
       ) {
      in_stack_00000008[1] = 0x461c3c00;
    }
    in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
    if ((*in_stack_00000008 == *(int *)(this_ptr->unk2 + 0x18)) ||
       (*in_stack_00000008 == *(int *)(this_ptr->unk2 + 0x1c))) {
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    }
    if ((*in_stack_00000008 == *(int *)(this_ptr->unk2 + 0x10)) ||
       (*in_stack_00000008 == *(int *)(this_ptr->unk2 + 0x14))) {
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    }
  }
LAB_0052761a:
  iVar1 = *in_stack_00000008;
  if (iVar1 == *(int *)(this_ptr->unk2 + 0x38)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)2.5);
    return;
  }
  if ((iVar1 != *(int *)(this_ptr->unk2 + 0x30)) && (iVar1 != *(int *)(this_ptr->unk2 + 0x34))) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)0.5);
    return;
  }
  in_stack_00000008[1] = in_stack_00000008[1];
  return;
}
