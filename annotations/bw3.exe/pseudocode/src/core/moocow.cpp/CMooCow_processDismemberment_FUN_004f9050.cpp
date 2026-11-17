// Name: core_moocow.cpp_CMooCow_processDismemberment_FUN_004f9050
// Address: 004f9050
// Address Range: [[004f9050, 004f91c9]]
// Convention: __cdecl
// Signature: void __cdecl core_moocow_cpp_CMooCow_processDismemberment_FUN_004f9050(CMooCow *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_moocow_cpp_CMooCow_processDismemberment_FUN_004f9050(CMooCow *this_ptr,SDamageInfo *damage_info)

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
    iVar1 = core_actor_cpp_randomChance_FUN_0040cf40(local_14);
    if (iVar1 != 0) {
      initial_velocity = &damage_info->impact_point;
      body_part = core_bodypart_cpp_createBodyPart_FUN_00414550
                            (&(this_ptr->base).base.location.position,&(this_ptr->base).base.orient,
                             initial_velocity,(CDemonActor *)this_ptr,0,0,BLOOD_TYPE_RED);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
                (&this_ptr->base,body_part,damage_info->hit_part_index,1);
      if (damage_info->hit_part_index == this_ptr->part_indices[5]) {
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  (&this_ptr->base,this_ptr->part_indices[0],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  (&this_ptr->base,this_ptr->part_indices[1],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  (&this_ptr->base,this_ptr->part_indices[2],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  (&this_ptr->base,this_ptr->part_indices[3],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  (&this_ptr->base,this_ptr->part_indices[4],initial_velocity,1);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_00434810
                (&this_ptr->base,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_004157c0(body_part);
      if ((this_ptr->base).model.part_data.visibility_flags[this_ptr->part_indices[0]] == 0) {
        damage_info->damage_amount = 9999.0;
      }
      damage_info->gore_multiplier = damage_info->gore_multiplier * (float)7;
    }
  }
  if (this_ptr->part_indices[0] == damage_info->hit_part_index) {
    damage_info->damage_amount = damage_info->damage_amount * (float)2.5;
    return;
  }
  damage_info->damage_amount = damage_info->damage_amount * (float)0.5;
  return;
}
