// Name: core_mobster.cpp_CMobster_ctor_FUN_0051c7d0
// Address: 0051c7d0
// Address Range: [[0051c7d0, 0051c907]]
// Convention: __cdecl
// Signature: CMobster * __cdecl core_mobster_cpp_CMobster_ctor_FUN_0051c7d0(CMobster *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMobster * __cdecl core_mobster_cpp_CMobster_ctor_FUN_0051c7d0(CMobster *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CMobster *pCVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pCVar4 = (CMobster *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar4->base).base.base.vtable._ub = &g_CMobsterVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar4->base).base.model,"mobster1.dfm");
  fVar2 = _DAT_00603d60;
  (pCVar4->base).base.collision_cylinder_height = 0.6;
  fVar3 = _DAT_00603d64;
  (pCVar4->base).base.collision_cylinder_radius = 0.9;
  (pCVar4->base).base.ai_detection_range_min = fVar2;
  (pCVar4->base).base.ai_detection_range_max = fVar3;
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0xff);
  pCVar4->idle_timer = 0.0;
  pCVar4->weapon_approach_timer = 0.0;
  pCVar4->target_weapon = (CDemonActor *)0x0;
  pCVar4->firing_blend = 0.0;
  pCVar4->firing_cooldown = 0.0;
  (pCVar4->base).victim_height = 40.0;
  pCVar4->ai_idle_counter = iVar5;
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040cc60(0x62,0x65);
  pCVar4->taunt_timer = 0.0;
  pCVar4->weapon_search_count = 0;
  pCVar4->post_mode = 0;
  pCVar4->our_post = (CDemonActor *)0x0;
  pCVar4->vehicle = (CDemonActor *)0x0;
  pcVar6 = "none";
  pCVar4->side_of_car = 0;
  pCVar4->hold_pos_flag = 0;
  pcVar7 = pCVar4->hold_pos_condition;
  (pCVar4->sound_variant).bytes[0] = (uchar)iVar5;
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
