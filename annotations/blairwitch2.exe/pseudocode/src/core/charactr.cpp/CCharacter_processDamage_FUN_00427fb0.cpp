// Name: core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0
// Address: 00427fb0
// Address Range: [[00427fb0, 004281ce]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter *this_ptr,SDamageInfo *damage_info)

{
  float fVar1;
  EDamageType EVar2;
  CVector3f *impact_point;
  byte bVar3;
  double dVar4;
  uint auStackY_1034 [1013];
  float fVar5;
  float fVar6;
  CVector3f CStack_40;
  CVector3f local_30;
  CVector3f local_24;
  int local_18;
  
  bVar3 = 0;
  if (this_ptr->is_invulnerable != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004894f0
              (g_CEventList_PTR_006141f0,"ShotInvulnerable");
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
        core_charactr_cpp_CCharacter_explode_FUN_00427260
                  (this_ptr,impact_point,damage_info->impact_force);
      }
      goto LAB_00428034;
    }
    if (DAMAGE_TYPE_FALL_APART < EVar2) {
      core_charactr_cpp_CCharacter_shatter_FUN_00427210(this_ptr);
      goto LAB_00428034;
    }
LAB_0042815e:
    core_charactr_cpp_CCharacter_dismember_FUN_00427360
              (this_ptr,impact_point,damage_info->impact_force,0);
  }
  else {
    if (DAMAGE_TYPE_ELECTROCUTE < EVar2) {
      if (EVar2 < DAMAGE_TYPE_ATTACK_STAKE) {
        if (EVar2 != DAMAGE_TYPE_CHOPPED) goto LAB_00428034;
        goto LAB_0042815e;
      }
      if (EVar2 < DAMAGE_TYPE_ATTACK_GAS) {
        core_charactr_cpp_CCharacter_addDamageDecal_FUN_00426a10(this_ptr);
        goto LAB_00428034;
      }
      if (EVar2 != DAMAGE_TYPE_ATTACK_ELECTROCUTE) goto LAB_00428034;
    }
    this_ptr->stagger_amount = 2.0;
  }
LAB_00428034:
  if (damage_info->ammo_type == AMMO_TYPE_FLAMING) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              (&this_ptr->base,&damage_info->impact_direction,&local_24);
    fVar6 = 0.0;
    fVar5 = 1.0;
    local_30.x = local_24.x;
    *(uint *)((int)&local_30 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&local_24 + (uint)bVar3 * -8 + 4);
    *(uint *)((int)&local_30 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&local_24 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70
              (this_ptr,&local_30,damage_info->hit_part_index,0,fVar5,(int)fVar6);
  }
  if (0.0 < damage_info->gore_multiplier) {
    dVar4 = round
                      ((double)(damage_info->damage_amount * damage_info->gore_multiplier));
    local_18 = (int)ROUND(dVar4);
    local_24.z = (float)(local_18 + 1);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              (&this_ptr->base,&damage_info->impact_direction,&CStack_40);
    *(uint *)(&stack0xffffffb8 + (uint)bVar3 * -8) =
         *(uint *)((int)&CStack_40 + (uint)bVar3 * -8 + 4);
    *(uint *)(&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&CStack_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
              (g_CGorePtr,(CVector3f *)&stack0xffffffb4,&damage_info->impact_point,(int)local_24.z,
               this_ptr->blood_type);
  }
  if ((this_ptr->health_bar_mode == HEALTH_BAR_WHEN_HURT) &&
     ((CHero *)this_ptr != g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4])) {
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
