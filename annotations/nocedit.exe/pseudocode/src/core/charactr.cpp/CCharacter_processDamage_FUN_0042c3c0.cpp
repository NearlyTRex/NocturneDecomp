// Name: core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0
// Address: 0042c3c0
// Address Range: [[0042c3c0, 0042c579]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0 (CCharacter *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0
          (CCharacter *this_ptr,SDamageInfo *damage_info)

{
  uint uVar1;
  double dVar2;
  CVector3f *output_world_point;
  CVector3f *input_local_point;
  CVector3f local_28;
  CVector3f local_1c;
  
  if (damage_info->damage_amount <= 0.0) {
    return;
  }
  uVar1 = damage_info->damage_type;
  if (uVar1 < 6) {
    if (uVar1 < 4) {
      if (uVar1 == 3) {
        core_charactr_cpp_CCharacter_FUN_0042b930(this_ptr);
      }
      goto LAB_0042c429;
    }
    if (4 < uVar1) {
      core_charactr_cpp_CCharacter_FUN_0042b8e0(this_ptr);
      goto LAB_0042c429;
    }
LAB_0042c50c:
    core_charactr_cpp_CCharacter_FUN_0042b9e0(this_ptr);
  }
  else {
    if (6 < uVar1) {
      if (uVar1 < 0x68) {
        if (uVar1 != 7) goto LAB_0042c429;
        goto LAB_0042c50c;
      }
      if (uVar1 < 0x69) {
        core_charactr_cpp_CCharacter_FUN_0042b190(this_ptr);
        goto LAB_0042c429;
      }
      if (uVar1 != 0x6a) goto LAB_0042c429;
    }
    this_ptr->stagger_amount = 2.0;
  }
LAB_0042c429:
  if (damage_info->ammo_type == 5) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base,&local_28,&damage_info->impact_direction);
    core_charactr_cpp_CCharacter_FUN_0042b5b0(this_ptr);
  }
  if (0.0 < (float)damage_info->damage_flags) {
    input_local_point = &local_1c;
    output_world_point = (CVector3f *)0x42c47c;
    dVar2 = round
                      ((double)(damage_info->damage_amount * (float)damage_info->damage_flags));
    local_1c.z = (float)(int)ROUND(dVar2);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base,output_world_point,input_local_point);
    core_gore_cpp_FUN_004edbb0();
  }
  if ((this_ptr->health_bar_mode == 1) && ((CHero *)this_ptr != g_HeroActors[g_LocalHeroIndex])) {
    core_game_cpp_CGame_FUN_004e0bf0(g_CGamePtr);
  }
  if (0.0 < this_ptr->hit_points) {
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042d060(this_ptr);
  return;
}
