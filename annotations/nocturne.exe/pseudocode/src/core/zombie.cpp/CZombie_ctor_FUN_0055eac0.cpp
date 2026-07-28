// Name: core_zombie.cpp_CZombie_ctor_FUN_0055eac0
// Address: 0055eac0
// Address Range: [[0055eac0, 0055ec17]]
// Convention: __cdecl
// Signature: CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_0055eac0(CZombie *this_ptr)

#include "nocturne.h"

CZombie * __cdecl core_zombie_cpp_CZombie_ctor_FUN_0055eac0(CZombie *this_ptr)

{
  char cVar1;
  float fVar2;
  CZombie *pCVar3;
  float fVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar3 = (CZombie *)core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  pcVar7 = "true";
  (pCVar3->base).base.base.vtable._ub =
       (CDemonActor_vtable *)&PTR_core_zombie_cpp_CZombie_setup_FUN_0055ec20_005a4554;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar3->base).base.model,"zombie1.dfm");
  (pCVar3->base).base.collision_cylinder_height = 0.5;
  pcVar6 = pCVar3->rise_from_grave_condition;
  (pCVar3->base).base.collision_cylinder_radius = 1.0;
  fVar4 = 50.0f;
  pCVar3->pickup_target = (CDemonActor *)0x0;
  fVar2 = 100.0f;
  pCVar3->pickup_approach_progress = 0.0;
  (pCVar3->base).base.ai_detection_range_min = fVar4;
  (pCVar3->base).base.ai_detection_range_max = fVar2;
  do {
    cVar1 = *pcVar7;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  fVar4 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3e99999a,0x3f800000);
  pCVar3->grave_actor = (CDemonActor *)0x0;
  pCVar3->pickup_range_factor = fVar4;
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040de00(0,0xff);
  pCVar3->pickup_scan_timer = 0.0;
  pCVar3->target_door = (CDoor *)0x0;
  pCVar3->pickup_seed = iVar5;
  pcVar6 = (char *)(0x01E57284 + 0x14cd08);
  pCVar3->is_miner_zombie = 0;
  pCVar3->pain_cooldown = 0.0;
  iVar5 = _stricmp(pcVar6,"mine.geo");
  pCVar3->always_chase_fast = 0;
  pCVar3->rise_delay = 0.0;
  pCVar3->buried_timer = 0.0;
  (pCVar3->base).allow_pathfind_to_new_targets = 0;
  pCVar3->is_miner_zombie = (uint)(iVar5 == 0);
  return pCVar3;
}
