// Name: core_batman.cpp_CBatman_processDismemberment_FUN_00413c40
// Address: 00413c40
// Address Range: [[00413c40, 00413f81]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_processDismemberment_FUN_00413c40(CBatman *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batman_cpp_CBatman_processDismemberment_FUN_00413c40(CBatman *this_ptr,SDamageInfo *damage_info)

{
  CVector3f *initial_velocity;
  CConsole *pCVar1;
  int iVar2;
  CBodyPart *body_part;
  byte bVar3;
  float afStackY_1028 [1011];
  CVector3f *impact_point;
  float fVar4;
  CVector3f local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  float local_28;
  float afStack_24 [4];
  float local_14;
  
  bVar3 = 0;
  impact_point = &local_40;
  if ((0.0 < damage_info->dismember_prob) && (damage_info->hit_part_index == -1)) {
    iVar2 = rand();
    switch(iVar2 % 6) {
    case 0:
      iVar2 = this_ptr->part_indices[2];
      break;
    case 1:
      iVar2 = this_ptr->part_indices[3];
      break;
    case 2:
      iVar2 = this_ptr->part_indices[4];
      break;
    case 3:
      iVar2 = this_ptr->part_indices[5];
      break;
    case 4:
      iVar2 = this_ptr->part_indices[0];
      break;
    case 5:
      iVar2 = this_ptr->part_indices[1];
      break;
    default:
      goto switchD_00413c76_default;
    }
    damage_info->hit_part_index = iVar2;
  }
switchD_00413c76_default:
  iVar2 = damage_info->hit_part_index;
  if (((((iVar2 == this_ptr->part_indices[2]) || (iVar2 == this_ptr->part_indices[3])) ||
       (iVar2 == this_ptr->part_indices[4])) ||
      ((iVar2 == this_ptr->part_indices[5] || (iVar2 == this_ptr->part_indices[1])))) ||
     (iVar2 == this_ptr->part_indices[0])) {
    local_14 = damage_info->dismember_prob;
    if (this_ptr->part_indices[0] == damage_info->hit_part_index) {
      local_14 = 0.05;
    }
    if (this_ptr->part_indices[1] == damage_info->hit_part_index) {
      local_14 = 0.02;
    }
    if (g_CGamePtr->gratuitous_dismemberment != 0) {
      local_14 = 1.0;
    }
    if (g_CGamePtr->blood_flag == 0) {
      local_14 = 0.0;
    }
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd00(local_14);
    if (iVar2 != 0) {
      body_part = core_bodypart_cpp_createBodyPart_FUN_00418940
                            (&(this_ptr->base).base.base.location.position,
                             &(this_ptr->base).base.base.orient,&damage_info->impact_point,
                             (CDemonActor *)this_ptr,0,0,(this_ptr->base).base.blood_type);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                ((CCharacter *)this_ptr,body_part,damage_info->hit_part_index,0);
      if (damage_info->hit_part_index == this_ptr->part_indices[2]) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                  ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[3],0);
      }
      if (this_ptr->part_indices[4] == damage_info->hit_part_index) {
        core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210
                  ((CCharacter *)this_ptr,body_part,this_ptr->part_indices[5],0);
      }
      if (this_ptr->part_indices[1] == damage_info->hit_part_index) {
        initial_velocity = &damage_info->impact_point;
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[4],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[5],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[2],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[3],initial_velocity,0);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                  ((CCharacter *)this_ptr,this_ptr->part_indices[0],initial_velocity,0);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_004352e0
                ((CCharacter *)this_ptr,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00419b90(body_part);
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] == 0) {
        damage_info->damage_amount = 9999.0;
      }
      damage_info->gore_multiplier = damage_info->gore_multiplier * (float)_DAT_005d3b49;
    }
  }
  iVar2 = damage_info->hit_part_index;
  if (iVar2 == this_ptr->part_indices[0]) {
    fVar4 = damage_info->damage_amount * (float)_DAT_005d3b59;
  }
  else {
    if ((iVar2 == this_ptr->part_indices[6]) || (iVar2 == this_ptr->part_indices[1])) {
      damage_info->damage_amount = damage_info->damage_amount;
      goto LAB_00413e31;
    }
    fVar4 = damage_info->damage_amount * (float)_DAT_005d3b51;
  }
  damage_info->damage_amount = fVar4;
LAB_00413e31:
  pCVar1 = g_CConsolePtr;
  if ((this_ptr->part_indices[1] == damage_info->hit_part_index) &&
     (damage_info->damage_type == DAMAGE_TYPE_ATTACK_STAKE)) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005d3b61;
    engine_console_cpp_FUN_00445430(pCVar1,"Shot thru the heart\n");
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
    if (iVar2 != 0) {
      local_30 = 0x41a00000;
      local_2c = 0x41a00000;
      local_34 = 0;
      core_actor_cpp_FUN_00408ac0(this_ptr,&local_34);
      iVar2 = 1;
      fVar4 = -1.0;
      local_40.x = local_28;
      *(float *)((int)&local_40 + (uint)bVar3 * -8 + 4) = afStack_24[(uint)bVar3 * -2];
      *(float *)((int)&local_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           afStack_24[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      core_charactr_cpp_CCharacter_dismember_FUN_00430d90
                ((CCharacter *)this_ptr,impact_point,fVar4,iVar2);
      return;
    }
  }
  return;
}
