// Name: core_zombie.cpp_CZombie_processDismemberment_FUN_0058c330
// Address: 0058c330
// Address Range: [[0058c330, 0058c59f]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_processDismemberment_FUN_0058c330(CZombie *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_zombie_cpp_CZombie_processDismemberment_FUN_0058c330(CZombie *this_ptr,SDamageInfo *damage_info)

{
  CVector3f *initial_velocity;
  int iVar1;
  uint uVar2;
  CBodyPart *body_part;
  float local_14;
  
  if ((0.0 < *(float *)(damage_info + 0x2c)) && (*(int *)damage_info == -1)) {
    iVar1 = rand();
    switch(iVar1 % 6) {
    case 0:
      uVar2 = *(uint *)&this_ptr->field_0xd114;
      break;
    case 1:
      uVar2 = *(uint *)&this_ptr->field_0xd118;
      break;
    case 2:
      uVar2 = *(uint *)&this_ptr->field_0xd11c;
      break;
    case 3:
      uVar2 = *(uint *)&this_ptr->field_0xd120;
      break;
    case 4:
      uVar2 = *(uint *)&this_ptr->field_0xd12c;
      break;
    case 5:
      uVar2 = *(uint *)&this_ptr->field_0xd128;
      break;
    default:
      goto switchD_0058c366_default;
    }
    *(uint *)damage_info = uVar2;
  }
switchD_0058c366_default:
  iVar1 = *(int *)damage_info;
  if ((((iVar1 != *(int *)&this_ptr->field_0xd114) && (iVar1 != *(int *)&this_ptr->field_0xd118)) &&
      (iVar1 != *(int *)&this_ptr->field_0xd11c)) &&
     (((iVar1 != *(int *)&this_ptr->field_0xd120 && (iVar1 != *(int *)&this_ptr->field_0xd128)) &&
      (iVar1 != *(int *)&this_ptr->field_0xd12c)))) {
    return;
  }
  local_14 = *(float *)(damage_info + 0x2c);
  if (*(int *)&this_ptr->field_0xd12c == *(int *)damage_info) {
    local_14 = 0.05;
  }
  if (*(int *)&this_ptr->field_0xd128 == *(int *)damage_info) {
    local_14 = 0.02;
  }
  if (*(int *)&g_CGamePtr->field_0x204 != 0) {
    local_14 = 1.0;
  }
  if (*(int *)&g_CGamePtr->field_0x14 == 0) {
    local_14 = 0.0;
  }
  iVar1 = core_actor_cpp_randomChance_FUN_0040cf40(local_14);
  if (iVar1 != 0) {
    body_part = core_bodypart_cpp_createBodyPart_FUN_00414550
                          (&(this_ptr->base).base.base.location.position,
                           &(this_ptr->base).base.base.orient,(CVector3f *)(damage_info + 0xc),
                           (CDemonActor *)this_ptr,0,0,BLOOD_TYPE_RED);
    core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
              ((CCharacter *)this_ptr,body_part,*(int *)damage_info,1);
    if (*(int *)damage_info == *(int *)&this_ptr->field_0xd114) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
                ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0xd118,1);
    }
    if (*(int *)&this_ptr->field_0xd11c == *(int *)damage_info) {
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
                ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0xd120,1);
    }
    if (*(int *)&this_ptr->field_0xd128 == *(int *)damage_info) {
      initial_velocity = (CVector3f *)(damage_info + 0xc);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd11c,initial_velocity,1);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd120,initial_velocity,1);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd114,initial_velocity,1);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd118,initial_velocity,1);
      core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xd12c,initial_velocity,1);
    }
    core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_00434810
              ((CCharacter *)this_ptr,"limb?.wav");
    core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_004157c0(body_part);
    if (*(int *)(&(this_ptr->base).base.model.field_0x2140 + *(int *)&this_ptr->field_0xd12c * 4) ==
        0) {
      *(uint *)(damage_info + 4) = 0x461c3c00;
    }
    *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005d8907;
    if (*(int *)&this_ptr->field_0xd124 < 0) {
      *(uint *)(damage_info + 4) = 0x4479c000;
      return;
    }
  }
  return;
}
