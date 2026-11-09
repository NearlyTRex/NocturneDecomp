// Name: core_imp.cpp_FUN_004d7ab0
// Address: 004d7ab0
// Address Range: [[004d7ab0, 004d7d45]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_FUN_004d7ab0(CImp *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_imp_cpp_FUN_004d7ab0(CImp *this_ptr,SDamageInfo *damage_info)

{
  CVector3f *initial_velocity;
  int iVar1;
  uint uVar2;
  CBodyPart *body_part;
  float local_14;
  
  if ((0.0 < *(float *)(damage_info + 0x2c)) && (*(int *)damage_info == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      uVar2 = *(uint *)&this_ptr->field_0x10b04;
      break;
    case 1:
      uVar2 = *(uint *)&this_ptr->field_0x10b08;
      break;
    case 2:
      uVar2 = *(uint *)&this_ptr->field_0x10b0c;
      break;
    case 3:
      uVar2 = *(uint *)&this_ptr->field_0x10b10;
      break;
    case 4:
      uVar2 = *(uint *)&this_ptr->field_0x10b2c;
      break;
    case 5:
      uVar2 = *(uint *)&this_ptr->field_0x10b28;
      break;
    default:
      goto switchD_004d7ae6_default;
    }
    *(uint *)damage_info = uVar2;
  }
switchD_004d7ae6_default:
  iVar1 = *(int *)damage_info;
  if (((((iVar1 == *(int *)&this_ptr->field_0x10b04) || (iVar1 == *(int *)&this_ptr->field_0x10b08))
       || (iVar1 == *(int *)&this_ptr->field_0x10b0c)) ||
      ((iVar1 == *(int *)&this_ptr->field_0x10b10 || (iVar1 == *(int *)&this_ptr->field_0x10b28))))
     || (iVar1 == *(int *)&this_ptr->field_0x10b2c)) {
    local_14 = *(float *)(damage_info + 0x2c);
    if (*(int *)&this_ptr->field_0x10b2c == *(int *)damage_info) {
      local_14 = 0.05;
    }
    if (*(int *)&this_ptr->field_0x10b28 == *(int *)damage_info) {
      local_14 = 0.02;
    }
    if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
      local_14 = 1.0;
    }
    if (*(int *)&g_CGamePtr->field_0x14 == 0) {
      local_14 = 0.0;
    }
    iVar1 = core_actor_cpp_FUN_0040d060(local_14);
    if (iVar1 != 0) {
      body_part = core_bodypart_cpp_FUN_004154f0
                            ((CVector3f *)&this_ptr->field_0x20,
                             (UOrientationVector *)&this_ptr->field_0x30,
                             (CVector3f *)(damage_info + 0xc),(CDemonActor *)this_ptr,0,0,
                             *(EBloodType *)&this_ptr->field_0x280c);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                ((CCharacter *)this_ptr,body_part,*(int *)damage_info,1);
      if (*(int *)damage_info == *(int *)&this_ptr->field_0x10b04) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0x10b08,0);
      }
      if (*(int *)&this_ptr->field_0x10b0c == *(int *)damage_info) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0x10b10,0);
      }
      if (*(int *)&this_ptr->field_0x10b28 == *(int *)damage_info) {
        initial_velocity = (CVector3f *)(damage_info + 0xc);
        core_charactr_cpp_FUN_00427770
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b0c,initial_velocity,1);
        core_charactr_cpp_FUN_00427770
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b10,initial_velocity,1);
        core_charactr_cpp_FUN_00427770
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b04,initial_velocity,1);
        core_charactr_cpp_FUN_00427770
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b08,initial_velocity,1);
        core_charactr_cpp_FUN_00427770
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b2c,initial_velocity,1);
      }
      core_charactr_cpp_FUN_0042b260((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(body_part);
      *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005dab41;
    }
  }
  iVar1 = *(int *)damage_info;
  if (iVar1 == *(int *)&this_ptr->field_0x10b2c) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005dab51;
    return;
  }
  if ((iVar1 != *(int *)&this_ptr->field_0x10b24) && (iVar1 != *(int *)&this_ptr->field_0x10b28)) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005dab49;
    return;
  }
  *(uint *)(damage_info + 4) = *(uint *)(damage_info + 4);
  return;
}
