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
  EDamageType EVar2;
  CVector3f *impact_point;
  byte bVar3;
  double dVar4;
  float afStackY_1044 [1013];
  float fVar5;
  float fVar6;
  byte local_4c [12];
  float local_40 [3];
  CVector3f local_34;
  CVector3f local_28;
  int local_1c;
  
  bVar3 = 0;
  if (this_ptr->is_invulnerable != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (0x01C51D80,"?ShotInvulnerable" + 1);
    return;
  }
  if (damage_info->damage_amount <= 0.0) {
    return;
  }
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
        core_charactr_cpp_CCharacter_explode_FUN_00430c90
                  (this_ptr,impact_point,damage_info->impact_force);
      }
      goto LAB_00431a64;
    }
    if (DAMAGE_TYPE_FALL_APART < EVar2) {
      core_charactr_cpp_CCharacter_shatter_FUN_00430c40(this_ptr);
      goto LAB_00431a64;
    }
LAB_00431bb2:
    core_charactr_cpp_CCharacter_dismember_FUN_00430d90
              (this_ptr,impact_point,damage_info->impact_force,0);
  }
  else {
    if (DAMAGE_TYPE_ELECTROCUTE < EVar2) {
      if (EVar2 < DAMAGE_TYPE_ATTACK_STAKE) {
        if (EVar2 != DAMAGE_TYPE_CHOPPED) goto LAB_00431a64;
        goto LAB_00431bb2;
      }
      if (EVar2 < DAMAGE_TYPE_ATTACK_GAS) {
        core_charactr_cpp_CCharacter_addDamageDecal_FUN_00430440(this_ptr);
        goto LAB_00431a64;
      }
      if (EVar2 != DAMAGE_TYPE_ATTACK_ELECTROCUTE) goto LAB_00431a64;
    }
    this_ptr->stagger_amount = 3.0;
  }
LAB_00431a64:
  if (damage_info->ammo_type == AMMO_TYPE_FLAMING) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              (&this_ptr->base,&damage_info->impact_direction,&local_34);
    fVar6 = 0.0;
    fVar5 = 1.0;
    local_4c._0_4_ = local_34.x;
    *(uint *)(local_4c + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&local_34 + (uint)bVar3 * -8 + 4);
    local_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -1] =
         *(float *)((int)&local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0
              (this_ptr,(CVector3f *)local_4c,damage_info->hit_part_index,0,fVar5,(int)fVar6);
  }
  if (damage_info->ammo_type == AMMO_TYPE_STAGGER) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              (&this_ptr->base,&damage_info->impact_direction,&local_28);
    this_ptr->stagger_amount = 0.5;
  }
  if (0.0 < damage_info->gore_multiplier) {
    fVar5 = 6.162629e-39;
    dVar4 = round
                      ((double)(damage_info->damage_amount * damage_info->gore_multiplier));
    local_28.z = (float)(int)ROUND(dVar4);
    local_1c = (int)local_28.z + 1;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              (&this_ptr->base,&damage_info->impact_direction,(CVector3f *)&stack0xffffffa4);
    local_4c._8_4_ = fVar5;
    local_40[(uint)bVar3 * -2] = *(float *)(&stack0xffffffa8 + (uint)bVar3 * -8);
    local_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(float *)(&stack0xffffffac + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
              (g_CGorePtr,(CVector3f *)(local_4c + 8),&damage_info->impact_point,local_1c,
               this_ptr->blood_type);
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
