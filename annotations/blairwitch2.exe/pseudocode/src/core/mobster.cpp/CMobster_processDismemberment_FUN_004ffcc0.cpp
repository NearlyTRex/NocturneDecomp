// Name: core_mobster.cpp_CMobster_processDismemberment_FUN_004ffcc0
// Address: 004ffcc0
// Address Range: [[004ffcc0, 0050007b]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_processDismemberment_FUN_004ffcc0(CMobster *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_processDismemberment_FUN_004ffcc0(CMobster *this_ptr,SDamageInfo *damage_info)

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
      uVar3 = *(uint *)&this_ptr->field_0x10b9c;
      break;
    case 1:
      uVar3 = *(uint *)&this_ptr->field_0x10ba0;
      break;
    case 2:
      uVar3 = *(uint *)&this_ptr->field_0x10ba4;
      break;
    case 3:
      uVar3 = *(uint *)&this_ptr->field_0x10ba8;
      break;
    case 4:
      uVar3 = *(uint *)&this_ptr->field_0x10bc4;
      break;
    case 5:
      uVar3 = *(uint *)&this_ptr->field_0x10bc0;
      break;
    default:
      goto switchD_004ffcf9_default;
    }
    *(uint *)damage_info = uVar3;
  }
switchD_004ffcf9_default:
  iVar1 = *(int *)damage_info;
  if (((((iVar1 != *(int *)&this_ptr->field_0x10b9c) && (iVar1 != *(int *)&this_ptr->field_0x10ba0))
       && (iVar1 != *(int *)&this_ptr->field_0x10ba4)) &&
      ((iVar1 != *(int *)&this_ptr->field_0x10ba8 && (iVar1 != *(int *)&this_ptr->field_0x10bc0))))
     && (iVar1 != *(int *)&this_ptr->field_0x10bc4)) goto LAB_004fff5a;
  if (*(int *)&this_ptr->field_0x10bc0 == *(int *)damage_info) {
    fVar2 = (float)core_actor_cpp_FUN_0040cf60(0,0x3f800000);
    if ((float)_DAT_005deecd <= fVar2) {
      if (_DAT_005deed5 <= (double)fVar2) goto LAB_004ffd53;
      uVar3 = *(uint *)&this_ptr->field_0x10ba4;
    }
    else {
      uVar3 = *(uint *)&this_ptr->field_0x10b9c;
    }
    *(uint *)damage_info = uVar3;
  }
LAB_004ffd53:
  local_1c = *(float *)(damage_info + 0x2c);
  if (*(int *)&this_ptr->field_0x10bc4 == *(int *)damage_info) {
    local_1c = 0.05;
  }
  if (*(int *)&this_ptr->field_0x10bc0 == *(int *)damage_info) {
    local_1c = 0.06;
  }
  if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
    local_1c = 1.0;
  }
  if (*(int *)&g_CGamePtr->field_0x14 == 0) {
    local_1c = 0.0;
  }
  iVar1 = core_actor_cpp_FUN_0040d060(local_1c);
  if (iVar1 != 0) {
    body_part = core_bodypart_cpp_FUN_004154f0
                          ((CVector3f *)&this_ptr->field_0x20,
                           (UOrientationVector *)&this_ptr->field_0x30,
                           (CVector3f *)(damage_info + 0xc),(CDemonActor *)this_ptr,0,0,
                           BLOOD_TYPE_RED);
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
              ((CCharacter *)this_ptr,body_part,*(int *)damage_info,0);
    if (*(int *)damage_info == *(int *)&this_ptr->field_0x10b9c) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0x10ba0,0);
    }
    if (*(int *)&this_ptr->field_0x10ba4 == *(int *)damage_info) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0x10ba8,0);
    }
    if (*(int *)&this_ptr->field_0x10bc0 == *(int *)damage_info) {
      initial_velocity = (CVector3f *)(damage_info + 0xc);
      core_charactr_cpp_FUN_00427770
                ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10ba4,initial_velocity,0);
      core_charactr_cpp_FUN_00427770
                ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10ba8,initial_velocity,0);
      core_charactr_cpp_FUN_00427770
                ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b9c,initial_velocity,0);
      core_charactr_cpp_FUN_00427770
                ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10ba0,initial_velocity,0);
      core_charactr_cpp_FUN_00427770
                ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10bc4,initial_velocity,0);
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,1,0);
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,0,0);
    }
    core_charactr_cpp_FUN_0042b260((CCharacter *)this_ptr,"limb?.wav");
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(body_part);
    if (*(int *)(&this_ptr->field_0x23f4 + *(int *)&this_ptr->field_0x10bc4 * 4) == 0) {
      *(uint *)(damage_info + 4) = 0x461c3c00;
    }
    *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005deedd;
    if ((*(int *)damage_info == *(int *)&this_ptr->field_0x10ba4) ||
       (*(int *)damage_info == *(int *)&this_ptr->field_0x10ba8)) {
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,1,0);
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,0,0);
    }
    if ((*(int *)damage_info == *(int *)&this_ptr->field_0x10b9c) ||
       (*(int *)damage_info == *(int *)&this_ptr->field_0x10ba0)) {
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,0,0);
    }
  }
LAB_004fff5a:
  iVar1 = *(int *)damage_info;
  if (iVar1 == *(int *)&this_ptr->field_0x10bc4) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005deeed;
    return;
  }
  if ((iVar1 != *(int *)&this_ptr->field_0x10bbc) && (iVar1 != *(int *)&this_ptr->field_0x10bc0)) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005deee5;
    return;
  }
  *(uint *)(damage_info + 4) = *(uint *)(damage_info + 4);
  return;
}
