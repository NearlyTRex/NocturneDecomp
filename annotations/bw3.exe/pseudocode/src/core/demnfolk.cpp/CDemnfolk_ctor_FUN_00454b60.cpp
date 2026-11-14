// Name: core_demnfolk.cpp_CDemnfolk_ctor_FUN_00454b60
// Address: 00454b60
// Address Range: [[00454b60, 00454d17]]
// Convention: __cdecl
// Signature: CDemnfolk * __cdecl core_demnfolk_cpp_CDemnfolk_ctor_FUN_00454b60(CDemnfolk *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemnfolk * __cdecl core_demnfolk_cpp_CDemnfolk_ctor_FUN_00454b60(CDemnfolk *this_ptr)

{
  char cVar1;
  float fVar2;
  CEventList *this_ptr_00;
  CDemnfolk *pCVar3;
  float fVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar3 = (CDemnfolk *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  pcVar6 = (char *)0x5ba3c7;
  (pCVar3->base).base.base.vtable._ub = &g_CDemnfolkVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar3->base).base.model,"@d_deputy.dfm" + 1);
  (pCVar3->base).base.collision_cylinder_height = 0.5;
  pcVar7 = pCVar3->rise_from_grave_condition;
  (pCVar3->base).base.collision_cylinder_radius = 1.0;
  fVar4 = _DAT_005de05c;
  pCVar3->pickup_target = (CDemonActor *)0x0;
  fVar2 = _DAT_005de060;
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
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.3,1.0);
  pCVar3->grave_actor = (CDemonActor *)0x0;
  pCVar3->pickup_range_factor = fVar4;
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0xff);
  pCVar3->pickup_scan_timer = 0.0;
  pCVar3->target_door = (CDoor *)0x0;
  pCVar3->is_miner_zombie = 0;
  pCVar3->is_indoor_demon = 0;
  pCVar3->pain_cooldown = 0.0;
  pCVar3->always_chase_fast = 0;
  pCVar3->rise_delay = 0.0;
  pCVar3->buried_timer = 0.0;
  (pCVar3->base).allow_pathfind_to_new_targets = 0;
  (pCVar3->base).base.turn_rate = 1.5707964;
  pCVar3->object_shape_class = 2;
  pCVar3->is_female = 0;
  pCVar3->bleedout_timer = 0.0;
  pCVar3->sfx_handles[0] = 0;
  pCVar3->sfx_handles[1] = 0;
  this_ptr_00 = 0x01C6E360;
  pCVar3->pickup_seed = iVar5;
  pCVar3->is_miner_zombie = 0;
  iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (this_ptr_00,"COMBATMODEHARD");
  if (iVar5 != 0) {
    pCVar3->difficulty_speed_scale = 1.0;
    return pCVar3;
  }
  pCVar3->difficulty_speed_scale = 0.75;
  return pCVar3;
}
