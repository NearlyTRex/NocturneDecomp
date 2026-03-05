// Name: core_trigger.cpp_CTrigger_archive_FUN_005e0690
// Address: 005e0690
// Address Range: [[005e0690, 005e0920]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_archive_FUN_005e0690(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_archive_FUN_005e0690(CTrigger *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->trigger_state,"triggerState");
  core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->trigger_size,"triggerSize");
  core_actor_cpp_archiveInteger_FUN_0040b7f0((int *)&this_ptr->event_type,"triggerType");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->on_event,"onName");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->off_event,"offName");
  if (g_CTriggerClassVersion < 7) {
    if (1 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->hero_triggers_me,"whoTriggers")
      ;
      core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->actor_name,"actorTriggerName");
    }
    if (2 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->light_min,"lightMin");
      core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->light_max,"lightMax");
    }
    if ((3 < g_CTriggerClassVersion) && (this_ptr->hero_triggers_me == 5)) {
      core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->laser_type,"laserType");
    }
    if (4 < g_CTriggerClassVersion) {
      if (this_ptr->hero_triggers_me == 1) {
        core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->actor_type,"actorTriggerTypes")
        ;
      }
      if (this_ptr->hero_triggers_me == 7) {
        core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->hit_points,"hitPoints");
      }
    }
    if (5 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->pressure_plate,"pressurePlate")
      ;
      return;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->hero_triggers_me,"whoTriggers");
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->actor_name,"actorTriggerName");
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->actor_type,"actorTriggerTypes");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->light_min,"lightMin");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->light_max,"lightMax");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->laser_type,"laserType");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->hit_points,"hitPoints");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->pressure_plate,"pressurePlate");
    if (g_CTriggerClassVersion < 8) {
      core_trigger_cpp_CTrigger_calculateTestRadius_FUN_005e0ba0(this_ptr);
    }
    else {
      core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->test_radius,"testRadius");
    }
    if (8 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->auto_aim_at_me,"autoAimAtMe");
    }
    if (9 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->shape,"shape");
    }
    if (10 < g_CTriggerClassVersion) {
      core_actor_cpp_archiveString_FUN_0040b5c0
                (this_ptr->damage_actor_wildcard_name,"damageActorWildcard");
      return;
    }
  }
  return;
}
