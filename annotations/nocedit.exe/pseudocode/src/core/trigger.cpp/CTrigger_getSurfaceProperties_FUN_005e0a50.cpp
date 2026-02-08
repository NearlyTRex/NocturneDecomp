// Name: core_trigger.cpp_CTrigger_getSurfaceProperties_FUN_005e0a50
// Address: 005e0a50
// Address Range: [[005e0a50, 005e0a9c]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_getSurfaceProperties_FUN_005e0a50 (CTrigger *this_ptr,SSurfaceInfo *surface_info)

#include "nocturne.h"

void __cdecl
core_trigger_cpp_CTrigger_getSurfaceProperties_FUN_005e0a50
          (CTrigger *this_ptr,SSurfaceInfo *surface_info)

{
  core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840(&this_ptr->base,surface_info);
  if ((this_ptr->hero_triggers_me == 5) && (this_ptr->laser_type == surface_info->unk2)) {
    this_ptr->unk2[4] = '\x01';
    this_ptr->unk2[5] = '\0';
    this_ptr->unk2[6] = '\0';
    this_ptr->unk2[7] = '\0';
  }
  surface_info->alpha_or_wetness = 0.0;
  surface_info->reflectivity = 1.0;
  surface_info->angle_copy = surface_info->angle_or_rotation;
  return;
}
