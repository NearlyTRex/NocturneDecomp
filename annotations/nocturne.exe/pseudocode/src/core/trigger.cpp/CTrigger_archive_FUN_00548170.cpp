// Name: core_trigger.cpp_CTrigger_archive_FUN_00548170
// Address: 00548170
// Address Range: [[00548170, 00548400]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_archive_FUN_00548170(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_archive_FUN_00548170(CTrigger *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->trigger_state,"triggerState");
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->trigger_size,"triggerSize");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&this_ptr->event_type,"triggerType");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->on_event,"onName");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->off_event,"offName");
  if (INT_005c1130 < 7) {
    if (1 < INT_005c1130) {
      core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->hero_triggers_me,"whoTriggers")
      ;
      core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->actor_name,"actorTriggerName");
    }
    if (2 < INT_005c1130) {
      core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->light_min,"lightMin");
      core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->light_max,"lightMax");
    }
    if ((3 < INT_005c1130) && (this_ptr->hero_triggers_me == 5)) {
      core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->laser_type,"laserType");
    }
    if (4 < INT_005c1130) {
      if (this_ptr->hero_triggers_me == 1) {
        core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->actor_type,"actorTriggerTypes")
        ;
      }
      if (this_ptr->hero_triggers_me == 7) {
        core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->hit_points,"hitPoints");
      }
    }
    if (5 < INT_005c1130) {
      core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->pressure_plate,"pressurePlate")
      ;
      return;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->hero_triggers_me,"whoTriggers");
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->actor_name,"actorTriggerName");
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->actor_type,"actorTriggerTypes");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->light_min,"lightMin");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->light_max,"lightMax");
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->laser_type,"laserType");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->hit_points,"hitPoints");
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->pressure_plate,"pressurePlate");
    if (INT_005c1130 < 8) {
      core_trigger_cpp_CTrigger_calculateTestRadius_FUN_00548680(this_ptr);
    }
    else {
      core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->test_radius,"testRadius");
    }
    if (8 < INT_005c1130) {
      core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->auto_aim_at_me,"autoAimAtMe");
    }
    if (9 < INT_005c1130) {
      core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->shape,"shape");
    }
    if (10 < INT_005c1130) {
      core_actor_cpp_archiveString_FUN_0040c6d0
                (this_ptr->damage_actor_wildcard_name,"damageActorWildcard");
      return;
    }
  }
  return;
}
