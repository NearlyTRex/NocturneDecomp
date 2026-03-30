// Name: core_enemy.cpp_CEnemy_ctor_FUN_004a9500
// Address: 004a9500
// Address Range: [[004a9500, 004a952d]]
// Convention: __cdecl
// Signature: CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_004a9500(CEnemy *this_ptr)

#include "nocturne.h"

CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_004a9500(CEnemy *this_ptr)

{
  char cVar2;
  CEnemy *pCVar2;
  float fVar3;
  int iVar4;
  int iVar3;
  char *pcVar5;
  char *pcVar6;
  char cVar1;
  
  pCVar2 = (CEnemy *)core_charactr_cpp_CCharacter_ctor_FUN_00427e20(&this_ptr->base);
  (pCVar2->base).base.vtable._ub = &g_CEnemyVTable;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.9,1.1);
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
  pCVar2->attack_cooldown = 0.0;
  pCVar2->victim_height = 6.0;
  pCVar2->allow_pathfind_to_new_targets = 1;
  pCVar2->speed = fVar3;
  iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(-0x1fff,0x1fff);
  (pCVar2->base).base.scale.x = iVar4 + 0x10000;
  iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc70(-0x1fff,0x1fff);
  pcVar5 = "ene";
  (pCVar2->base).base.scale.y = iVar3 + 0x10000;
  iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc70(-0x1fff,0x1fff);
  pcVar6 = (pCVar2->base).base.footstep_sound_code;
  (pCVar2->base).base.scale.z = iVar3 + 0x10000;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return pCVar2;
    }
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  return pCVar2;
}
