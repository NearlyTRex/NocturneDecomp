// Name: core_enemy.cpp_CEnemy_ctor_FUN_004a0410
// Address: 004a0410
// Address Range: [[004a0410, 004a0505]]
// Convention: __cdecl
// Signature: CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_004a0410(CEnemy *this_ptr)

#include "nocturne.h"

CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_004a0410(CEnemy *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  float fVar3;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = (CEnemy *)core_charactr_cpp_CCharacter_ctor_FUN_0042c080(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CEnemyVTable._ub;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.9,1.1);
  pCVar2->pool_me = 0;
  pCVar2->special_form_flag = 0;
  pCVar2->victim = (CCharacter *)0x0;
  pCVar2->victim_search_timer = 0.0;
  pCVar2->victim_search_radius = 50.0;
  pCVar2->randomize_me = 1;
  pCVar2->script_victim = (CCharacter *)0x0;
  pCVar2->is_in_combat = 0;
  pCVar2->patrol_name_pattern[0] = '\0';
  pCVar2->guard_distance = 100.0;
  pcVar4 = &DAT_005dcac1;
  pCVar2->attack_cooldown = 0.0;
  pcVar5 = (pCVar2->base).base.footstep_sound_code;
  pCVar2->victim_height = 6.0;
  pCVar2->allow_pathfind_to_new_targets = 1;
  pCVar2->speed = fVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  (pCVar2->base).turn_rate = 1.5707964;
  return pCVar2;
}
