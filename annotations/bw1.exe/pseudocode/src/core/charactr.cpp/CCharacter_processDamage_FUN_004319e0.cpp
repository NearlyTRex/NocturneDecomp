// Name: core_charactr.cpp_CCharacter_processDamage_FUN_004319e0
// Address: 004319e0
// Address Range: [[004319e0, 00431c22]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_004319e0(CCharacter *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_004319e0(CCharacter *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  float fVar2;
  EDamageType EVar3;
  CVector3f *impact_point;
  byte bVar4;
  float10 fVar5;
  float afStackY_1040 [1012];
  float fVar6;
  int include_hero;
  float local_58;
  CVector3f local_4c;
  CVector3f local_40;
  float local_34;
  uint auStack_30 [5];
  int local_1c;
  int local_18;
  
  bVar4 = 0;
  if (this_ptr->is_invulnerable != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (0x01C51D80,"?ShotInvulnerable" + 1);
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
        core_charactr_cpp_FUN_00430c90(this_ptr,impact_point,damage_info->impact_force);
      }
      goto LAB_00431a64;
    }
    if (DAMAGE_TYPE_FALL_APART < EVar3) {
      core_charactr_cpp_CCharacter_shatter_FUN_00430c40(this_ptr);
      goto LAB_00431a64;
    }
LAB_00431bb2:
    core_charactr_cpp_CCharacter_dismember_FUN_00430d90
              (this_ptr,impact_point,damage_info->impact_force,0);
  }
  else {
    if (DAMAGE_TYPE_ELECTROCUTE < EVar3) {
      if (EVar3 < DAMAGE_TYPE_ATTACK_STAKE) {
        if (EVar3 != DAMAGE_TYPE_CHOPPED) goto LAB_00431a64;
        goto LAB_00431bb2;
      }
      if (EVar3 < DAMAGE_TYPE_ATTACK_GAS) {
        core_charactr_cpp_CCharacter_addDamageDecal_FUN_00430440(this_ptr);
        goto LAB_00431a64;
      }
      if (EVar3 != DAMAGE_TYPE_ATTACK_ELECTROCUTE) goto LAB_00431a64;
    }
    this_ptr->stagger_amount = 3.0;
  }
LAB_00431a64:
  if (damage_info->ammo_type == AMMO_TYPE_FLAMING) {
    core_actor_cpp_FUN_00408b40(this_ptr,&damage_info->impact_direction);
    include_hero = 0;
    fVar6 = 1.0;
    local_4c.x = local_34;
    *(uint *)((int)&local_4c + (uint)bVar4 * -8 + 4) = auStack_30[(uint)bVar4 * -2];
    *(uint *)((int)&local_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0
              (this_ptr,&local_4c,damage_info->hit_part_index,0,fVar6,include_hero);
  }
  if (damage_info->ammo_type == AMMO_TYPE_STAGGER) {
    core_actor_cpp_FUN_00408b40(this_ptr,&damage_info->impact_direction);
    this_ptr->stagger_amount = 0.5;
  }
  if (0.0 < damage_info->gore_multiplier) {
    fVar5 = (float10)damage_info->damage_amount * (float10)damage_info->gore_multiplier;
    round();
    local_1c = (int)ROUND(fVar5);
    local_18 = local_1c + 1;
    core_actor_cpp_FUN_00408b40(this_ptr,&damage_info->impact_direction);
    local_40.x = local_58;
    *(uint *)((int)&local_40 + (uint)bVar4 * -8 + 4) =
         *(uint *)(&stack0xffffffac + (uint)bVar4 * -8);
    *(uint *)((int)&local_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)(&stack0xffffffb0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
              (g_CGorePtr,&local_40,&damage_info->impact_point,local_18,this_ptr->blood_type);
  }
  if ((this_ptr->health_bar_mode == HEALTH_BAR_WHEN_HURT) &&
     (this_ptr != *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4))) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004d6340
              (g_CGamePtr,this_ptr->descriptive_name,this_ptr->hit_points / this_ptr->max_hit_points
               ,5.0);
  }
  if (0.0 < this_ptr->hit_points) {
    return;
  }
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0(this_ptr);
  return;
}
