// Name: core_zombie.cpp_CZombie_ctor_FUN_005bab10
// Address: 005bab10
// Address Range: [[005bab10, 005bac71]]
// Convention: __cdecl
// Signature: CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_005bab10(CZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_005bab10(CZombie *this_ptr)

{
  char cVar1;
  float fVar2;
  CZombie *pCVar3;
  float fVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar3 = (CZombie *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  pcVar6 = (char *)0x5fa420;
  (pCVar3->base).base.base.vtable._ub = &g_CZombieVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,(char *)0x5fa414);
  (pCVar3->base).base.collision_cylinder_height = 0.5;
  pcVar7 = pCVar3->rise_from_grave_condition;
  (pCVar3->base).base.collision_cylinder_radius = 1.0;
  fVar4 = _DAT_006083ac;
  pCVar3->pickup_target = (CDemonActor *)0x0;
  fVar2 = _DAT_006083b0;
  pCVar3->pickup_approach_progress = 0.0;
  (pCVar3->base).base.ai_detection_range_min = fVar4;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.3,1.0);
  pCVar3->grave_actor = (CDemonActor *)0x0;
  pCVar3->pickup_range_factor = fVar4;
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0xff);
  pCVar3->pickup_scan_timer = 0.0;
  pCVar3->target_door = (CDoor *)0x0;
  pCVar3->pickup_seed = iVar5;
  pcVar7 = g_CDemonSetPtr->geometry_filename;
  pCVar3->is_miner_zombie = 0;
  pCVar3->pain_cooldown = 0.0;
  iVar5 = _stricmp(pcVar7,"mine.geo");
  pCVar3->always_chase_fast = 0;
  pCVar3->rise_delay = 0.0;
  pCVar3->buried_timer = 0.0;
  (pCVar3->base).allow_pathfind_to_new_targets = 0;
  (pCVar3->base).base.turn_rate = 1.5707964;
  pCVar3->is_miner_zombie = (uint)(iVar5 == 0);
  return pCVar3;
}
