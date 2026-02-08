// Name: core_wateract.cpp_CWaterActor_getSurfaceProperties_FUN_005eb910
// Address: 005eb910
// Address Range: [[005eb910, 005eb932]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_getSurfaceProperties_FUN_005eb910 (CWaterActor *this_ptr,SSurfaceInfo *surface_info)

#include "nocturne.h"

void __cdecl
core_wateract_cpp_CWaterActor_getSurfaceProperties_FUN_005eb910
          (CWaterActor *this_ptr,SSurfaceInfo *surface_info)

{
  core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840(&this_ptr->base,surface_info);
  surface_info->alpha_or_wetness = 0.3;
  surface_info->reflectivity = 0.8;
  return;
}
