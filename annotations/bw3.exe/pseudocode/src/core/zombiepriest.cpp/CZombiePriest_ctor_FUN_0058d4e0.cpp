// Name: core_zombiepriest.cpp_CZombiePriest_ctor_FUN_0058d4e0
// Address: 0058d4e0
// Address Range: [[0058d4e0, 0058d5dd]]
// Convention: __cdecl
// Signature: CZombiePriest * __cdecl core_zombiepriest_cpp_CZombiePriest_ctor_FUN_0058d4e0(CZombiePriest *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CZombiePriest * __cdecl core_zombiepriest_cpp_CZombiePriest_ctor_FUN_0058d4e0(CZombiePriest *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CZombiePriest *pCVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar4 = (CZombiePriest *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CZombiePriestVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar4->base).base.model,"?bwp3_zombpriest.dfm" + 1);
  fVar2 = _DAT_005e7050;
  (pCVar4->base).base.collision_cylinder_height = 0.6;
  fVar3 = _DAT_005e7054;
  (pCVar4->base).base.collision_cylinder_radius = 0.9;
  (pCVar4->base).base.ai_detection_range_min = fVar2;
  (pCVar4->base).base.ai_detection_range_max = fVar3;
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0xff);
  pCVar4->idle_timer = 0.0;
  pCVar4->weapon_approach_timer = 0.0;
  pCVar4->target_weapon = (CDemonActor *)0x0;
  pCVar4->firing_blend = 0.0;
  pCVar4->firing_cooldown = 0.0;
  (pCVar4->base).victim_height = 40.0;
  pCVar4->post_mode = 0;
  pcVar6 = (char *)0x5d8a1c;
  pCVar4->our_post = (CDemonActor *)0x0;
  pCVar4->hold_pos_flag = 0;
  pcVar7 = pCVar4->hold_pos_condition;
  pCVar4->ai_idle_counter = iVar5;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  (pCVar4->base).allow_pathfind_to_new_targets = 0;
  return pCVar4;
}
