// Name: core_cow.cpp_CZombieCow_processDismemberment_FUN_004398b0
// Address: 004398b0
// Address Range: [[004398b0, 00439b25]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_processDismemberment_FUN_004398b0(CZombieCow *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cow_cpp_CZombieCow_processDismemberment_FUN_004398b0(CZombieCow *this_ptr,SDamageInfo *damage_info)

{
  CVector3f *initial_velocity;
  int iVar1;
  CBodyPart *body_part;
  float local_14;
  
  if ((0.0 < *(float *)(damage_info + 0x2c)) && (*(int *)damage_info == -1)) {
    iVar1 = rand();
    switch(iVar1 % 4) {
    case 0:
      iVar1 = this_ptr->part_indices[0];
      break;
    case 1:
      iVar1 = this_ptr->part_indices[7];
      break;
    case 2:
      iVar1 = this_ptr->part_indices[8];
      break;
    case 3:
      iVar1 = this_ptr->part_indices[9];
      break;
    default:
      goto switchD_004398e6_default;
    }
    *(int *)damage_info = iVar1;
  }
switchD_004398e6_default:
  iVar1 = *(int *)damage_info;
  if ((((iVar1 == this_ptr->part_indices[7]) || (iVar1 == this_ptr->part_indices[8])) ||
      (iVar1 == this_ptr->part_indices[9])) ||
     ((iVar1 == this_ptr->part_indices[0] || (iVar1 == this_ptr->part_indices[6])))) {
    local_14 = *(float *)(damage_info + 0x2c);
    if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
      local_14 = 1.0;
    }
    if (*(int *)&g_CGamePtr->field_0x14 == 0) {
      local_14 = 0.0;
    }
    iVar1 = core_actor_cpp_randomChance_FUN_0040d060(local_14);
    if (iVar1 != 0) {
      initial_velocity = (CVector3f *)(damage_info + 0xc);
      body_part = core_bodypart_cpp_createBodyPart_FUN_004154f0
                            ((CVector3f *)&(this_ptr->base).base.base.field_0x20,
                             &(this_ptr->base).base.base.orient,initial_velocity,
                             (CDemonActor *)this_ptr,0,0,BLOOD_TYPE_RED);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                ((CCharacter *)this_ptr,body_part,*(int *)damage_info,0);
      if (*(int *)damage_info == this_ptr->part_indices[6]) {
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427770
                  ((CCharacter *)this_ptr,this_ptr->part_indices[0],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427770
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427770
                  ((CCharacter *)this_ptr,this_ptr->part_indices[2],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427770
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427770
                  ((CCharacter *)this_ptr,this_ptr->part_indices[4],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427770
                  ((CCharacter *)this_ptr,this_ptr->part_indices[5],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427770
                  ((CCharacter *)this_ptr,this_ptr->part_indices[7],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427770
                  ((CCharacter *)this_ptr,this_ptr->part_indices[8],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427770
                  ((CCharacter *)this_ptr,this_ptr->part_indices[9],initial_velocity,0);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042b260
                ((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(body_part);
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[0] * 4) == 0)
      {
        *(uint *)(damage_info + 4) = 0x461c3c00;
      }
      if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + this_ptr->part_indices[7] * 4) == 0)
      {
        *(uint *)(damage_info + 4) = 0x461c3c00;
      }
      *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005ce192;
    }
  }
  if (this_ptr->part_indices[0] != *(int *)damage_info) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005ce19a;
    return;
  }
  *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005ce1a2;
  return;
}
