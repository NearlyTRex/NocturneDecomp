// Name: core_gargoyle.cpp_CGargoyle_processDismemberment_FUN_004dd390
// Address: 004dd390
// Address Range: [[004dd390, 004dd628]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_processDismemberment_FUN_004dd390(CGargoyle *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gargoyle_cpp_CGargoyle_processDismemberment_FUN_004dd390(CGargoyle *this_ptr,SDamageInfo *damage_info)

{
  CVector3f *initial_velocity;
  int iVar1;
  CBodyPart *body_part;
  float local_14;
  
  if ((0.0 < *(float *)(damage_info + 0x2c)) && (*(int *)damage_info == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = this_ptr->part_indices[0];
      break;
    case 1:
      iVar1 = this_ptr->part_indices[1];
      break;
    case 2:
      iVar1 = this_ptr->part_indices[2];
      break;
    case 3:
      iVar1 = this_ptr->part_indices[3];
      break;
    case 4:
      iVar1 = this_ptr->part_indices[10];
      break;
    case 5:
      iVar1 = this_ptr->part_indices[9];
      break;
    default:
      goto switchD_004dd3c6_default;
    }
    *(int *)damage_info = iVar1;
  }
switchD_004dd3c6_default:
  iVar1 = *(int *)damage_info;
  if (((((iVar1 == this_ptr->part_indices[0]) || (iVar1 == this_ptr->part_indices[1])) ||
       (iVar1 == this_ptr->part_indices[2])) ||
      ((iVar1 == this_ptr->part_indices[3] || (iVar1 == this_ptr->part_indices[9])))) ||
     (iVar1 == this_ptr->part_indices[10])) {
    local_14 = *(float *)(damage_info + 0x2c);
    if (this_ptr->part_indices[10] == *(int *)damage_info) {
      local_14 = 0.05;
    }
    if (this_ptr->part_indices[9] == *(int *)damage_info) {
      local_14 = 0.02;
    }
    if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
      local_14 = 1.0;
    }
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(local_14);
    if (iVar1 != 0) {
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418940
                            (&(this_ptr->base).base.base.location.position,
                             &(this_ptr->base).base.base.orient,(CVector3f *)(damage_info + 0xc),
                             (CDemonActor *)this_ptr,0,0,
                             *(EBloodType *)&(this_ptr->base).base.field_0x27a0);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                ((CCharacter *)this_ptr,body_part,*(int *)damage_info,1);
      if (*(int *)damage_info == this_ptr->part_indices[0]) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                  ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[1],1);
      }
      if (this_ptr->part_indices[2] == *(int *)damage_info) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                  ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[3],1);
      }
      if (this_ptr->part_indices[9] == *(int *)damage_info) {
        initial_velocity = (CVector3f *)(damage_info + 0xc);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[2],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[0],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[10],initial_velocity,1);
      }
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(body_part);
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[10] * 4) == 0)
      {
        *(uint *)(damage_info + 4) = 0x461c3c00;
      }
      *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005e39dc;
    }
  }
  iVar1 = *(int *)damage_info;
  if (iVar1 == this_ptr->part_indices[10]) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005e39ec;
    return;
  }
  if ((iVar1 != this_ptr->part_indices[8]) && (iVar1 != this_ptr->part_indices[9])) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005e39e4;
    return;
  }
  *(uint *)(damage_info + 4) = *(uint *)(damage_info + 4);
  return;
}
