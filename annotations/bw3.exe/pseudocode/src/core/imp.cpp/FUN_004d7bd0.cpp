// Name: core_imp.cpp_FUN_004d7bd0
// Address: 004d7bd0
// Address Range: [[004d7bd0, 004d7e65]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_FUN_004d7bd0(CImp *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_imp_cpp_FUN_004d7bd0(CImp *this_ptr,SDamageInfo *damage_info)

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
      uVar2 = *(uint *)&this_ptr->field_0xd060;
      break;
    case 1:
      uVar2 = *(uint *)&this_ptr->field_0xd064;
      break;
    case 2:
      uVar2 = *(uint *)&this_ptr->field_0xd068;
      break;
    case 3:
      uVar2 = *(uint *)&this_ptr->field_0xd06c;
      break;
    case 4:
      uVar2 = *(uint *)&this_ptr->field_0xd088;
      break;
    case 5:
      uVar2 = *(uint *)&this_ptr->field_0xd084;
      break;
    default:
      goto switchD_004d7c06_default;
    }
    *(uint *)damage_info = uVar2;
  }
switchD_004d7c06_default:
  iVar1 = *(int *)damage_info;
  if (((((iVar1 == *(int *)&this_ptr->field_0xd060) || (iVar1 == *(int *)&this_ptr->field_0xd064))
       || (iVar1 == *(int *)&this_ptr->field_0xd068)) ||
      ((iVar1 == *(int *)&this_ptr->field_0xd06c || (iVar1 == *(int *)&this_ptr->field_0xd084)))) ||
     (iVar1 == *(int *)&this_ptr->field_0xd088)) {
    local_14 = *(float *)(damage_info + 0x2c);
    if (*(int *)&this_ptr->field_0xd088 == *(int *)damage_info) {
      local_14 = 0.05;
    }
    if (*(int *)&this_ptr->field_0xd084 == *(int *)damage_info) {
      local_14 = 0.02;
    }
    if (*(int *)&g_CGamePtr->field_0x204 != 0) {
      local_14 = 1.0;
    }
    if (*(int *)&g_CGamePtr->field_0x14 == 0) {
      local_14 = 0.0;
    }
    iVar1 = core_actor_cpp_FUN_0040cf40(local_14);
    if (iVar1 != 0) {
      body_part = core_bodypart_cpp_FUN_00414550
                            ((CVector3f *)&this_ptr->field_0x20,
                             (UOrientationVector *)&this_ptr->field_0x30,
                             (CVector3f *)(damage_info + 0xc),(CDemonActor *)this_ptr,0,0,
                             *(EBloodType *)&this_ptr->field_0x27a0);
      core_charactr_cpp_FUN_00430590((CCharacter *)this_ptr,body_part,*(int *)damage_info,1);
      if (*(int *)damage_info == *(int *)&this_ptr->field_0xd060) {
        core_charactr_cpp_FUN_00430590
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0xd064,1);
      }
      if (*(int *)&this_ptr->field_0xd068 == *(int *)damage_info) {
        core_charactr_cpp_FUN_00430590
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0xd06c,1);
      }
      if (*(int *)&this_ptr->field_0xd084 == *(int *)damage_info) {
        initial_velocity = (CVector3f *)(damage_info + 0xc);
        core_charactr_cpp_FUN_00430520
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd068,initial_velocity,1);
        core_charactr_cpp_FUN_00430520
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd06c,initial_velocity,1);
        core_charactr_cpp_FUN_00430520
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd060,initial_velocity,1);
        core_charactr_cpp_FUN_00430520
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd064,initial_velocity,1);
        core_charactr_cpp_FUN_00430520
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd088,initial_velocity,1);
      }
      core_charactr_cpp_FUN_00434810((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_FUN_004157c0(body_part);
      *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005c5668;
    }
  }
  iVar1 = *(int *)damage_info;
  if (iVar1 == *(int *)&this_ptr->field_0xd088) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005c5678;
    return;
  }
  if ((iVar1 != *(int *)&this_ptr->field_0xd080) && (iVar1 != *(int *)&this_ptr->field_0xd084)) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005c5670;
    return;
  }
  *(uint *)(damage_info + 4) = *(uint *)(damage_info + 4);
  return;
}
