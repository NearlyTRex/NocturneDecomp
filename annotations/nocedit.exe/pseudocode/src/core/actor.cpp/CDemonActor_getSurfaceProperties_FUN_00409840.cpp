// Name: core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840
// Address: 00409840
// Address Range: [[00409840, 00409871]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840(CDemonActor *this_ptr,SSurfaceInfo *surface_info)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840(CDemonActor *this_ptr,SSurfaceInfo *surface_info)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x495);
  surface_info->reflectivity = 0.0;
  surface_info->alpha_or_wetness = 0.0;
  surface_info->angle_copy = surface_info->angle_or_rotation;
  return;
}
