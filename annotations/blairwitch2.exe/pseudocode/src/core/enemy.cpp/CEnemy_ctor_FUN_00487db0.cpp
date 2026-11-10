// Name: core_enemy.cpp_CEnemy_ctor_FUN_00487db0
// Address: 00487db0
// Address Range: [[00487db0, 00487ea5]]
// Convention: __cdecl
// Signature: CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_00487db0(CEnemy *this_ptr)

#include "nocturne.h"

CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_00487db0(CEnemy *this_ptr)

{
  char cVar1;
  CEnemy *pCVar2;
  float fVar3;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = (CEnemy *)core_charactr_cpp_CCharacter_ctor_FUN_00422340(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CEnemyVTable._ub;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.9,1.1);
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
  pcVar4 = &DAT_005d2d28;
  pCVar2->attack_cooldown = 0.0;
  pcVar5 = &(pCVar2->base).base.field_0x120;
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
  *(uint *)&(pCVar2->base).field_0x259c = 0x3fc90fdb;
  return pCVar2;
}
