// Name: core_cow.cpp_CZombieCow_processDismemberment_FUN_004448c0
// Address: 004448c0
// Address Range: [[004448c0, 00444b35]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_processDismemberment_FUN_004448c0(CZombieCow *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_cow_cpp_CZombieCow_processDismemberment_FUN_004448c0(CZombieCow *this_ptr,SDamageInfo *damage_info)

{
  int iVar1;
  int iVar2;
  CBodyPart *body_part;
  float local_14;
  CVector3f *initial_velocity;
  
  if ((0.0 < damage_info->dismember_prob) && (damage_info->hit_part_index == -1)) {
    iVar1 = rand();
    switch(iVar1 % 4) {
    case 0:
      iVar2 = this_ptr->part_indices[0];
      break;
    case 1:
      iVar2 = this_ptr->part_indices[7];
      break;
    case 2:
      iVar2 = this_ptr->part_indices[8];
      break;
    case 3:
      iVar2 = this_ptr->part_indices[9];
      break;
    default:
      goto switchD_004448f6_default;
    }
    damage_info->hit_part_index = iVar2;
  }
switchD_004448f6_default:
  iVar2 = damage_info->hit_part_index;
  if ((((iVar2 == this_ptr->part_indices[7]) || (iVar2 == this_ptr->part_indices[8])) ||
      (iVar2 == this_ptr->part_indices[9])) ||
     ((iVar2 == this_ptr->part_indices[0] || (iVar2 == this_ptr->part_indices[6])))) {
    local_14 = damage_info->dismember_prob;
    if (g_CGamePtr->gratuitous_dismemberment != 0) {
      local_14 = 1.0;
    }
    if (g_CGamePtr->blood_flag == 0) {
      local_14 = 0.0;
    }
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(local_14);
    if (iVar2 != 0) {
      initial_velocity = &damage_info->impact_point;
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418e10
                            (&(this_ptr->base).base.base.location.position,
                             &(this_ptr->base).base.base.orient,initial_velocity,
                             (CDemonActor *)this_ptr,0,0,0);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                ((CCharacter *)this_ptr,body_part,damage_info->hit_part_index,0);
      if (damage_info->hit_part_index == this_ptr->part_indices[6]) {
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[0],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[2],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[4],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[5],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[7],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[8],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[9],initial_velocity,0);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
                ((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(body_part);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] == 0) {
        damage_info->damage_amount = 9999.0;
      }
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[7]] == 0) {
        damage_info->damage_amount = 9999.0;
      }
      damage_info->gore_multiplier = damage_info->gore_multiplier * (float)7;
    }
  }
  if (this_ptr->part_indices[0] != damage_info->hit_part_index) {
    damage_info->damage_amount = damage_info->damage_amount * (float)0.5;
    return;
  }
  damage_info->damage_amount = damage_info->damage_amount * (float)2.5;
  return;
}
