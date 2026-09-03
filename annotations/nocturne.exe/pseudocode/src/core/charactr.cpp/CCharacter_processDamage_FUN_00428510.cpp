// Name: core_charactr.cpp_CCharacter_processDamage_FUN_00428510
// Address: 00428510
// Address Range: [[00428510, 004286cd]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00428510(CCharacter *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00428510(CCharacter *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  float fVar2;
  float fVar3;
  EDamageType EVar4;
  CVector3f *pCVar5;
  double dVar6;
  CVector3f *output_world_point;
  byte local_28 [12];
  CVector3f local_1c;
  
  if (damage_info->damage_amount <= 0.0) {
    return;
  }
  fVar1 = (damage_info->impact_point).y;
  fVar2 = (damage_info->impact_point).x;
  fVar3 = (damage_info->impact_point).z;
  pCVar5 = (CVector3f *)0x0;
  if (0.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)) {
    pCVar5 = &damage_info->impact_point;
  }
  EVar4 = damage_info->damage_type;
  if (EVar4 < DAMAGE_TYPE_ELECTROCUTE) {
    if (EVar4 < DAMAGE_TYPE_SHATTER) {
      if (EVar4 == DAMAGE_TYPE_EXPLODE) {
        core_charactr_cpp_CCharacter_explode_FUN_00427ab0(this_ptr,pCVar5,damage_info->impact_force)
        ;
      }
      goto LAB_00428579;
    }
    if (DAMAGE_TYPE_SHATTER < EVar4) {
      core_charactr_cpp_CCharacter_shatter_FUN_00427a60(this_ptr);
      goto LAB_00428579;
    }
LAB_0042865c:
    core_charactr_cpp_CCharacter_dismember_FUN_00427b60(this_ptr,pCVar5,damage_info->impact_force,0)
    ;
  }
  else {
    if (DAMAGE_TYPE_ELECTROCUTE < EVar4) {
      if (EVar4 < DAMAGE_TYPE_LAUNCH) {
        if (EVar4 != DAMAGE_TYPE_CHOPPED) goto LAB_00428579;
        goto LAB_0042865c;
      }
      if (EVar4 < DAMAGE_TYPE_NO_FLINCH) {
        core_charactr_cpp_CCharacter_addDamageDecal_FUN_00427310(this_ptr);
        goto LAB_00428579;
      }
      if (EVar4 != DAMAGE_TYPE_DECAL) goto LAB_00428579;
    }
    core_charactr_cpp_CCharacter_setStaggerAmount_FUN_004286d0(this_ptr,2.0);
  }
LAB_00428579:
  if (damage_info->ammo_type == AMMO_TYPE_FLAMING) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              (&this_ptr->base,(CVector3f *)local_28,&damage_info->impact_direction);
    core_charactr_cpp_CCharacter_igniteBone_FUN_00427730
              (this_ptr,(CVector3f *)local_28,damage_info->hit_part_index,0,1.0,0);
  }
  if (0.0 < damage_info->gore_multiplier) {
    pCVar5 = &local_1c;
    output_world_point = (CVector3f *)0x4285cc;
    dVar6 = round
                      ((double)(damage_info->damage_amount * damage_info->gore_multiplier));
    local_1c.z = (float)(int)ROUND(dVar6);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              (&this_ptr->base,output_world_point,pCVar5);
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
              (g_CGore_PTR_005b96c4,(CVector3f *)(local_28 + 8),&damage_info->impact_point,
               (int)ROUND(dVar6) + 1,this_ptr->blood_type);
  }
  if ((this_ptr->health_bar_mode == 1) && ((CHero *)this_ptr != g_HeroActors[g_LocalHeroIndex])) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004a3ab0
              (g_CGame_PTR_005b9354,this_ptr->descriptive_name,
               (int)(this_ptr->hit_points / this_ptr->max_hit_points),5.0);
  }
  if (0.0 < this_ptr->hit_points) {
    return;
  }
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0(this_ptr);
  return;
}
