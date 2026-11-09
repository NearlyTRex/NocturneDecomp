// Name: core_hostage.cpp_CHostage_archive_FUN_004d2df0
// Address: 004d2df0
// Address Range: [[004d2df0, 004d300c]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_archive_FUN_004d2df0(CHostage *this_ptr)

#include "nocturne.h"

void __cdecl core_hostage_cpp_CHostage_archive_FUN_004d2df0(CHostage *this_ptr)

{
  core_npc_cpp_FUN_005109e0((CNPC *)this_ptr);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x246f4,"followState")
  ;
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)&this_ptr->field_0x246fc,"hostageState");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x24700,"goalWayPoint");
  if (g_CHostageClassVersion < 10) {
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
              (&this_ptr->field_0x2b4,"modelName");
    core_actor_cpp_archiveMotionState_FUN_0040bb60(&this_ptr->field_0x2b4,"motion state");
  }
  core_actor_cpp_archivePartStatus_FUN_0040bc50(&this_ptr->field_0x2b4,"partStatus");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x24348,"rescueDistance");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x2434c,"rescueCondition");
  if ((1 < g_CHostageClassVersion) && (g_CHostageClassVersion < 5)) {
    core_actor_cpp_archiveClothList_FUN_0040bfd0(&this_ptr->field_0x2d0c,"clothList");
  }
  if (2 < g_CHostageClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x243b0,"rescueEvent");
  }
  if (3 < g_CHostageClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x243d0,"heroFoundMeEvent");
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x24434,"heroLeftMeEvent");
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x24498,"heroCameBackEvent")
    ;
    core_actor_cpp_archiveString_FUN_0040b730
              (&this_ptr->field_0x24560,"goingToSitDownEvent");
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x245c4,"sitDownEvent");
  }
  if (5 < g_CHostageClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x2471c,"noShadowsWhenSaved");
  }
  if (6 < g_CHostageClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x244fc,"getEatenEvent");
  }
  if ((7 < g_CHostageClassVersion) && (g_CHostageClassVersion < 0xc)) {
    core_actor_cpp_archiveLocalizedString_FUN_0040b850
              (&this_ptr->field_0x25b4,"descriptiveName");
  }
  if (8 < g_CHostageClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x24704,"sitDownWayPoint");
  }
  if (g_CHostageClassVersion < 0xb) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x24628,"damageSound");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x2468c,"dieSound");
  return;
}
