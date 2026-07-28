// Name: core_bride.cpp_CBride_processDismemberment_FUN_00420a10
// Address: 00420a10
// Address Range: [[00420a10, 00420c3a]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_processDismemberment_FUN_00420a10(CBride *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bride_cpp_CBride_processDismemberment_FUN_00420a10(CBride *this_ptr,SDamageInfo *damage_info)

{
  int iVar1;
  CBodyPart *body_part;
  float local_20;
  
  if ((0.0 < damage_info->dismember_prob) && (damage_info->hit_part_index == -1)) {
    iVar1 = rand();
    switch(iVar1 % 5) {
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
      iVar1 = this_ptr->part_indices[8];
      break;
    default:
      goto switchD_00420a49_default;
    }
    damage_info->hit_part_index = iVar1;
  }
switchD_00420a49_default:
  iVar1 = damage_info->hit_part_index;
  if ((((iVar1 == this_ptr->part_indices[0]) || (iVar1 == this_ptr->part_indices[1])) ||
      (iVar1 == this_ptr->part_indices[2])) ||
     ((iVar1 == this_ptr->part_indices[3] || (iVar1 == this_ptr->part_indices[8])))) {
    local_20 = damage_info->dismember_prob;
    if (this_ptr->part_indices[8] == damage_info->hit_part_index) {
      local_20 = local_20 * (float)0.33300000000000002;
    }
    if (*(int *)(0x01C775EC + 0x1e0) != 0) {
      local_20 = 1.0;
    }
    if (*(int *)(0x01C775EC + 0x14) == 0) {
      local_20 = 0.0;
    }
    iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(local_20);
    if (iVar1 != 0) {
      body_part = core_bodypart_cpp_createBodyPart_FUN_00415b30
                            (&(this_ptr->base).base.base.location.position,
                             &(this_ptr->base).base.base.orient,&damage_info->impact_point,
                             (CDemonActor *)this_ptr,0,0,0);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
                ((CCharacter *)this_ptr,body_part,damage_info->hit_part_index,0);
      if (damage_info->hit_part_index == this_ptr->part_indices[0]) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
                  ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[1],0);
      }
      if (this_ptr->part_indices[2] == damage_info->hit_part_index) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
                  ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[3],0);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042b490
                ((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(body_part);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[8]] == 0) {
        damage_info->damage_amount = 9999.0;
      }
      damage_info->gore_multiplier = damage_info->gore_multiplier * (float)7;
    }
  }
  iVar1 = damage_info->hit_part_index;
  if (iVar1 == this_ptr->part_indices[8]) {
    damage_info->damage_amount = damage_info->damage_amount * (float)2.5;
    return;
  }
  if ((iVar1 != this_ptr->part_indices[7]) && (iVar1 != this_ptr->part_indices[6])) {
    damage_info->damage_amount = damage_info->damage_amount * (float)0.5;
    return;
  }
  damage_info->damage_amount = damage_info->damage_amount;
  return;
}
