// Name: core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0
// Address: 0042c3c0
// MANUAL RECONSTRUCTION
// Address Range: [[0042c3c0, 0042c579]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  float fVar5;
  CVector3f *impact_point;
  CVector3f local_28;
  CVector3f local_1c;
  float fVar3;
  float fVar2;
  EDamageType EVar5;
  float fVar4;

#if !NOCTURNE_AUTHENTIC_FRIENDLY_FIRE
  nocturne_net_friendly_fire_block(this_ptr,damage_info);
#endif
  if (damage_info->damage_amount <= 0.0) {
    return;
  }
  fVar2 = (damage_info->impact_point).y;
  fVar3 = (damage_info->impact_point).x;
  fVar4 = (damage_info->impact_point).z;
  impact_point = (CVector3f *)0x0;
  if (0.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2)) {
    impact_point = &damage_info->impact_point;
  }
  EVar5 = damage_info->damage_type;
  if (EVar5 < DAMAGE_TYPE_ELECTROCUTE) {
    if (EVar5 < DAMAGE_TYPE_SHATTER) {
      if (EVar5 == DAMAGE_TYPE_EXPLODE) {
        core_charactr_cpp_CCharacter_explode_FUN_0042b930
                  (this_ptr,impact_point,damage_info->impact_force);
      }
      goto LAB_0042c429;
    }
    if (DAMAGE_TYPE_SHATTER < EVar5) {
      core_charactr_cpp_CCharacter_shatter_FUN_0042b8e0(this_ptr);
      goto LAB_0042c429;
    }
LAB_0042c50c:
    core_charactr_cpp_CCharacter_dismember_FUN_0042b9e0
              (this_ptr,impact_point,damage_info->impact_force,0);
  }
  else {
    if (DAMAGE_TYPE_ELECTROCUTE < EVar5) {
      if (EVar5 < DAMAGE_TYPE_LAUNCH) {
        if (EVar5 != DAMAGE_TYPE_CHOPPED) goto LAB_0042c429;
        goto LAB_0042c50c;
      }
      if (EVar5 < DAMAGE_TYPE_NO_FLINCH) {
        core_charactr_cpp_CCharacter_addDamageDecal_FUN_0042b190(this_ptr);
        goto LAB_0042c429;
      }
      if (EVar5 != DAMAGE_TYPE_DECAL) goto LAB_0042c429;
    }
    this_ptr->stagger_amount = 2.0;
  }
LAB_0042c429:
  if (damage_info->ammo_type == AMMO_TYPE_FLAMING) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base,&local_28,&damage_info->impact_direction);
    core_charactr_cpp_CCharacter_igniteBone_FUN_0042b5b0
              (this_ptr,&local_28,damage_info->hit_part_index,0,1.0,0);
  }
  if (0.0 < damage_info->gore_multiplier) {
    fVar1 = damage_info->damage_amount;
    fVar5 = damage_info->gore_multiplier;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base,&local_1c,&damage_info->impact_direction);
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
              (g_CGorePtr,&local_1c,&damage_info->impact_point,(int)ROUND(ROUND(fVar1 * fVar5)) + 1,
               this_ptr->blood_type);
  }
  if ((this_ptr->health_bar_mode == 1) && ((CHero *)this_ptr != g_HeroActors[g_LocalHeroIndex])) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004e0bf0
              (g_CGamePtr,this_ptr->descriptive_name,
               (int)(this_ptr->hit_points / this_ptr->max_hit_points),5.0);
  }
  if (0.0 < this_ptr->hit_points) {
    return;
  }
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_0042d060(this_ptr);
  return;
}
