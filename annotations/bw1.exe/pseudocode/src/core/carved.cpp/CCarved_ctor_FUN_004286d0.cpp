// Name: core_carved.cpp_CCarved_ctor_FUN_004286d0
// Address: 004286d0
// Address Range: [[004286d0, 004287d4]]
// Convention: unknown
// Signature: CCarved * core_carved_cpp_CCarved_ctor_FUN_004286d0(CCarved *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCarved * core_carved_cpp_CCarved_ctor_FUN_004286d0(CCarved *this_ptr)

{
  float fVar1;
  CCarved *pCVar2;
  float fVar3;
  int iVar4;
  
  pCVar2 = (CCarved *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar2->base).base.base.vtable._ub = &g_CCarvedVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar2->base).base.model,"@carvedman1.dfm" + 1);
  (pCVar2->base).base.collision_cylinder_height = 0.5;
  fVar3 = _DAT_005fd470;
  (pCVar2->base).base.collision_cylinder_radius = 1.0;
  pCVar2->pickup_target = (CDemonActor *)0x0;
  fVar1 = _DAT_005fd474;
  pCVar2->pickup_approach_progress = 0.0;
  (pCVar2->base).base.ai_detection_range_min = fVar3;
  (pCVar2->base).base.ai_detection_range_max = fVar1;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.3,1.0);
  pCVar2->pickup_range_factor = fVar3;
  iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0xff);
  pCVar2->pickup_scan_timer = 0.0;
  pCVar2->target_door = (CDoor *)0x0;
  pCVar2->pain_cooldown = 0.0;
  pCVar2->always_chase_fast = 0;
  pCVar2->rise_delay = 0.0;
  pCVar2->buried_timer = 0.0;
  pCVar2->groan_timer = 0.0;
  (pCVar2->base).allow_pathfind_to_new_targets = 0;
  (pCVar2->base).base.turn_rate = 3.1415927;
  pCVar2->pickup_seed = iVar4;
  return pCVar2;
}
