// Name: core_mobster.cpp_CMobster_FUN_00527380
// Address: 00527380
// Address Range: [[00527380, 0052773b]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_FUN_00527380(CMobster *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mobster_cpp_CMobster_FUN_00527380(CMobster *this_ptr,SDamageInfo *damage_info)

{
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
      goto switchD_005273b9_default;
    }
    damage_info->hit_part_index = iVar1;
  }
switchD_005273b9_default:
  iVar1 = damage_info->hit_part_index;
  if (((((iVar1 != this_ptr->part_indices[0]) && (iVar1 != this_ptr->part_indices[1])) &&
       (iVar1 != this_ptr->part_indices[2])) &&
      ((iVar1 != this_ptr->part_indices[3] && (iVar1 != this_ptr->part_indices[9])))) &&
     (iVar1 != this_ptr->part_indices[10])) goto LAB_0052761a;
  if (this_ptr->part_indices[9] == damage_info->hit_part_index) {
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    if ((float)0.33300000000000002 <= fVar2) {
      if (0.66600000000000004 <= (double)fVar2) goto LAB_00527413;
      iVar1 = this_ptr->part_indices[2];
    }
    else {
      iVar1 = this_ptr->part_indices[0];
    }
    damage_info->hit_part_index = iVar1;
  }
LAB_00527413:
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
  iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(local_1c);
  if (iVar1 != 0) {
    body_part = core_bodypart_cpp_createBodyPart_FUN_00418e10
                          (&(this_ptr->base).base.base.location.position,
                           &(this_ptr->base).base.base.orient,&damage_info->impact_point,
                           (CDemonActor *)this_ptr,0,0,0);
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
              ((CCharacter *)this_ptr,body_part,damage_info->hit_part_index,0);
    if (damage_info->hit_part_index == this_ptr->part_indices[0]) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[1],0);
    }
    if (this_ptr->part_indices[2] == damage_info->hit_part_index) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[3],0);
    }
    if (this_ptr->part_indices[9] == damage_info->hit_part_index) {
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_indices[2]);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_indices[3]);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_indices[0]);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_indices[1]);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_indices[10]);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    }
    core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
              ((CCharacter *)this_ptr,"limb?.wav");
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(body_part);
    if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]] == 0) {
      damage_info->damage_amount = 9999.0;
    }
    damage_info->gore_multiplier = damage_info->gore_multiplier * (float)7;
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
LAB_0052761a:
  iVar1 = damage_info->hit_part_index;
  if (iVar1 == this_ptr->part_indices[10]) {
    damage_info->damage_amount = damage_info->damage_amount * (float)2.5;
    return;
  }
  if ((iVar1 != this_ptr->part_indices[8]) && (iVar1 != this_ptr->part_indices[9])) {
    damage_info->damage_amount = damage_info->damage_amount * (float)0.5;
    return;
  }
  damage_info->damage_amount = damage_info->damage_amount;
  return;
}
