// Name: core_mobster.cpp_CMobster_processDismemberment_FUN_004ffcc0
// Address: 004ffcc0
// Address Range: [[004ffcc0, 0050007b]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_processDismemberment_FUN_004ffcc0(CMobster *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_processDismemberment_FUN_004ffcc0(CMobster *this_ptr,SDamageInfo *damage_info)

{
  CVector3f *initial_velocity;
  int iVar1;
  float fVar2;
  CBodyPart *body_part;
  float local_1c;
  
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
      iVar1 = this_ptr->part_indices[10];
      break;
    case 5:
      iVar1 = this_ptr->part_indices[9];
      break;
    default:
      goto switchD_004ffcf9_default;
    }
    damage_info->hit_part_index = iVar1;
  }
switchD_004ffcf9_default:
  iVar1 = damage_info->hit_part_index;
  if (((((iVar1 != this_ptr->part_indices[0]) && (iVar1 != this_ptr->part_indices[1])) &&
       (iVar1 != this_ptr->part_indices[2])) &&
      ((iVar1 != this_ptr->part_indices[3] && (iVar1 != this_ptr->part_indices[9])))) &&
     (iVar1 != this_ptr->part_indices[10])) goto LAB_004fff5a;
  if (this_ptr->part_indices[9] == damage_info->hit_part_index) {
    fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
    if ((float)_DAT_005deecd <= fVar2) {
      if (_DAT_005deed5 <= (double)fVar2) goto LAB_004ffd53;
      iVar1 = this_ptr->part_indices[2];
    }
    else {
      iVar1 = this_ptr->part_indices[0];
    }
    damage_info->hit_part_index = iVar1;
  }
LAB_004ffd53:
  local_1c = damage_info->dismember_prob;
  if (this_ptr->part_indices[10] == damage_info->hit_part_index) {
    local_1c = 0.05;
  }
  if (this_ptr->part_indices[9] == damage_info->hit_part_index) {
    local_1c = 0.06;
  }
  if (g_CGamePtr->gratuitous_dismemberment != 0) {
    local_1c = 1.0;
  }
  if (g_CGamePtr->blood_flag == 0) {
    local_1c = 0.0;
  }
  iVar1 = core_actor_cpp_randomChance_FUN_0040d060(local_1c);
  if (iVar1 != 0) {
    body_part = core_bodypart_cpp_createBodyPart_FUN_004154f0
                          (&(this_ptr->base).base.base.location.position,
                           &(this_ptr->base).base.base.orient,&damage_info->impact_point,
                           (CDemonActor *)this_ptr,0,0,BLOOD_TYPE_RED);
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
              ((CCharacter *)this_ptr,body_part,damage_info->hit_part_index,0);
    if (damage_info->hit_part_index == this_ptr->part_indices[0]) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[1],0);
    }
    if (this_ptr->part_indices[2] == damage_info->hit_part_index) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[3],0);
    }
    if (this_ptr->part_indices[9] == damage_info->hit_part_index) {
      initial_velocity = &damage_info->impact_point;
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427770
                ((CCharacter *)this_ptr,this_ptr->part_indices[2],initial_velocity,0);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427770
                ((CCharacter *)this_ptr,this_ptr->part_indices[3],initial_velocity,0);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427770
                ((CCharacter *)this_ptr,this_ptr->part_indices[0],initial_velocity,0);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427770
                ((CCharacter *)this_ptr,this_ptr->part_indices[1],initial_velocity,0);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00427770
                ((CCharacter *)this_ptr,this_ptr->part_indices[10],initial_velocity,0);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    }
    core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042b260
              ((CCharacter *)this_ptr,"limb?.wav");
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(body_part);
    if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]] == 0) {
      damage_info->damage_amount = 9999.0;
    }
    damage_info->gore_multiplier = damage_info->gore_multiplier * (float)_DAT_005deedd;
    if ((damage_info->hit_part_index == this_ptr->part_indices[2]) ||
       (damage_info->hit_part_index == this_ptr->part_indices[3])) {
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    }
    if ((damage_info->hit_part_index == this_ptr->part_indices[0]) ||
       (damage_info->hit_part_index == this_ptr->part_indices[1])) {
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    }
  }
LAB_004fff5a:
  iVar1 = damage_info->hit_part_index;
  if (iVar1 == this_ptr->part_indices[10]) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005deeed;
    return;
  }
  if ((iVar1 != this_ptr->part_indices[8]) && (iVar1 != this_ptr->part_indices[9])) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005deee5;
    return;
  }
  damage_info->damage_amount = damage_info->damage_amount;
  return;
}
