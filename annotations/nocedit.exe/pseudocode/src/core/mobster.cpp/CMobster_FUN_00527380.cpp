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
  
  if ((0.0 < damage_info->weapon_damage_modifier) && (damage_info->fire_type == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = this_ptr->part_larm;
      break;
    case 1:
      iVar1 = this_ptr->part_l4arm;
      break;
    case 2:
      iVar1 = this_ptr->part_rarm;
      break;
    case 3:
      iVar1 = this_ptr->part_r4arm;
      break;
    case 4:
      iVar1 = this_ptr->part_head;
      break;
    case 5:
      iVar1 = this_ptr->part_torso;
      break;
    default:
      goto switchD_005273b9_default;
    }
    damage_info->fire_type = iVar1;
  }
switchD_005273b9_default:
  iVar1 = damage_info->fire_type;
  if (((((iVar1 != this_ptr->part_larm) && (iVar1 != this_ptr->part_l4arm)) &&
       (iVar1 != this_ptr->part_rarm)) &&
      ((iVar1 != this_ptr->part_r4arm && (iVar1 != this_ptr->part_torso)))) &&
     (iVar1 != this_ptr->part_head)) goto LAB_0052761a;
  if (this_ptr->part_torso == damage_info->fire_type) {
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
    if ((float)0.33300000000000002 <= fVar2) {
      if (0.66600000000000004 <= (double)fVar2) goto LAB_00527413;
      iVar1 = this_ptr->part_rarm;
    }
    else {
      iVar1 = this_ptr->part_larm;
    }
    damage_info->fire_type = iVar1;
  }
LAB_00527413:
  local_1c = damage_info->weapon_damage_modifier;
  if (this_ptr->part_head == damage_info->fire_type) {
    local_1c = 0.05;
  }
  if (this_ptr->part_torso == damage_info->fire_type) {
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
    body_part = core_bodypart_cpp_createBodyPart_FUN_00418e10();
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
              ((CCharacter *)this_ptr,body_part,damage_info->fire_type,0);
    if (damage_info->fire_type == this_ptr->part_larm) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                ((CCharacter *)this_ptr,body_part,this_ptr->part_l4arm,0);
    }
    if (this_ptr->part_rarm == damage_info->fire_type) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                ((CCharacter *)this_ptr,body_part,this_ptr->part_r4arm,0);
    }
    if (this_ptr->part_torso == damage_info->fire_type) {
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_rarm);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_r4arm);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_larm);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_l4arm);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                ((CCharacter *)this_ptr,this_ptr->part_head);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    }
    core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
              ((CCharacter *)this_ptr,"limb?.wav");
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_0041a050(body_part);
    if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_head] == 0) {
      damage_info->damage_amount = 9999.0;
    }
    damage_info->damage_flags = (int)((float)damage_info->damage_flags * (float)7);
    if ((damage_info->fire_type == this_ptr->part_rarm) ||
       (damage_info->fire_type == this_ptr->part_r4arm)) {
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,1,(CVector3f *)0x0);
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    }
    if ((damage_info->fire_type == this_ptr->part_larm) ||
       (damage_info->fire_type == this_ptr->part_l4arm)) {
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
    }
  }
LAB_0052761a:
  iVar1 = damage_info->fire_type;
  if (iVar1 == this_ptr->part_head) {
    damage_info->damage_amount = damage_info->damage_amount * (float)2.5;
    return;
  }
  if ((iVar1 != this_ptr->part_waist) && (iVar1 != this_ptr->part_torso)) {
    damage_info->damage_amount = damage_info->damage_amount * (float)0.5;
    return;
  }
  damage_info->damage_amount = damage_info->damage_amount;
  return;
}
