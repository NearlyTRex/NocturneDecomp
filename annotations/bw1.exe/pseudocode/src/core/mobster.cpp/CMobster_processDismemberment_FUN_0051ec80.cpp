// Name: core_mobster.cpp_CMobster_processDismemberment_FUN_0051ec80
// Address: 0051ec80
// Address Range: [[0051ec80, 0051f03b]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_processDismemberment_FUN_0051ec80(CMobster *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mobster_cpp_CMobster_processDismemberment_FUN_0051ec80(CMobster *this_ptr,SDamageInfo *damage_info)

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
      goto switchD_0051ecb9_default;
    }
    damage_info->hit_part_index = iVar1;
  }
switchD_0051ecb9_default:
  iVar1 = damage_info->hit_part_index;
  if (((((iVar1 != this_ptr->part_indices[0]) && (iVar1 != this_ptr->part_indices[1])) &&
       (iVar1 != this_ptr->part_indices[2])) &&
      ((iVar1 != this_ptr->part_indices[3] && (iVar1 != this_ptr->part_indices[9])))) &&
     (iVar1 != this_ptr->part_indices[10])) goto LAB_0051ef1a;
  if (this_ptr->part_indices[9] == damage_info->hit_part_index) {
    fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
    if ((float)_DAT_005e9f1a <= fVar2) {
      if (_DAT_005e9f22 <= (double)fVar2) goto LAB_0051ed13;
      iVar1 = this_ptr->part_indices[2];
    }
    else {
      iVar1 = this_ptr->part_indices[0];
    }
    damage_info->hit_part_index = iVar1;
  }
LAB_0051ed13:
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
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(local_1c);
  if (iVar1 != 0) {
    body_part = core_bodypart_cpp_createBodyPart_FUN_00418940
                          (&(this_ptr->base).base.base.location.position,
                           &(this_ptr->base).base.base.orient,&damage_info->impact_point,
                           (CDemonActor *)this_ptr,0,0,BLOOD_TYPE_RED);
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
              ((CCharacter *)this_ptr,body_part,damage_info->hit_part_index,0);
    if (damage_info->hit_part_index == this_ptr->part_indices[0]) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[1],0);
    }
    if (this_ptr->part_indices[2] == damage_info->hit_part_index) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[3],0);
    }
    if (this_ptr->part_indices[9] == damage_info->hit_part_index) {
      initial_velocity = &damage_info->impact_point;
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                ((CCharacter *)this_ptr,this_ptr->part_indices[2],initial_velocity,0);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                ((CCharacter *)this_ptr,this_ptr->part_indices[3],initial_velocity,0);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                ((CCharacter *)this_ptr,this_ptr->part_indices[0],initial_velocity,0);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                ((CCharacter *)this_ptr,this_ptr->part_indices[1],initial_velocity,0);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                ((CCharacter *)this_ptr,this_ptr->part_indices[10],initial_velocity,0);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    }
    core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_004352e0
              ((CCharacter *)this_ptr,"limb?.wav");
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(body_part);
    if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]] == 0) {
      damage_info->damage_amount = 9999.0;
    }
    damage_info->gore_multiplier = damage_info->gore_multiplier * (float)_DAT_005e9f2a;
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
LAB_0051ef1a:
  iVar1 = damage_info->hit_part_index;
  if (iVar1 == this_ptr->part_indices[10]) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005e9f3a;
    return;
  }
  if ((iVar1 != this_ptr->part_indices[8]) && (iVar1 != this_ptr->part_indices[9])) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005e9f32;
    return;
  }
  damage_info->damage_amount = damage_info->damage_amount;
  return;
}
