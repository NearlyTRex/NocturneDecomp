// Name: core_moocow.cpp_CMooCow_processDismemberment_FUN_00521810
// Address: 00521810
// Address Range: [[00521810, 00521989]]
// Convention: __cdecl
// Signature: void __cdecl core_moocow_cpp_CMooCow_processDismemberment_FUN_00521810(CMooCow *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moocow_cpp_CMooCow_processDismemberment_FUN_00521810(CMooCow *this_ptr,SDamageInfo *damage_info)

{
  CVector3f *initial_velocity;
  int iVar1;
  CBodyPart *body_part;
  float local_14;
  
  if ((damage_info->hit_part_index == this_ptr->part_indices[0]) ||
     (damage_info->hit_part_index == this_ptr->part_indices[5])) {
    local_14 = damage_info->dismember_prob;
    if (g_CGamePtr->gratuitous_dismemberment != 0) {
      local_14 = 1.0;
    }
    if (g_CGamePtr->blood_flag == 0) {
      local_14 = 0.0;
    }
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(local_14);
    if (iVar1 != 0) {
      initial_velocity = &damage_info->impact_point;
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418940
                            (&(this_ptr->base).base.location.position,&(this_ptr->base).base.orient,
                             initial_velocity,(CDemonActor *)this_ptr,0,0,BLOOD_TYPE_RED);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                (&this_ptr->base,body_part,damage_info->hit_part_index,0);
      if (damage_info->hit_part_index == this_ptr->part_indices[5]) {
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (&this_ptr->base,this_ptr->part_indices[0],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (&this_ptr->base,this_ptr->part_indices[1],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (&this_ptr->base,this_ptr->part_indices[2],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (&this_ptr->base,this_ptr->part_indices[3],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  (&this_ptr->base,this_ptr->part_indices[4],initial_velocity,0);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_004352e0
                (&this_ptr->base,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(body_part);
      if ((this_ptr->base).model.part_data.visibility_flags[this_ptr->part_indices[0]] == 0) {
        damage_info->damage_amount = 9999.0;
      }
      damage_info->gore_multiplier = damage_info->gore_multiplier * (float)_DAT_005ea3ea;
    }
  }
  if (this_ptr->part_indices[0] == damage_info->hit_part_index) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005ea3fa;
    return;
  }
  damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005ea3f2;
  return;
}
