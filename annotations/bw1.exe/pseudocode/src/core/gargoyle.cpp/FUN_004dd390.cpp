// Name: core_gargoyle.cpp_FUN_004dd390
// Address: 004dd390
// Address Range: [[004dd390, 004dd628]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_FUN_004dd390(CGargoyle *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gargoyle_cpp_FUN_004dd390(CGargoyle *this_ptr,SDamageInfo *damage_info)

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
      uVar2 = *(uint *)&this_ptr->field_0xc268;
      break;
    case 1:
      uVar2 = *(uint *)&this_ptr->field_0xc26c;
      break;
    case 2:
      uVar2 = *(uint *)&this_ptr->field_0xc270;
      break;
    case 3:
      uVar2 = *(uint *)&this_ptr->field_0xc274;
      break;
    case 4:
      uVar2 = *(uint *)&this_ptr->field_0xc290;
      break;
    case 5:
      uVar2 = *(uint *)&this_ptr->field_0xc28c;
      break;
    default:
      goto switchD_004dd3c6_default;
    }
    *(uint *)damage_info = uVar2;
  }
switchD_004dd3c6_default:
  iVar1 = *(int *)damage_info;
  if (((((iVar1 == *(int *)&this_ptr->field_0xc268) || (iVar1 == *(int *)&this_ptr->field_0xc26c))
       || (iVar1 == *(int *)&this_ptr->field_0xc270)) ||
      ((iVar1 == *(int *)&this_ptr->field_0xc274 || (iVar1 == *(int *)&this_ptr->field_0xc28c)))) ||
     (iVar1 == *(int *)&this_ptr->field_0xc290)) {
    local_14 = *(float *)(damage_info + 0x2c);
    if (*(int *)&this_ptr->field_0xc290 == *(int *)damage_info) {
      local_14 = 0.05;
    }
    if (*(int *)&this_ptr->field_0xc28c == *(int *)damage_info) {
      local_14 = 0.02;
    }
    if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
      local_14 = 1.0;
    }
    iVar1 = core_actor_cpp_FUN_0040cd00(local_14);
    if (iVar1 != 0) {
      body_part = core_bodypart_cpp_FUN_00418940
                            ((CVector3f *)&this_ptr->field_0x20,
                             (UOrientationVector *)&this_ptr->field_0x30,
                             (CVector3f *)(damage_info + 0xc),(CDemonActor *)this_ptr,0,0,
                             *(EBloodType *)&this_ptr->field_0x27a0);
      core_charactr_cpp_FUN_00431210((CCharacter *)this_ptr,body_part,*(int *)damage_info,1);
      if (*(int *)damage_info == *(int *)&this_ptr->field_0xc268) {
        core_charactr_cpp_FUN_00431210
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0xc26c,1);
      }
      if (*(int *)&this_ptr->field_0xc270 == *(int *)damage_info) {
        core_charactr_cpp_FUN_00431210
                  ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0xc274,1);
      }
      if (*(int *)&this_ptr->field_0xc28c == *(int *)damage_info) {
        initial_velocity = (CVector3f *)(damage_info + 0xc);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc270,initial_velocity,1);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc274,initial_velocity,1);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc268,initial_velocity,1);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc26c,initial_velocity,1);
        core_charactr_cpp_FUN_004311a0
                  ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc290,initial_velocity,1);
      }
      core_bodypart_cpp_FUN_00419b90(body_part);
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc290 * 4) == 0) {
        *(uint *)(damage_info + 4) = 0x461c3c00;
      }
      *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005e39dc;
    }
  }
  iVar1 = *(int *)damage_info;
  if (iVar1 == *(int *)&this_ptr->field_0xc290) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005e39ec;
    return;
  }
  if ((iVar1 != *(int *)&this_ptr->field_0xc288) && (iVar1 != *(int *)&this_ptr->field_0xc28c)) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005e39e4;
    return;
  }
  *(uint *)(damage_info + 4) = *(uint *)(damage_info + 4);
  return;
}
