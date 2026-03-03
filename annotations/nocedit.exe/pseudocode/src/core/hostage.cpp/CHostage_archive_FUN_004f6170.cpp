// Name: core_hostage.cpp_CHostage_archive_FUN_004f6170
// Address: 004f6170
// Address Range: [[004f6170, 004f638c]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_archive_FUN_004f6170(CHostage *this_ptr)

#include "nocturne.h"

void __cdecl core_hostage_cpp_CHostage_archive_FUN_004f6170(CHostage *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_npc_cpp_CNPC_archive_FUN_00544ba0(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->follow_state,"followState");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->hostage_state,"hostageState");
  core_actor_cpp_archiveActor_FUN_0040b870(&this_ptr->goal_way_point,"goalWayPoint");
  if (g_CHostageClassVersion < 10) {
    model_ptr = &(this_ptr->base).base.model;
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
    core_actor_cpp_archiveMotionState_FUN_0040b9f0
              (&model_ptr->motion_controller,"motion state");
  }
  core_actor_cpp_archivePartStatus_FUN_0040bae0(&(this_ptr->base).base.model,"partStatus");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->rescue_distance,"rescueDistance");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->rescue_condition,"rescueCondition");
  if ((1 < g_CHostageClassVersion) && (g_CHostageClassVersion < 5)) {
    core_actor_cpp_archiveClothList_FUN_0040be60
              (&(this_ptr->base).base.cloth_list,"clothList");
  }
  if (2 < g_CHostageClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->rescue_event,"rescueEvent");
  }
  if (3 < g_CHostageClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0
              (this_ptr->hero_found_me_event,"heroFoundMeEvent");
    core_actor_cpp_archiveString_FUN_0040b5c0
              (this_ptr->hero_left_me_event,"heroLeftMeEvent");
    core_actor_cpp_archiveString_FUN_0040b5c0
              (this_ptr->hero_came_back_event,"heroCameBackEvent");
    core_actor_cpp_archiveString_FUN_0040b5c0
              (this_ptr->going_to_sit_down_event,"goingToSitDownEvent");
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->sit_down_event,"sitDownEvent");
  }
  if (5 < g_CHostageClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->no_shadows_when_saved,"noShadowsWhenSaved");
  }
  if (6 < g_CHostageClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->get_eaten_event,"getEatenEvent");
  }
  if ((7 < g_CHostageClassVersion) && (g_CHostageClassVersion < 0xc)) {
    core_actor_cpp_archiveLocalizedString_FUN_0040b6e0
              ((this_ptr->base).base.descriptive_name,"descriptiveName");
  }
  if (8 < g_CHostageClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b870
              (&this_ptr->sit_down_way_point,"sitDownWayPoint");
  }
  if (g_CHostageClassVersion < 0xb) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->damage_sound,"damageSound");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->die_sound,"dieSound");
  return;
}
