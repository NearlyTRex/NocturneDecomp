// Name: core_trigger.cpp_FUN_005780e0
// Address: 005780e0
// Address Range: [[005780e0, 00578394]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_FUN_005780e0(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_FUN_005780e0(CTrigger *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330((CDemonActor *)this_ptr);
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)&this_ptr->field_0x2c8,"?triggerState" + 1);
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->field_0x2bc,"triggerSize");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x2b8,"triggerType");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x380,"onName");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x3e4,"offName");
  if (g_CTriggerClassVersion < 7) {
    if (1 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960
                ((int *)&this_ptr->field_0x2d0,"whoTriggers");
      core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x2d4,"actorTriggerName");
    }
    if (2 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x378,"lightMin");
      core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x37c,"lightMax");
    }
    if ((3 < g_CTriggerClassVersion) && (*(int *)&this_ptr->field_0x2d0 == 5)) {
      core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x450,"laserType")
      ;
    }
    if (4 < g_CTriggerClassVersion) {
      if (*(int *)&this_ptr->field_0x2d0 == 1) {
        core_actor_cpp_archiveString_FUN_0040b730
                  (&this_ptr->field_0x324,"actorTriggerTypes");
      }
      if (*(int *)&this_ptr->field_0x2d0 == 7) {
        core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x454,"hitPoints");
      }
    }
    if (5 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960
                ((int *)&this_ptr->field_0x374,"pressurePlate");
      return;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x2d0,"whoTriggers")
    ;
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x2d4,"actorTriggerName");
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x324,"actorTriggerTypes");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x378,"lightMin");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x37c,"lightMax");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x450,"laserType");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x454,"hitPoints");
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x374,"pressurePlate");
    if (g_CTriggerClassVersion < 8) {
      core_trigger_cpp_FUN_00578650(this_ptr);
    }
    else {
      core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x2b4,"testRadius");
    }
    if (8 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960
                ((int *)&this_ptr->field_0x460,"autoAimAtMe");
    }
    if (9 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x2cc,"shape");
    }
    if (10 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveString_FUN_0040b730
                (&this_ptr->field_0x464,"damageActorWildcard");
    }
    if (0xb < g_CTriggerClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x458,"hiliteActor");
      return;
    }
  }
  return;
}
