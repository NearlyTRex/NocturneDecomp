// Name: core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00415dd0
// Address: 00415dd0
// Address Range: [[00415dd0, 0041602e]]
// Convention: __cdecl
// Signature: void __cdecl core_batcreat_cpp_CBatCreature_processDismemberment_FUN_00415dd0(CBatCreature *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_batcreat_cpp_CBatCreature_processDismemberment_FUN_00415dd0(CBatCreature *this_ptr,SDamageInfo *damage_info)

{
  CVector3f *initial_velocity;
  int iVar1;
  CBodyPart *body_part;
  float local_14;
  
  if ((0.0 < damage_info->dismember_prob) && (damage_info->hit_part_index == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = this_ptr->part_indices[8];
      break;
    case 1:
      iVar1 = this_ptr->part_indices[9];
      break;
    case 2:
      iVar1 = this_ptr->part_indices[10];
      break;
    case 3:
      iVar1 = this_ptr->part_indices[0xb];
      break;
    case 4:
      iVar1 = this_ptr->part_indices[0];
      break;
    case 5:
      iVar1 = this_ptr->part_indices[1];
      break;
    default:
      goto switchD_00415e06_default;
    }
    damage_info->hit_part_index = iVar1;
  }
switchD_00415e06_default:
  iVar1 = damage_info->hit_part_index;
  if ((((iVar1 != this_ptr->part_indices[8]) && (iVar1 != this_ptr->part_indices[9])) &&
      (iVar1 != this_ptr->part_indices[10])) &&
     (((iVar1 != this_ptr->part_indices[0xb] && (iVar1 != this_ptr->part_indices[1])) &&
      (iVar1 != this_ptr->part_indices[0])))) {
    return;
  }
  local_14 = damage_info->dismember_prob;
  if (this_ptr->part_indices[0] == damage_info->hit_part_index) {
    local_14 = 0.05;
  }
  if (this_ptr->part_indices[1] == damage_info->hit_part_index) {
    local_14 = 0.02;
  }
  if (g_CGamePtr->gratuitous_dismemberment != 0) {
    local_14 = 1.0;
  }
  if (g_CGamePtr->blood_flag == 0) {
    local_14 = 0.0;
  }
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(local_14);
  if (iVar1 != 0) {
    body_part = core_bodypart_cpp_createBodyPart_FUN_00418e10
                          (&(this_ptr->base).base.base.location.position,
                           &(this_ptr->base).base.base.orient,&damage_info->impact_point,
                           (CDemonActor *)this_ptr,0,0,(this_ptr->base).base.blood_type);
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
              ((CCharacter *)this_ptr,body_part,damage_info->hit_part_index,0);
    if (damage_info->hit_part_index == this_ptr->part_indices[8]) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[9],0);
    }
    if (this_ptr->part_indices[10] == damage_info->hit_part_index) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[0xb],0);
    }
    if (this_ptr->part_indices[1] == damage_info->hit_part_index) {
      initial_velocity = &damage_info->impact_point;
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_indices[10],initial_velocity,0);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_indices[0xb],initial_velocity,0);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_indices[8],initial_velocity,0);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_indices[9],initial_velocity,0);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_indices[0],initial_velocity,0);
    }
    core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
              ((CCharacter *)this_ptr,"limb?.wav");
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(body_part);
    if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] == 0) {
      damage_info->damage_amount = 9999.0;
    }
    damage_info->gore_multiplier = damage_info->gore_multiplier * (float)7;
    return;
  }
  return;
}
