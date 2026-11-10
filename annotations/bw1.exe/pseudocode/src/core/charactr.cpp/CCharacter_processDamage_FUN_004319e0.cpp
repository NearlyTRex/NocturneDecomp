// Name: core_charactr.cpp_CCharacter_processDamage_FUN_004319e0
// Address: 004319e0
// Address Range: [[004319e0, 00431c22]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_004319e0(CCharacter *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_004319e0(CCharacter *this_ptr,SDamageInfo *damage_info)

{
  uint uVar1;
  CVector3f *impact_point;
  byte bVar2;
  float10 fVar3;
  float afStackY_1040 [1012];
  float flame_scale;
  int include_hero;
  float local_58;
  CVector3f local_4c;
  CVector3f local_40;
  float local_34;
  uint auStack_30 [5];
  int local_1c;
  int local_18;
  
  bVar2 = 0;
  if (*(int *)&this_ptr->field_0x27b0 != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (0x01C51D80,"?ShotInvulnerable" + 1);
    return;
  }
  if (*(float *)(damage_info + 4) <= 0.0) {
    return;
  }
  impact_point = (CVector3f *)0x0;
  if (0.0 < SQRT(*(float *)(damage_info + 0x14) * *(float *)(damage_info + 0x14) +
                 *(float *)(damage_info + 0xc) * *(float *)(damage_info + 0xc) +
                 *(float *)(damage_info + 0x10) * *(float *)(damage_info + 0x10))) {
    impact_point = (CVector3f *)(damage_info + 0xc);
  }
  uVar1 = *(uint *)(damage_info + 0x30);
  if (uVar1 < 6) {
    if (uVar1 < 4) {
      if (uVar1 == 3) {
        core_charactr_cpp_FUN_00430c90(this_ptr,impact_point,*(uint *)(damage_info + 0x18));
      }
      goto LAB_00431a64;
    }
    if (4 < uVar1) {
      core_charactr_cpp_CCharacter_shatter_FUN_00430c40(this_ptr);
      goto LAB_00431a64;
    }
LAB_00431bb2:
    core_charactr_cpp_CCharacter_dismember_FUN_00430d90
              (this_ptr,impact_point,*(float *)(damage_info + 0x18),0);
  }
  else {
    if (6 < uVar1) {
      if (uVar1 < 0x68) {
        if (uVar1 != 7) goto LAB_00431a64;
        goto LAB_00431bb2;
      }
      if (uVar1 < 0x69) {
        core_charactr_cpp_CCharacter_addDamageDecal_FUN_00430440(this_ptr);
        goto LAB_00431a64;
      }
      if (uVar1 != 0x6a) goto LAB_00431a64;
    }
    this_ptr->stagger_amount = 3.0;
  }
LAB_00431a64:
  if (*(int *)(damage_info + 0x28) == 5) {
    core_actor_cpp_FUN_00408b40(this_ptr,damage_info + 0x1c);
    include_hero = 0;
    flame_scale = 1.0;
    local_4c.x = local_34;
    *(uint *)((int)&local_4c + (uint)bVar2 * -8 + 4) = auStack_30[(uint)bVar2 * -2];
    *(uint *)((int)&local_4c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         auStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0
              (this_ptr,&local_4c,*(int *)damage_info,0,flame_scale,include_hero);
  }
  if (*(int *)(damage_info + 0x28) == 9) {
    core_actor_cpp_FUN_00408b40(this_ptr,damage_info + 0x1c);
    this_ptr->stagger_amount = 0.5;
  }
  if (0.0 < *(float *)(damage_info + 8)) {
    fVar3 = (float10)*(float *)(damage_info + 4) * (float10)*(float *)(damage_info + 8);
    round();
    local_1c = (int)ROUND(fVar3);
    local_18 = local_1c + 1;
    core_actor_cpp_FUN_00408b40(this_ptr,damage_info + 0x1c);
    local_40.x = local_58;
    *(uint *)((int)&local_40 + (uint)bVar2 * -8 + 4) =
         *(uint *)(&stack0xffffffac + (uint)bVar2 * -8);
    *(uint *)((int)&local_40 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)(&stack0xffffffb0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
              (g_CGorePtr,&local_40,(CVector3f *)(damage_info + 0xc),local_18,
               *(EBloodType *)&this_ptr->field_0x27a0);
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
