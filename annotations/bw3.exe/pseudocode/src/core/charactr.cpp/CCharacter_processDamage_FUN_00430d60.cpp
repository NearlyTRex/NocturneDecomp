// Name: core_charactr.cpp_CCharacter_processDamage_FUN_00430d60
// Address: 00430d60
// Address Range: [[00430d60, 00430ff5]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00430d60(CCharacter *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00430d60(CCharacter *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  float fVar2;
  float fVar3;
  EDamageType EVar4;
  CVector3f *impact_point;
  byte bVar5;
  double dVar6;
  float afStackY_1040 [1011];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float local_58;
  byte local_4c [12];
  float local_40 [2];
  CVector3f CStack_38;
  CVector3f local_28;
  int local_1c;
  
  bVar5 = 0;
  if (this_ptr->is_invulnerable != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (0x01C6E360,"?ShotInvulnerable" + 1);
    return;
  }
  if (damage_info->damage_amount <= 0.0) {
    return;
  }
  this_ptr->been_damaged = 1;
  fVar1 = (damage_info->impact_point).y;
  fVar2 = (damage_info->impact_point).x;
  fVar3 = (damage_info->impact_point).z;
  impact_point = (CVector3f *)0x0;
  if (0.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)) {
    impact_point = &damage_info->impact_point;
  }
  EVar4 = damage_info->damage_type;
  if (EVar4 < DAMAGE_TYPE_ELECTROCUTE) {
    if (EVar4 < DAMAGE_TYPE_FALL_APART) {
      if (EVar4 == DAMAGE_TYPE_EXPLODE) {
        core_charactr_cpp_CCharacter_explode_FUN_0042ffe0
                  (this_ptr,impact_point,damage_info->impact_force);
      }
      goto LAB_00430dee;
    }
    if (DAMAGE_TYPE_FALL_APART < EVar4) {
      core_charactr_cpp_CCharacter_shatter_FUN_0042ff70(this_ptr);
      goto LAB_00430dee;
    }
LAB_00430f85:
    core_charactr_cpp_CCharacter_dismember_FUN_004300e0
              (this_ptr,impact_point,damage_info->impact_force,1);
  }
  else {
    if (DAMAGE_TYPE_ELECTROCUTE < EVar4) {
      if (EVar4 < DAMAGE_TYPE_ATTACK_STAKE) {
        if (EVar4 != DAMAGE_TYPE_CHOPPED) goto LAB_00430dee;
        goto LAB_00430f85;
      }
      if (EVar4 < DAMAGE_TYPE_ATTACK_GAS) {
        core_charactr_cpp_CCharacter_addDamageDecal_FUN_0042f770(this_ptr);
        goto LAB_00430dee;
      }
      if (EVar4 != DAMAGE_TYPE_ATTACK_ELECTROCUTE) goto LAB_00430dee;
    }
    this_ptr->stagger_amount = 2.0;
  }
LAB_00430dee:
  if (damage_info->ammo_type == AMMO_TYPE_FLAMING) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              (&this_ptr->base,&damage_info->impact_direction,(CVector3f *)local_4c);
    uVar9 = 0x40000000;
    uVar8 = 0;
    uVar7 = 0x3f800000;
    local_58 = (float)local_4c._0_4_;
    *(uint *)((int)&stack0xffffffac + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(local_4c + (uint)bVar5 * -8 + 4);
    *(float *)(&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         local_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -1];
    core_charactr_cpp_FUN_0042fbd0
              (this_ptr,&stack0xffffffa8,damage_info->hit_part_index,0,uVar7,uVar8,uVar9);
  }
  if (damage_info->ammo_type == AMMO_TYPE_STAGGER) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              (&this_ptr->base,&damage_info->impact_direction,&local_28);
    this_ptr->stagger_amount = 0.5;
  }
  if (0.0 < damage_info->gore_multiplier) {
    dVar6 = round
                      ((double)(damage_info->damage_amount * damage_info->gore_multiplier));
    local_1c = (int)ROUND(dVar6);
    local_28.z = (float)(local_1c + 1);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              (&this_ptr->base,&damage_info->impact_direction,(CVector3f *)(local_4c + 8));
    CStack_38.x = (float)local_4c._8_4_;
    *(float *)((int)&CStack_38 + (uint)bVar5 * -8 + 4) = local_40[(uint)bVar5 * -2];
    *(float *)((int)&CStack_38 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         local_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
              (g_CGorePtr,&CStack_38,&damage_info->impact_point,(int)local_28.z,this_ptr->blood_type
              );
  }
  if ((this_ptr->health_bar_mode == HEALTH_BAR_WHEN_HURT) &&
     (this_ptr != *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04))) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004bd930
              (g_CGamePtr,this_ptr->descriptive_name,this_ptr->hit_points / this_ptr->max_hit_points
               ,5.0);
  }
  if ((this_ptr != *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) &&
     (damage_info->damage_type == DAMAGE_TYPE_EXORCISM)) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004bd930
              (g_CGamePtr,this_ptr->descriptive_name,this_ptr->hit_points / this_ptr->max_hit_points
               ,5.0);
  }
  if (0.0 < this_ptr->hit_points) {
    return;
  }
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0(this_ptr);
  return;
}
