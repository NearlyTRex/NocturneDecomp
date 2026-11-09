// Name: core_hostage.cpp_CHostage_archive_FUN_004ef020
// Address: 004ef020
// Address Range: [[004ef020, 004ef23c]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_archive_FUN_004ef020(CHostage *this_ptr)

#include "nocturne.h"

void __cdecl core_hostage_cpp_CHostage_archive_FUN_004ef020(CHostage *this_ptr)

{
  core_npc_cpp_FUN_00531bf0((CNPC *)this_ptr);
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x1fe64,"followState")
  ;
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&this_ptr->field_0x1fe6c,"hostageState");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x1fe70,"goalWayPoint");
  if (g_CHostageClassVersion < 10) {
    core_actor_cpp_FUN_0040b7f0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
    core_actor_cpp_FUN_0040b870((CMotionController *)&this_ptr->field_0x158,"motion state")
    ;
  }
  core_actor_cpp_FUN_0040b960
            ((CDeformableModelInstance *)&this_ptr->field_0x158,"partStatus");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x1fab8,"rescueDistance");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x1fabc,"rescueCondition");
  if ((1 < g_CHostageClassVersion) && (g_CHostageClassVersion < 5)) {
    core_actor_cpp_archiveClothList_FUN_0040bce0(&this_ptr->field_0x2ca0,"clothList");
  }
  if (2 < g_CHostageClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x1fb20,"rescueEvent");
  }
  if (3 < g_CHostageClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x1fb40,"heroFoundMeEvent");
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x1fba4,"heroLeftMeEvent");
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x1fc08,"heroCameBackEvent")
    ;
    core_actor_cpp_archiveString_FUN_0040b440
              (&this_ptr->field_0x1fcd0,"goingToSitDownEvent");
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x1fd34,"sitDownEvent");
  }
  if (5 < g_CHostageClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x1fe8c,"noShadowsWhenSaved");
  }
  if (6 < g_CHostageClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x1fc6c,"getEatenEvent");
  }
  if ((7 < g_CHostageClassVersion) && (g_CHostageClassVersion < 0xc)) {
    core_actor_cpp_archiveLocalizedString_FUN_0040b560
              (&this_ptr->field_0x2544,"descriptiveName");
  }
  if (8 < g_CHostageClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x1fe74,"sitDownWayPoint");
  }
  if (g_CHostageClassVersion < 0xb) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x1fd98,"damageSound");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x1fdfc,"dieSound");
  return;
}
