// Name: core_carved.cpp_CCarved_ctor_FUN_00425960
// Address: 00425960
// Address Range: [[00425960, 00425aaa]]
// Convention: unknown
// Signature: CCarved * core_carved_cpp_CCarved_ctor_FUN_00425960(CCarved *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCarved * core_carved_cpp_CCarved_ctor_FUN_00425960(CCarved *this_ptr)

{
  float fVar1;
  CEventList *this_ptr_00;
  CCarved *pCVar2;
  float fVar3;
  int iVar4;
  
  pCVar2 = (CCarved *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar2->base).base.base.vtable._ub = &g_CCarvedVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar2->base).base.model,"@carvedman1.dfm" + 1);
  (pCVar2->base).base.collision_cylinder_height = 0.5;
  fVar3 = _DAT_005dcf50;
  (pCVar2->base).base.collision_cylinder_radius = 1.0;
  pCVar2->pickup_target = (CDemonActor *)0x0;
  fVar1 = _DAT_005dcf54;
  pCVar2->pickup_approach_progress = 0.0;
  (pCVar2->base).base.ai_detection_range_min = fVar3;
  (pCVar2->base).base.ai_detection_range_max = fVar1;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.3,1.0);
  pCVar2->pickup_range_factor = fVar3;
  iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0xff);
  pCVar2->pickup_scan_timer = 0.0;
  pCVar2->target_door = (CDoor *)0x0;
  pCVar2->pain_cooldown = 0.0;
  pCVar2->always_chase_fast = 0;
  pCVar2->rise_delay = 0.0;
  pCVar2->buried_timer = 0.0;
  (pCVar2->base).allow_pathfind_to_new_targets = 0;
  this_ptr_00 = 0x01C6E360;
  (pCVar2->base).base.turn_rate = 1.5707964;
  pCVar2->pickup_seed = iVar4;
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (this_ptr_00,"COMBATMODEHARD");
  if (iVar4 == 0) {
    pCVar2->difficulty_speed_scale = 0.75;
  }
  else {
    pCVar2->difficulty_speed_scale = 1.0;
  }
  (pCVar2->base).attack_damage = 10.0;
  (pCVar2->base).pain_threshold = 5.0;
  (pCVar2->base).base.hit_points = 20.0;
  return pCVar2;
}
