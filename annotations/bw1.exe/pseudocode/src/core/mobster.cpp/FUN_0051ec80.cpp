// Name: core_mobster.cpp_FUN_0051ec80
// Address: 0051ec80
// Address Range: [[0051ec80, 0051f03b]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_FUN_0051ec80(CMobster *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_FUN_0051ec80(CMobster *this_ptr,SDamageInfo *damage_info)

{
  CVector3f *initial_velocity;
  int iVar1;
  float fVar2;
  uint uVar3;
  CBodyPart *body_part;
  float local_1c;
  
  if ((0.0 < *(float *)(damage_info + 0x2c)) && (*(int *)damage_info == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      uVar3 = *(uint *)&this_ptr->field_0xc30c;
      break;
    case 1:
      uVar3 = *(uint *)&this_ptr->field_0xc310;
      break;
    case 2:
      uVar3 = *(uint *)&this_ptr->field_0xc314;
      break;
    case 3:
      uVar3 = *(uint *)&this_ptr->field_0xc318;
      break;
    case 4:
      uVar3 = *(uint *)&this_ptr->field_0xc334;
      break;
    case 5:
      uVar3 = *(uint *)&this_ptr->field_0xc330;
      break;
    default:
      goto switchD_0051ecb9_default;
    }
    *(uint *)damage_info = uVar3;
  }
switchD_0051ecb9_default:
  iVar1 = *(int *)damage_info;
  if (((((iVar1 != *(int *)&this_ptr->field_0xc30c) && (iVar1 != *(int *)&this_ptr->field_0xc310))
       && (iVar1 != *(int *)&this_ptr->field_0xc314)) &&
      ((iVar1 != *(int *)&this_ptr->field_0xc318 && (iVar1 != *(int *)&this_ptr->field_0xc330)))) &&
     (iVar1 != *(int *)&this_ptr->field_0xc334)) goto LAB_0051ef1a;
  if (*(int *)&this_ptr->field_0xc330 == *(int *)damage_info) {
    fVar2 = (float)core_actor_cpp_FUN_0040cc00(0,0x3f800000);
    if ((float)_DAT_005e9f1a <= fVar2) {
      if (_DAT_005e9f22 <= (double)fVar2) goto LAB_0051ed13;
      uVar3 = *(uint *)&this_ptr->field_0xc314;
    }
    else {
      uVar3 = *(uint *)&this_ptr->field_0xc30c;
    }
    *(uint *)damage_info = uVar3;
  }
LAB_0051ed13:
  local_1c = *(float *)(damage_info + 0x2c);
  if (*(int *)&this_ptr->field_0xc334 == *(int *)damage_info) {
    local_1c = 0.05;
  }
  if (*(int *)&this_ptr->field_0xc330 == *(int *)damage_info) {
    local_1c = 0.06;
  }
  if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
    local_1c = 1.0;
  }
  if (*(int *)&g_CGamePtr->field_0x14 == 0) {
    local_1c = 0.0;
  }
  iVar1 = core_actor_cpp_FUN_0040cd00(local_1c);
  if (iVar1 != 0) {
    body_part = core_bodypart_cpp_FUN_00418940
                          ((CVector3f *)&this_ptr->field_0x20,
                           (UOrientationVector *)&this_ptr->field_0x30,
                           (CVector3f *)(damage_info + 0xc),(CDemonActor *)this_ptr,0,0,
                           BLOOD_TYPE_RED);
    core_charactr_cpp_FUN_00431210((CCharacter *)this_ptr,body_part,*(int *)damage_info,0);
    if (*(int *)damage_info == *(int *)&this_ptr->field_0xc30c) {
      core_charactr_cpp_FUN_00431210
                ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0xc310,0);
    }
    if (*(int *)&this_ptr->field_0xc314 == *(int *)damage_info) {
      core_charactr_cpp_FUN_00431210
                ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0xc318,0);
    }
    if (*(int *)&this_ptr->field_0xc330 == *(int *)damage_info) {
      initial_velocity = (CVector3f *)(damage_info + 0xc);
      core_charactr_cpp_FUN_004311a0
                ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc314,initial_velocity,0);
      core_charactr_cpp_FUN_004311a0
                ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc318,initial_velocity,0);
      core_charactr_cpp_FUN_004311a0
                ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc30c,initial_velocity,0);
      core_charactr_cpp_FUN_004311a0
                ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc310,initial_velocity,0);
      core_charactr_cpp_FUN_004311a0
                ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc334,initial_velocity,0);
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,1,0);
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,0,0);
    }
    core_charactr_cpp_FUN_004352e0((CCharacter *)this_ptr,"limb?.wav");
    core_bodypart_cpp_FUN_00419b90(body_part);
    if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc334 * 4) == 0) {
      *(uint *)(damage_info + 4) = 0x461c3c00;
    }
    *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005e9f2a;
    if ((*(int *)damage_info == *(int *)&this_ptr->field_0xc314) ||
       (*(int *)damage_info == *(int *)&this_ptr->field_0xc318)) {
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,1,0);
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,0,0);
    }
    if ((*(int *)damage_info == *(int *)&this_ptr->field_0xc30c) ||
       (*(int *)damage_info == *(int *)&this_ptr->field_0xc310)) {
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,0,0);
    }
  }
LAB_0051ef1a:
  iVar1 = *(int *)damage_info;
  if (iVar1 == *(int *)&this_ptr->field_0xc334) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005e9f3a;
    return;
  }
  if ((iVar1 != *(int *)&this_ptr->field_0xc32c) && (iVar1 != *(int *)&this_ptr->field_0xc330)) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005e9f32;
    return;
  }
  *(uint *)(damage_info + 4) = *(uint *)(damage_info + 4);
  return;
}
