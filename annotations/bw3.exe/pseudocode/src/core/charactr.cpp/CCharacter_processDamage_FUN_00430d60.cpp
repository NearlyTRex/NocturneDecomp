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
  uint uVar1;
  SDamageInfo *pSVar2;
  byte bVar3;
  float10 fVar4;
  float afStackY_1040 [1011];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_58;
  uint local_4c;
  float local_40;
  CVector3f local_34 [2];
  int local_1c;
  int local_18;
  
  bVar3 = 0;
  if (*(int *)&this_ptr->field_0x27b0 != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (0x01C6E360,"?ShotInvulnerable" + 1);
    return;
  }
  if (*(float *)(damage_info + 4) <= 0.0) {
    return;
  }
  *(uint *)&this_ptr->field_0x3268 = 1;
  pSVar2 = (SDamageInfo *)0x0;
  if (0.0 < SQRT(*(float *)(damage_info + 0x14) * *(float *)(damage_info + 0x14) +
                 *(float *)(damage_info + 0xc) * *(float *)(damage_info + 0xc) +
                 *(float *)(damage_info + 0x10) * *(float *)(damage_info + 0x10))) {
    pSVar2 = damage_info + 0xc;
  }
  uVar1 = *(uint *)(damage_info + 0x30);
  if (uVar1 < 6) {
    if (uVar1 < 4) {
      if (uVar1 == 3) {
        core_charactr_cpp_FUN_0042ffe0(this_ptr,pSVar2,*(uint *)(damage_info + 0x18));
      }
      goto LAB_00430dee;
    }
    if (4 < uVar1) {
      core_charactr_cpp_FUN_0042ff70(this_ptr);
      goto LAB_00430dee;
    }
LAB_00430f85:
    core_charactr_cpp_FUN_004300e0(this_ptr,pSVar2,*(uint *)(damage_info + 0x18),1);
  }
  else {
    if (6 < uVar1) {
      if (uVar1 < 0x68) {
        if (uVar1 != 7) goto LAB_00430dee;
        goto LAB_00430f85;
      }
      if (uVar1 < 0x69) {
        core_charactr_cpp_CCharacter_addDamageDecal_FUN_0042f770(this_ptr);
        goto LAB_00430dee;
      }
      if (uVar1 != 0x6a) goto LAB_00430dee;
    }
    this_ptr->stagger_amount = 2.0;
  }
LAB_00430dee:
  if (*(int *)(damage_info + 0x28) == 5) {
    core_actor_cpp_FUN_00408b80(this_ptr,damage_info + 0x1c);
    uVar7 = 0x40000000;
    uVar6 = 0;
    uVar5 = 0x3f800000;
    local_58 = local_4c;
    *(uint *)((int)&stack0xffffffac + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)((int)local_34 + (uint)bVar3 * -8 + -0x14);
    *(uint *)((int)local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -0x1c) =
         *(uint *)((int)local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -0x10);
    core_charactr_cpp_FUN_0042fbd0
              (this_ptr,&stack0xffffffa8,*(uint *)damage_info,0,uVar5,uVar6,uVar7);
  }
  if (*(int *)(damage_info + 0x28) == 9) {
    core_actor_cpp_FUN_00408b80(this_ptr,damage_info + 0x1c);
    this_ptr->stagger_amount = 0.5;
  }
  if (0.0 < *(float *)(damage_info + 8)) {
    fVar4 = (float10)*(float *)(damage_info + 4) * (float10)*(float *)(damage_info + 8);
    round();
    local_18 = (int)ROUND(fVar4);
    local_1c = local_18 + 1;
    core_actor_cpp_FUN_00408b80(this_ptr,damage_info + 0x1c);
    local_34[0].x = local_40;
    *(uint *)((int)local_34 + (uint)bVar3 * -8 + 4) =
         *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8);
    *(uint *)((int)local_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004ce9c0
              (g_CGorePtr,local_34,(CVector3f *)(damage_info + 0xc),local_1c,
               *(EBloodType *)&this_ptr->field_0x27a0);
  }
  if ((this_ptr->health_bar_mode == HEALTH_BAR_WHEN_HURT) &&
     (this_ptr != *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04))) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004bd930
              (g_CGamePtr,this_ptr->descriptive_name,this_ptr->hit_points / this_ptr->max_hit_points
               ,5.0);
  }
  if ((this_ptr != *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) &&
     (*(int *)(damage_info + 0x30) == 0x6f)) {
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
