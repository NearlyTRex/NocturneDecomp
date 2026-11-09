// Name: core_cow.cpp_FUN_00445730
// Address: 00445730
// Address Range: [[00445730, 004459a5]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_FUN_00445730(CZombieCow *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cow_cpp_FUN_00445730(CZombieCow *this_ptr,SDamageInfo *damage_info)

{
  CVector3f *initial_velocity;
  int iVar1;
  uint uVar2;
  CBodyPart *body_part;
  float local_14;
  
  if ((0.0 < *(float *)(damage_info + 0x2c)) && (*(int *)damage_info == -1)) {
    iVar1 = rand();
    switch(iVar1 % 4) {
    case 0:
      uVar2 = *(uint *)&this_ptr->field_0xd060;
      break;
    case 1:
      uVar2 = *(uint *)&this_ptr->field_0xd07c;
      break;
    case 2:
      uVar2 = *(uint *)&this_ptr->field_0xd080;
      break;
    case 3:
      uVar2 = *(uint *)&this_ptr->field_0xd084;
      break;
    default:
      goto switchD_00445766_default;
    }
    *(uint *)damage_info = uVar2;
  }
switchD_00445766_default:
  iVar1 = *(int *)damage_info;
  if ((((iVar1 == *(int *)&this_ptr->field_0xd07c) || (iVar1 == *(int *)&this_ptr->field_0xd080)) ||
      (iVar1 == *(int *)&this_ptr->field_0xd084)) ||
     ((iVar1 == *(int *)&this_ptr->field_0xd060 || (iVar1 == *(int *)&this_ptr->field_0xd078)))) {
    local_14 = *(float *)(damage_info + 0x2c);
    if (*(int *)&g_CGamePtr->field_0x204 != 0) {
      local_14 = 1.0;
    }
    if (*(int *)&g_CGamePtr->field_0x14 == 0) {
      local_14 = 0.0;
    }
    iVar1 = core_actor_cpp_FUN_0040cf40(local_14);
    if (iVar1 != 0) {
      initial_velocity = (CVector3f *)(damage_info + 0xc);
      body_part = core_bodypart_cpp_FUN_00414550
                            ((CVector3f *)&this_ptr->field_0x20,
                             (UOrientationVector *)&this_ptr->field_0x30,initial_velocity,
                             (CDemonActor *)this_ptr,0,0,BLOOD_TYPE_RED);
      core_charactr_cpp_FUN_00430590((CCharacter *)this_ptr,body_part,*(int *)damage_info,1);
      if (*(int *)damage_info == *(int *)&this_ptr->field_0xd078) {
        core_charactr_cpp_FUN_00430520
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd060,initial_velocity,1);
        core_charactr_cpp_FUN_00430520
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd064,initial_velocity,1);
        core_charactr_cpp_FUN_00430520
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd068,initial_velocity,1);
        core_charactr_cpp_FUN_00430520
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd06c,initial_velocity,1);
        core_charactr_cpp_FUN_00430520
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd070,initial_velocity,1);
        core_charactr_cpp_FUN_00430520
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd074,initial_velocity,1);
        core_charactr_cpp_FUN_00430520
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd07c,initial_velocity,1);
        core_charactr_cpp_FUN_00430520
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd080,initial_velocity,1);
        core_charactr_cpp_FUN_00430520
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd084,initial_velocity,1);
      }
      core_charactr_cpp_FUN_00434810((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_FUN_004157c0(body_part);
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd060 * 4) == 0) {
        *(uint *)(damage_info + 4) = 0x461c3c00;
      }
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd07c * 4) == 0) {
        *(uint *)(damage_info + 4) = 0x461c3c00;
      }
      *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005b99b5;
    }
  }
  if (*(int *)&this_ptr->field_0xd060 != *(int *)damage_info) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005b99bd;
    return;
  }
  *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005b99c5;
  return;
}
