// Name: core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0
// Address: 00427fb0
// Address Range: [[00427fb0, 004281ce]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  float fVar2;
  EDamageType EVar3;
  CVector3f *impact_point;
  byte bVar4;
  float10 fVar5;
  float afStackY_1030 [6];
  int aiStackY_1018 [1006];
  float fVar6;
  int include_hero;
  CVector3f local_48;
  float local_3c;
  float afStack_38 [2];
  CVector3f local_30;
  float local_24;
  int aiStack_20 [4];
  
  bVar4 = 0;
  if (this_ptr->is_invulnerable != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004894f0
              (0x01C38BC0,"?ShotInvulnerable" + 1);
    return;
  }
  if (damage_info->damage_amount <= 0.0) {
    return;
  }
  fVar6 = (damage_info->impact_point).y;
  fVar1 = (damage_info->impact_point).x;
  fVar2 = (damage_info->impact_point).z;
  impact_point = (CVector3f *)0x0;
  if (0.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar6 * fVar6)) {
    impact_point = &damage_info->impact_point;
  }
  EVar3 = damage_info->damage_type;
  if (EVar3 < DAMAGE_TYPE_ELECTROCUTE) {
    if (EVar3 < DAMAGE_TYPE_FALL_APART) {
      if (EVar3 == DAMAGE_TYPE_EXPLODE) {
        core_charactr_cpp_FUN_00427260(this_ptr,impact_point,damage_info->impact_force);
      }
      goto LAB_00428034;
    }
    if (DAMAGE_TYPE_FALL_APART < EVar3) {
      core_charactr_cpp_CCharacter_shatter_FUN_00427210(this_ptr);
      goto LAB_00428034;
    }
LAB_0042815e:
    core_charactr_cpp_CCharacter_dismember_FUN_00427360
              (this_ptr,impact_point,damage_info->impact_force,0);
  }
  else {
    if (DAMAGE_TYPE_ELECTROCUTE < EVar3) {
      if (EVar3 < DAMAGE_TYPE_ATTACK_STAKE) {
        if (EVar3 != DAMAGE_TYPE_CHOPPED) goto LAB_00428034;
        goto LAB_0042815e;
      }
      if (EVar3 < DAMAGE_TYPE_ATTACK_GAS) {
        core_charactr_cpp_CCharacter_addDamageDecal_FUN_00426a10(this_ptr);
        goto LAB_00428034;
      }
      if (EVar3 != DAMAGE_TYPE_ATTACK_ELECTROCUTE) goto LAB_00428034;
    }
    this_ptr->stagger_amount = 2.0;
  }
LAB_00428034:
  if (damage_info->ammo_type == AMMO_TYPE_FLAMING) {
    core_actor_cpp_FUN_00408d70(this_ptr,&damage_info->impact_direction);
    include_hero = 0;
    fVar6 = 1.0;
    local_30.x = local_24;
    *(int *)((int)&local_30 + (uint)bVar4 * -8 + 4) = aiStack_20[(uint)bVar4 * -2];
    *(int *)((int)&local_30 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         aiStack_20[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70
              (this_ptr,&local_30,damage_info->hit_part_index,0,fVar6,include_hero);
  }
  if (0.0 < damage_info->gore_multiplier) {
    fVar5 = (float10)damage_info->damage_amount * (float10)damage_info->gore_multiplier;
    round();
    aiStack_20[3] = (int)ROUND(fVar5);
    aiStack_20[2] = aiStack_20[3] + 1;
    core_actor_cpp_FUN_00408d70(this_ptr,&damage_info->impact_direction);
    local_48.x = local_3c;
    *(float *)((int)&local_48 + (uint)bVar4 * -8 + 4) = afStack_38[(uint)bVar4 * -2];
    *(float *)((int)&local_48 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
              (g_CGorePtr,&local_48,&damage_info->impact_point,aiStack_20[2],this_ptr->blood_type);
  }
  if ((this_ptr->health_bar_mode == HEALTH_BAR_WHEN_HURT) &&
     (this_ptr != *(CCharacter **)(_DAT_01cedef4 * 4 + 0x1cedee4))) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004bb8d0
              (g_CGamePtr,this_ptr->descriptive_name,this_ptr->hit_points / this_ptr->max_hit_points
               ,5.0);
  }
  if (0.0 < this_ptr->hit_points) {
    return;
  }
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00428e00(this_ptr);
  return;
}
