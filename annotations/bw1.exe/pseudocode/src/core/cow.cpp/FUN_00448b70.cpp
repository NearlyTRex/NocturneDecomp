// Name: core_cow.cpp_FUN_00448b70
// Address: 00448b70
// Address Range: [[00448b70, 00448de5]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_FUN_00448b70(CZombieCow *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cow_cpp_FUN_00448b70(CZombieCow *this_ptr,SDamageInfo *damage_info)

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
      uVar2 = *(uint *)&this_ptr->field_0xc274;
      break;
    case 1:
      uVar2 = *(uint *)&this_ptr->field_0xc290;
      break;
    case 2:
      uVar2 = *(uint *)&this_ptr->field_0xc294;
      break;
    case 3:
      uVar2 = *(uint *)&this_ptr->field_0xc298;
      break;
    default:
      goto switchD_00448ba6_default;
    }
    *(uint *)damage_info = uVar2;
  }
switchD_00448ba6_default:
  iVar1 = *(int *)damage_info;
  if ((((iVar1 == *(int *)&this_ptr->field_0xc290) || (iVar1 == *(int *)&this_ptr->field_0xc294)) ||
      (iVar1 == *(int *)&this_ptr->field_0xc298)) ||
     ((iVar1 == *(int *)&this_ptr->field_0xc274 || (iVar1 == *(int *)&this_ptr->field_0xc28c)))) {
    local_14 = *(float *)(damage_info + 0x2c);
    if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
      local_14 = 1.0;
    }
    if (*(int *)&g_CGamePtr->field_0x14 == 0) {
      local_14 = 0.0;
    }
    iVar1 = core_actor_cpp_FUN_0040cd00(local_14);
    if (iVar1 != 0) {
      initial_velocity = (CVector3f *)(damage_info + 0xc);
      body_part = core_bodypart_cpp_FUN_00418940
                            ((CVector3f *)&this_ptr->field_0x20,
                             (UOrientationVector *)&this_ptr->field_0x30,initial_velocity,
                             (CDemonActor *)this_ptr,0,0,BLOOD_TYPE_RED);
      core_charactr_cpp_FUN_00431210((CCharacter *)this_ptr,body_part,*(int *)damage_info,0);
      if (*(int *)damage_info == *(int *)&this_ptr->field_0xc28c) {
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc274,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc278,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc27c,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc280,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc284,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc288,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc290,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc294,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc298,initial_velocity,0);
      }
      core_charactr_cpp_FUN_004352e0((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_FUN_00419b90(body_part);
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc274 * 4) == 0) {
        *(uint *)(damage_info + 4) = 0x461c3c00;
      }
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc290 * 4) == 0) {
        *(uint *)(damage_info + 4) = 0x461c3c00;
      }
      *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005d72fe;
    }
  }
  if (*(int *)&this_ptr->field_0xc274 != *(int *)damage_info) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005d7306;
    return;
  }
  *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005d730e;
  return;
}
