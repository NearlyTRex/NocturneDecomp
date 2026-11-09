// Name: core_trigger.cpp_CTrigger_archive_FUN_0059b950
// Address: 0059b950
// Address Range: [[0059b950, 0059bc04]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_archive_FUN_0059b950(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_archive_FUN_0059b950(CTrigger *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&this_ptr->field_0x16c,"?triggerState" + 1);
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x160,"triggerSize");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x15c,"triggerType");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x224,"onName");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x288,"offName");
  if (g_CTriggerClassVersion < 7) {
    if (1 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b670
                ((int *)&this_ptr->field_0x174,"whoTriggers");
      core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x178,"actorTriggerName");
    }
    if (2 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x21c,"lightMin");
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x220,"lightMax");
    }
    if ((3 < g_CTriggerClassVersion) && (*(int *)&this_ptr->field_0x174 == 5)) {
      core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x2f4,"laserType")
      ;
    }
    if (4 < g_CTriggerClassVersion) {
      if (*(int *)&this_ptr->field_0x174 == 1) {
        core_actor_cpp_archiveString_FUN_0040b440
                  (&this_ptr->field_0x1c8,"actorTriggerTypes");
      }
      if (*(int *)&this_ptr->field_0x174 == 7) {
        core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x2f8,"hitPoints");
      }
    }
    if (5 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b670
                ((int *)&this_ptr->field_0x218,"pressurePlate");
      return;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x174,"whoTriggers")
    ;
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x178,"actorTriggerName");
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x1c8,"actorTriggerTypes");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x21c,"lightMin");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x220,"lightMax");
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x2f4,"laserType");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x2f8,"hitPoints");
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x218,"pressurePlate");
    if (g_CTriggerClassVersion < 8) {
      core_trigger_cpp_FUN_0059bee0(this_ptr);
    }
    else {
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x158,"testRadius");
    }
    if (8 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b670
                ((int *)&this_ptr->field_0x304,"autoAimAtMe");
    }
    if (9 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x170,"shape");
    }
    if (10 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveString_FUN_0040b440
                (&this_ptr->field_0x308,"damageActorWildcard");
    }
    if (0xb < g_CTriggerClassVersion) {
      core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x2fc,"hiliteActor");
      return;
    }
  }
  return;
}
