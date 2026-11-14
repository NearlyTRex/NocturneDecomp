// Name: core_cow.cpp_CZombieCow_processDismemberment_FUN_00445730
// Address: 00445730
// Address Range: [[00445730, 004459a5]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_processDismemberment_FUN_00445730(CZombieCow *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cow_cpp_CZombieCow_processDismemberment_FUN_00445730(CZombieCow *this_ptr,SDamageInfo *damage_info)

{
  CVector3f *initial_velocity;
  int iVar1;
  CBodyPart *body_part;
  float local_14;
  
  if ((0.0 < damage_info->dismember_prob) && (damage_info->hit_part_index == -1)) {
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
      goto switchD_00445766_default;
    }
    damage_info->hit_part_index = iVar1;
  }
switchD_00445766_default:
  iVar1 = damage_info->hit_part_index;
  if ((((iVar1 == this_ptr->part_indices[7]) || (iVar1 == this_ptr->part_indices[8])) ||
      (iVar1 == this_ptr->part_indices[9])) ||
     ((iVar1 == this_ptr->part_indices[0] || (iVar1 == this_ptr->part_indices[6])))) {
    local_14 = damage_info->dismember_prob;
    if (g_CGamePtr->gratuitous_dismemberment != 0) {
      local_14 = 1.0;
    }
    if (g_CGamePtr->blood_flag == 0) {
      local_14 = 0.0;
    }
    iVar1 = core_actor_cpp_randomChance_FUN_0040cf40(local_14);
    if (iVar1 != 0) {
      initial_velocity = &damage_info->impact_point;
      body_part = core_bodypart_cpp_createBodyPart_FUN_00414550
                            (&(this_ptr->base).base.base.location.position,
                             &(this_ptr->base).base.base.orient,initial_velocity,
                             (CDemonActor *)this_ptr,0,0,BLOOD_TYPE_RED);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
                ((CCharacter *)this_ptr,body_part,damage_info->hit_part_index,1);
      if (damage_info->hit_part_index == this_ptr->part_indices[6]) {
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  ((CCharacter *)this_ptr,this_ptr->part_indices[0],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  ((CCharacter *)this_ptr,this_ptr->part_indices[2],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  ((CCharacter *)this_ptr,this_ptr->part_indices[4],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  ((CCharacter *)this_ptr,this_ptr->part_indices[5],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  ((CCharacter *)this_ptr,this_ptr->part_indices[7],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  ((CCharacter *)this_ptr,this_ptr->part_indices[8],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  ((CCharacter *)this_ptr,this_ptr->part_indices[9],initial_velocity,1);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_00434810
                ((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_004157c0(body_part);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] == 0) {
        damage_info->damage_amount = 9999.0;
      }
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[7]] == 0) {
        damage_info->damage_amount = 9999.0;
      }
      damage_info->gore_multiplier = damage_info->gore_multiplier * (float)_DAT_005b99b5;
    }
  }
  if (this_ptr->part_indices[0] != damage_info->hit_part_index) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005b99bd;
    return;
  }
  damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005b99c5;
  return;
}
