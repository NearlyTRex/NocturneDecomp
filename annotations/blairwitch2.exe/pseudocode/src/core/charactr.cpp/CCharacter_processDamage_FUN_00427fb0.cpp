// Name: core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0
// Address: 00427fb0
// Address Range: [[00427fb0, 004281ce]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter *this_ptr,SDamageInfo *damage_info)

{
  uint uVar1;
  CVector3f *impact_point;
  byte bVar2;
  float10 fVar3;
  float afStackY_1030 [6];
  int aiStackY_1018 [1006];
  float flame_scale;
  int include_hero;
  CVector3f local_48;
  float local_3c;
  float afStack_38 [2];
  CVector3f local_30;
  float local_24;
  int aiStack_20 [4];
  
  bVar2 = 0;
  if (*(int *)&this_ptr->field_0x281c != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004894f0
              (0x01C38BC0,"?ShotInvulnerable" + 1);
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
        core_charactr_cpp_FUN_00427260(this_ptr,impact_point,*(uint *)(damage_info + 0x18));
      }
      goto LAB_00428034;
    }
    if (4 < uVar1) {
      core_charactr_cpp_CCharacter_shatter_FUN_00427210(this_ptr);
      goto LAB_00428034;
    }
LAB_0042815e:
    core_charactr_cpp_CCharacter_dismember_FUN_00427360
              (this_ptr,impact_point,*(float *)(damage_info + 0x18),0);
  }
  else {
    if (6 < uVar1) {
      if (uVar1 < 0x68) {
        if (uVar1 != 7) goto LAB_00428034;
        goto LAB_0042815e;
      }
      if (uVar1 < 0x69) {
        core_charactr_cpp_CCharacter_addDamageDecal_FUN_00426a10(this_ptr);
        goto LAB_00428034;
      }
      if (uVar1 != 0x6a) goto LAB_00428034;
    }
    this_ptr->stagger_amount = 2.0;
  }
LAB_00428034:
  if (*(int *)(damage_info + 0x28) == 5) {
    core_actor_cpp_FUN_00408d70(this_ptr,damage_info + 0x1c);
    include_hero = 0;
    flame_scale = 1.0;
    local_30.x = local_24;
    *(int *)((int)&local_30 + (uint)bVar2 * -8 + 4) = aiStack_20[(uint)bVar2 * -2];
    *(int *)((int)&local_30 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         aiStack_20[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70
              (this_ptr,&local_30,*(int *)damage_info,0,flame_scale,include_hero);
  }
  if (0.0 < *(float *)(damage_info + 8)) {
    fVar3 = (float10)*(float *)(damage_info + 4) * (float10)*(float *)(damage_info + 8);
    round();
    aiStack_20[3] = (int)ROUND(fVar3);
    aiStack_20[2] = aiStack_20[3] + 1;
    core_actor_cpp_FUN_00408d70(this_ptr,damage_info + 0x1c);
    local_48.x = local_3c;
    *(float *)((int)&local_48 + (uint)bVar2 * -8 + 4) = afStack_38[(uint)bVar2 * -2];
    *(float *)((int)&local_48 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         afStack_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
              (g_CGorePtr,&local_48,(CVector3f *)(damage_info + 0xc),aiStack_20[2],
               this_ptr->blood_type);
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
