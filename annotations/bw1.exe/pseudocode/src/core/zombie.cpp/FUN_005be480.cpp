// Name: core_zombie.cpp_FUN_005be480
// Address: 005be480
// Address Range: [[005be480, 005be74a]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_FUN_005be480(CZombie *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_zombie_cpp_FUN_005be480(CZombie *this_ptr,SDamageInfo *damage_info)

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
      uVar2 = *(uint *)&this_ptr->field_0xc324;
      break;
    case 1:
      uVar2 = *(uint *)&this_ptr->field_0xc328;
      break;
    case 2:
      uVar2 = *(uint *)&this_ptr->field_0xc32c;
      break;
    case 3:
      uVar2 = *(uint *)&this_ptr->field_0xc330;
      break;
    case 4:
      uVar2 = *(uint *)&this_ptr->field_0xc33c;
      break;
    case 5:
      uVar2 = *(uint *)&this_ptr->field_0xc338;
      break;
    default:
      goto switchD_005be4b6_default;
    }
    *(uint *)damage_info = uVar2;
  }
switchD_005be4b6_default:
  iVar1 = *(int *)damage_info;
  if (((((iVar1 == *(int *)&this_ptr->field_0xc324) || (iVar1 == *(int *)&this_ptr->field_0xc328))
       || (iVar1 == *(int *)&this_ptr->field_0xc32c)) ||
      ((iVar1 == *(int *)&this_ptr->field_0xc330 || (iVar1 == *(int *)&this_ptr->field_0xc338)))) ||
     (iVar1 == *(int *)&this_ptr->field_0xc33c)) {
    local_14 = *(float *)(damage_info + 0x2c);
    if (*(int *)&this_ptr->field_0xc33c == *(int *)damage_info) {
      local_14 = 0.05;
    }
    if (*(int *)&this_ptr->field_0xc338 == *(int *)damage_info) {
      local_14 = 0.02;
    }
    if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
      local_14 = 1.0;
    }
    if (*(int *)&g_CGamePtr->field_0x14 == 0) {
      local_14 = 0.0;
    }
    iVar1 = core_actor_cpp_FUN_0040cd00(local_14);
    if (iVar1 != 0) {
      body_part = core_bodypart_cpp_FUN_00418940
                            ((CVector3f *)&this_ptr->field_0x20,
                             (UOrientationVector *)&this_ptr->field_0x30,
                             (CVector3f *)(damage_info + 0xc),(CDemonActor *)this_ptr,0,0,
                             BLOOD_TYPE_RED);
      core_charactr_cpp_FUN_00431210((CCharacter *)this_ptr,body_part,*(int *)damage_info,0);
      if (*(int *)damage_info == *(int *)&this_ptr->field_0xc324) {
        core_charactr_cpp_FUN_00431210
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0xc328,0);
      }
      if (*(int *)&this_ptr->field_0xc32c == *(int *)damage_info) {
        core_charactr_cpp_FUN_00431210
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0xc330,0);
      }
      if (*(int *)&this_ptr->field_0xc338 == *(int *)damage_info) {
        initial_velocity = (CVector3f *)(damage_info + 0xc);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc32c,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc330,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc324,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc328,initial_velocity,0);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc33c,initial_velocity,0);
      }
      core_charactr_cpp_FUN_004352e0((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_FUN_00419b90(body_part);
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc33c * 4) == 0) {
        *(uint *)(damage_info + 4) = 0x461c3c00;
      }
      *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005fa93c;
      if (*(int *)&this_ptr->field_0xc334 < 0) {
        *(uint *)(damage_info + 4) = 0x4479c000;
      }
    }
  }
  iVar1 = *(int *)damage_info;
  if (iVar1 == *(int *)&this_ptr->field_0xc33c) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005fa94c;
    return;
  }
  if ((iVar1 != *(int *)&this_ptr->field_0xc334) && (iVar1 != *(int *)&this_ptr->field_0xc338)) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005fa944;
    return;
  }
  *(uint *)(damage_info + 4) = *(uint *)(damage_info + 4);
  return;
}
