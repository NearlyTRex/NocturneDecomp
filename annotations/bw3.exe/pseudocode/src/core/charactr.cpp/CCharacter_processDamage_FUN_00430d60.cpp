// Name: core_charactr.cpp_CCharacter_processDamage_FUN_00430d60
// Address: 00430d60
// Address Range: [[00430d60, 00430ff5]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00430d60(CCharacter *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00430d60(CCharacter *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  EDamageType EVar2;
  CVector3f *impact_point;
  byte bVar3;
  double dVar4;
  float afStackY_1040 [1011];
  float fVar5;
  int include_hero;
  float fVar6;
  CVector3f local_58;
  byte local_4c [12];
  float local_40 [2];
  CVector3f CStack_38;
  CVector3f local_28;
  int local_1c;
  
  bVar3 = 0;
  if (this_ptr->is_invulnerable != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (0x01C6E360,"?ShotInvulnerable" + 1);
    return;
  }
  if (damage_info->damage_amount <= 0.0) {
    return;
  }
  this_ptr->been_damaged = 1;
  fVar5 = (damage_info->impact_point).y;
  fVar6 = (damage_info->impact_point).x;
  fVar1 = (damage_info->impact_point).z;
  impact_point = (CVector3f *)0x0;
  if (0.0 < SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar5 * fVar5)) {
    impact_point = &damage_info->impact_point;
  }
  EVar2 = damage_info->damage_type;
  if (EVar2 < DAMAGE_TYPE_ELECTROCUTE) {
    if (EVar2 < DAMAGE_TYPE_FALL_APART) {
      if (EVar2 == DAMAGE_TYPE_EXPLODE) {
        core_charactr_cpp_CCharacter_explode_FUN_0042ffe0
                  (this_ptr,impact_point,damage_info->impact_force);
      }
      goto LAB_00430dee;
    }
    if (DAMAGE_TYPE_FALL_APART < EVar2) {
      core_charactr_cpp_CCharacter_shatter_FUN_0042ff70(this_ptr);
      goto LAB_00430dee;
    }
LAB_00430f85:
    core_charactr_cpp_CCharacter_dismember_FUN_004300e0
              (this_ptr,impact_point,damage_info->impact_force,1);
  }
  else {
    if (DAMAGE_TYPE_ELECTROCUTE < EVar2) {
      if (EVar2 < DAMAGE_TYPE_ATTACK_STAKE) {
        if (EVar2 != DAMAGE_TYPE_CHOPPED) goto LAB_00430dee;
        goto LAB_00430f85;
      }
      if (EVar2 < DAMAGE_TYPE_ATTACK_GAS) {
        core_charactr_cpp_CCharacter_addDamageDecal_FUN_0042f770(this_ptr);
        goto LAB_00430dee;
      }
      if (EVar2 != DAMAGE_TYPE_ATTACK_ELECTROCUTE) goto LAB_00430dee;
    }
    this_ptr->stagger_amount = 2.0;
  }
LAB_00430dee:
  if (damage_info->ammo_type == AMMO_TYPE_FLAMING) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              (&this_ptr->base,&damage_info->impact_direction,(CVector3f *)local_4c);
    fVar6 = 2.0;
    include_hero = 0;
    fVar5 = 1.0;
    local_58.x = (float)local_4c._0_4_;
    *(uint *)(local_4c + (uint)bVar3 * -8 + -8) =
         *(uint *)(local_4c + (uint)bVar3 * -8 + 4);
    *(float *)(local_4c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -4) =
         local_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -1];
    core_charactr_cpp_CCharacter_igniteBone_FUN_0042fbd0
              (this_ptr,&local_58,damage_info->hit_part_index,0,fVar5,include_hero,fVar6);
  }
  if (damage_info->ammo_type == AMMO_TYPE_STAGGER) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              (&this_ptr->base,&damage_info->impact_direction,&local_28);
    this_ptr->stagger_amount = 0.5;
  }
  if (0.0 < damage_info->gore_multiplier) {
    dVar4 = round
                      ((double)(damage_info->damage_amount * damage_info->gore_multiplier));
    local_1c = (int)ROUND(dVar4);
    local_28.z = (float)(local_1c + 1);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              (&this_ptr->base,&damage_info->impact_direction,(CVector3f *)(local_4c + 8));
    CStack_38.x = (float)local_4c._8_4_;
    *(float *)((int)&CStack_38 + (uint)bVar3 * -8 + 4) = local_40[(uint)bVar3 * -2];
    *(float *)((int)&CStack_38 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         local_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
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
