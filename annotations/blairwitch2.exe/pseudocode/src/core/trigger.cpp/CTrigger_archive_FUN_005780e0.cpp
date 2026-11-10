// Name: core_trigger.cpp_CTrigger_archive_FUN_005780e0
// Address: 005780e0
// Address Range: [[005780e0, 00578394]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_archive_FUN_005780e0(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_archive_FUN_005780e0(CTrigger *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)&this_ptr->field_0x2c8,"?triggerState" + 1);
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->field_0x2bc,"triggerSize");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x2b8,"triggerType");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->on_event,"onName");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->off_event,"offName");
  if (g_CTriggerClassVersion < 7) {
    if (1 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960
                ((int *)&this_ptr->trigger_cause,"whoTriggers");
      core_actor_cpp_archiveString_FUN_0040b730(this_ptr->actor_name,"actorTriggerName");
    }
    if (2 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->light_min,"lightMin");
      core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->light_max,"lightMax");
    }
    if ((3 < g_CTriggerClassVersion) && (this_ptr->trigger_cause == TRIGGER_CAUSE_LASER)) {
      core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->laser_type,"laserType");
    }
    if (4 < g_CTriggerClassVersion) {
      if (this_ptr->trigger_cause == TRIGGER_CAUSE_ACTOR) {
        core_actor_cpp_archiveString_FUN_0040b730(this_ptr->actor_type,"actorTriggerTypes")
        ;
      }
      if (this_ptr->trigger_cause == TRIGGER_CAUSE_DAMAGE) {
        core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->hit_points,"hitPoints");
      }
    }
    if (5 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->pressure_plate,"pressurePlate")
      ;
      return;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->trigger_cause,"whoTriggers");
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->actor_name,"actorTriggerName");
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->actor_type,"actorTriggerTypes");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->light_min,"lightMin");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->light_max,"lightMax");
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->laser_type,"laserType");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->hit_points,"hitPoints");
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->pressure_plate,"pressurePlate");
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
