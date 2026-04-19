// Name: core_zombie.cpp_CZombie_ctor_FUN_005f8fe0
// Address: 005f8fe0
// MANUAL RECONSTRUCTION
// Address Range: [[005f8fe0, 005f9137]]
// Convention: __cdecl
// Signature: CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_005f8fe0(CZombie *this_ptr)

#include "nocturne.h"

CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_005f8fe0(CZombie *this_ptr)

{
  float fVar3;
  CZombie *pCVar3;
  float fVar4;
  int iVar5;
  char *str1;
  int iVar4;
  float fVar2;

  pCVar3 = (CZombie *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CZombieVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar3->base).base.model,"zombie1.dfm");
  (pCVar3->base).base.collision_cylinder_height = 0.5;
  (pCVar3->base).base.collision_cylinder_radius = 1.0;
  fVar3 = 50.0f;
  pCVar3->pickup_target = (CDemonActor *)0x0;
  fVar2 = 100.0f;
  pCVar3->pickup_approach_progress = 0.0;
  (pCVar3->base).base.ai_detection_range_min = fVar3;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  strcpy(pCVar3->rise_from_grave_condition,"true");
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.3,1.0);
  pCVar3->grave_actor = (CDemonActor *)0x0;
  pCVar3->pickup_range_factor = fVar4;
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0xff);
  pCVar3->pickup_scan_timer = 0.0;
  pCVar3->target_door = (CDoor *)0x0;
  pCVar3->pickup_seed = iVar5;
  str1 = g_CDemonSetPtr->geometry_filename;
  pCVar3->is_miner_zombie = 0;
  pCVar3->pain_cooldown = 0.0;
  iVar4 = _stricmp(str1,"mine.geo");
  pCVar3->always_chase_fast = 0;
  pCVar3->rise_delay = 0.0;
  pCVar3->buried_timer = 0.0;
  (pCVar3->base).allow_pathfind_to_new_targets = 0;
  pCVar3->is_miner_zombie = (uint)(iVar4 == 0);
  return pCVar3;
}
