// Name: core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0
// Address: 0042c3c0
// Address Range: [[0042c3c0, 0042c579]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  double dVar5;
  CVector3f *output_world_point;
  CVector3f local_28;
  CVector3f local_1c;
  
  if (damage_info->damage_amount <= 0.0) {
    return;
  }
  fVar1 = (damage_info->impact_point).y;
  fVar2 = (damage_info->impact_point).x;
  fVar3 = (damage_info->impact_point).z;
  pCVar4 = (CVector3f *)0x0;
  if (0.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)) {
    pCVar4 = &damage_info->impact_point;
  }
  fVar1 = damage_info->gore_multiplier;
  if ((uint)fVar1 < 6) {
    if ((uint)fVar1 < 4) {
      if (fVar1 == 4.2039e-45) {
        core_charactr_cpp_CCharacter_explode_FUN_0042b930(this_ptr,pCVar4,damage_info->impact_force)
        ;
      }
      goto LAB_0042c429;
    }
    if (4 < (uint)fVar1) {
      core_charactr_cpp_CCharacter_shatter_FUN_0042b8e0(this_ptr);
      goto LAB_0042c429;
    }
LAB_0042c50c:
    core_charactr_cpp_CCharacter_dismember_FUN_0042b9e0(this_ptr,pCVar4,damage_info->impact_force);
  }
  else {
    if (6 < (uint)fVar1) {
      if ((uint)fVar1 < 0x68) {
        if (fVar1 != 9.80909e-45) goto LAB_0042c429;
        goto LAB_0042c50c;
      }
      if ((uint)fVar1 < 0x69) {
        core_charactr_cpp_CCharacter_addDamageDecal_FUN_0042b190(this_ptr);
        goto LAB_0042c429;
      }
      if (fVar1 != 1.48538e-43) goto LAB_0042c429;
    }
    this_ptr->stagger_amount = 2.0;
  }
LAB_0042c429:
  if (damage_info->ammo_type == 5) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base,&local_28,&damage_info->impact_direction);
    core_charactr_cpp_CCharacter_igniteBone_FUN_0042b5b0
              (this_ptr,&local_28,damage_info->fire_type,0.0,0x3f800000,0);
  }
  if (0.0 < (float)damage_info->damage_flags) {
    pCVar4 = &local_1c;
    output_world_point = (CVector3f *)0x42c47c;
    dVar5 = round
                      ((double)(damage_info->damage_amount * (float)damage_info->damage_flags));
    local_1c.z = (float)(int)ROUND(dVar5);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base,output_world_point,pCVar4);
    core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
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
