// Name: core_trigger.cpp_CTrigger_onLaserHit_FUN_0059bd80
// Address: 0059bd80
// Address Range: [[0059bd80, 0059bdcc]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_onLaserHit_FUN_0059bd80(CTrigger *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_onLaserHit_FUN_0059bd80(CTrigger *this_ptr,SLaserInfo *laser_info)

{
  core_actor_cpp_CDemonActor_onLaserHit_FUN_00409680(&this_ptr->base,laser_info);
  if ((this_ptr->trigger_cause == TRIGGER_CAUSE_LASER) &&
     (this_ptr->laser_type == *(int *)(laser_info + 8))) {
    this_ptr->event_flag = 1;
  }
  *(uint *)(laser_info + 0x50) = 0;
  *(uint *)(laser_info + 0x48) = 0x3f800000;
  *(uint *)(laser_info + 0x4c) = *(uint *)(laser_info + 0x44);
  return;
}
