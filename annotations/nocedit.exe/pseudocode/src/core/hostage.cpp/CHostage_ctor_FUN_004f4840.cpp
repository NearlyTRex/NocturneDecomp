// Name: core_hostage.cpp_CHostage_ctor_FUN_004f4840
// Address: 004f4840
// Address Range: [[004f4840, 004f4962]]
// Convention: __cdecl
// Signature: CHostage * __cdecl core_hostage_cpp_CHostage_ctor_FUN_004f4840(CHostage *this_ptr)

#include "nocturne.h"

CHostage * __cdecl core_hostage_cpp_CHostage_ctor_FUN_004f4840(CHostage *this_ptr)

{
  char cVar1;
  CHostage *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CHostage *)core_npc_cpp_CNPC_ctor_FUN_005447e0(&this_ptr->base);
  (pCVar2->base).base.base.vtable._ub = &g_CHostageVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar2->base).base.model,"hickdad.dfm");
  pCVar2->follow_state = 0;
  pCVar2->hostage_state = 0;
  pcVar3 = "true";
  pCVar2->goal_way_point = (CDemonActor *)0x0;
  pCVar2->sit_down_way_point = (CDemonActor *)0x0;
  pcVar4 = pCVar2->rescue_condition;
  pCVar2->rescue_distance = 5.0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar2->next_way_point = (CDemonActor *)0x0;
  (pCVar2->base).base.grabbed_by = (CDemonActor *)0x0;
  pCVar2->gun_raise_progress = 0.0;
  pCVar2->gun_blend_weight = 0.0;
  pCVar2->rescue_event[0] = '\0';
  pCVar2->hero_found_me_event[0] = '\0';
  pCVar2->hero_left_me_event[0] = '\0';
  pCVar2->hero_came_back_event[0] = '\0';
  pCVar2->get_eaten_event[0] = '\0';
  pCVar2->going_to_sit_down_event[0] = '\0';
  pCVar2->sit_down_event[0] = '\0';
  pCVar2->grabber = (CDemonActor *)0x0;
  pCVar2->grabber_flee_timer = 0.0;
  pCVar2->no_shadows_when_saved = 0;
  (pCVar2->base).base.descriptive_name[0] = '\0';
  pCVar2->damage_sound[0] = '\0';
  pCVar2->die_sound[0] = '\0';
  (pCVar2->base).base.health_bar_mode = 1;
  return pCVar2;
}
