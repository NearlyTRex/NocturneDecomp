// Name: core_trigger.cpp_CTrigger_onLaserHit_FUN_005e0a50
// Address: 005e0a50
// Address Range: [[005e0a50, 005e0a9c]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_onLaserHit_FUN_005e0a50(CTrigger *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_onLaserHit_FUN_005e0a50(CTrigger *this_ptr,SLaserInfo *laser_info)

{
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409840(&this_ptr->base,laser_info);
  if ((this_ptr->hero_triggers_me == 5) && (this_ptr->laser_type == laser_info->laser_type)) {
    this_ptr->event_flag = 1;
  }
  laser_info->transparency = 0.0;
  laser_info->reflectivity = 1.0;
  laser_info->stored_angle = laser_info->incidence_angle;
  return;
}
