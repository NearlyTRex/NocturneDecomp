// Name: core_imp.cpp_CImp_processDismemberment_FUN_004fab60
// Address: 004fab60
// MANUAL RECONSTRUCTION
// Address Range: [[004fab60, 004fadf5]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_processDismemberment_FUN_004fab60(CImp *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_imp_cpp_CImp_processDismemberment_FUN_004fab60(CImp *this_ptr,SDamageInfo *damage_info)

{
  int iVar1;
  int iVar2;
  CBodyPart *body_part;
  float local_14;
  CVector3f *initial_velocity;

  if ((0.0 < damage_info->dismember_prob) && (damage_info->hit_part_index == -1)) {
#if NOCTURNE_AUTHENTIC_RNG
    iVar1 = rand();
#else
    iVar1 = nocturne_rng_sim();
#endif
    switch(iVar1 % 6) {
    case 0:
      iVar2 = this_ptr->part_indices[0];
      break;
    case 1:
      iVar2 = this_ptr->part_indices[1];
      break;
    case 2:
      iVar2 = this_ptr->part_indices[2];
      break;
    case 3:
      iVar2 = this_ptr->part_indices[3];
      break;
    case 4:
      iVar2 = this_ptr->part_indices[10];
      break;
    case 5:
      iVar2 = this_ptr->part_indices[9];
      break;
    default:
      goto switchD_004fab96_default;
    }
    damage_info->hit_part_index = iVar2;
  }
switchD_004fab96_default:
  iVar2 = damage_info->hit_part_index;
  if (((((iVar2 == this_ptr->part_indices[0]) || (iVar2 == this_ptr->part_indices[1])) ||
       (iVar2 == this_ptr->part_indices[2])) ||
      ((iVar2 == this_ptr->part_indices[3] || (iVar2 == this_ptr->part_indices[9])))) ||
     (iVar2 == this_ptr->part_indices[10])) {
    local_14 = damage_info->dismember_prob;
    if (this_ptr->part_indices[10] == damage_info->hit_part_index) {
      local_14 = 0.05;
    }
    if (this_ptr->part_indices[9] == damage_info->hit_part_index) {
      local_14 = 0.02;
    }
    if (g_CGamePtr->gratuitous_dismemberment != 0) {
      local_14 = 1.0;
    }
    if (g_CGamePtr->blood_flag == 0) {
      local_14 = 0.0;
    }
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd10(local_14);
    if (iVar2 != 0) {
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418e10
                            (&(this_ptr->base).base.base.location.position,
                             &(this_ptr->base).base.base.orient,&damage_info->impact_point,
                             (CDemonActor *)this_ptr,0,0,(this_ptr->base).base.blood_type);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                ((CCharacter *)this_ptr,body_part,damage_info->hit_part_index,1);
      if (damage_info->hit_part_index == this_ptr->part_indices[0]) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                  ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[1],0);
      }
      if (this_ptr->part_indices[2] == damage_info->hit_part_index) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                  ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[3],0);
      }
      if (this_ptr->part_indices[9] == damage_info->hit_part_index) {
        initial_velocity = &damage_info->impact_point;
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[2],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[0],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[1],initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[10],initial_velocity,1);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
                ((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(body_part);
      damage_info->gore_multiplier = damage_info->gore_multiplier * (float)7;
    }
  }
  iVar2 = damage_info->hit_part_index;
  if (iVar2 == this_ptr->part_indices[10]) {
    damage_info->damage_amount = damage_info->damage_amount * (float)2.5;
    return;
  }
  if ((iVar2 != this_ptr->part_indices[8]) && (iVar2 != this_ptr->part_indices[9])) {
    damage_info->damage_amount = damage_info->damage_amount * (float)0.5;
    return;
  }
  damage_info->damage_amount = damage_info->damage_amount;
  return;
}
