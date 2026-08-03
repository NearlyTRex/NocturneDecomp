// Name: core_zombie.cpp_CZombie_processDismemberment_FUN_00561cf0
// Address: 00561cf0
// Address Range: [[00561cf0, 00561fba]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_processDismemberment_FUN_00561cf0(CZombie *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_zombie_cpp_CZombie_processDismemberment_FUN_00561cf0(CZombie *this_ptr,SDamageInfo *damage_info)

{
  CVector3f *initial_velocity;
  int iVar1;
  CBodyPart *body_part;
  float local_14;
  
  if ((0.0 < damage_info->dismember_prob) && (damage_info->hit_part_index == -1)) {
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
      iVar1 = this_ptr->part_indices[6];
      break;
    case 5:
      iVar1 = this_ptr->part_indices[5];
      break;
    default:
      goto switchD_00561d26_default;
    }
    damage_info->hit_part_index = iVar1;
  }
switchD_00561d26_default:
  iVar1 = damage_info->hit_part_index;
  if (((((iVar1 == this_ptr->part_indices[0]) || (iVar1 == this_ptr->part_indices[1])) ||
       (iVar1 == this_ptr->part_indices[2])) ||
      ((iVar1 == this_ptr->part_indices[3] || (iVar1 == this_ptr->part_indices[5])))) ||
     (iVar1 == this_ptr->part_indices[6])) {
    local_14 = damage_info->dismember_prob;
    if (this_ptr->part_indices[6] == damage_info->hit_part_index) {
      local_14 = 0.05;
    }
    if (this_ptr->part_indices[5] == damage_info->hit_part_index) {
      local_14 = 0.02;
    }
    if (g_CGame_PTR_005b9354->gratuitous_dismemberment != 0) {
      local_14 = 1.0;
    }
    if (g_CGame_PTR_005b9354->blood_flag == 0) {
      local_14 = 0.0;
    }
    iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(local_14);
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
      if (this_ptr->part_indices[5] == damage_info->hit_part_index) {
        initial_velocity = &damage_info->impact_point;
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  ((CCharacter *)this_ptr,this_ptr->part_indices[2],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  ((CCharacter *)this_ptr,this_ptr->part_indices[0],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427e40
                  ((CCharacter *)this_ptr,this_ptr->part_indices[6],initial_velocity,0);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042b490
                ((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(body_part);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] == 0) {
        damage_info->damage_amount = 9999.0;
      }
      damage_info->gore_multiplier = damage_info->gore_multiplier * (float)7;
      if (this_ptr->part_indices[4] < 0) {
        damage_info->damage_amount = 999.0;
      }
    }
  }
  iVar1 = damage_info->hit_part_index;
  if (iVar1 == this_ptr->part_indices[6]) {
    damage_info->damage_amount = damage_info->damage_amount * (float)2.5;
    return;
  }
  if ((iVar1 != this_ptr->part_indices[4]) && (iVar1 != this_ptr->part_indices[5])) {
    damage_info->damage_amount = damage_info->damage_amount * (float)0.5;
    return;
  }
  damage_info->damage_amount = damage_info->damage_amount;
  return;
}
