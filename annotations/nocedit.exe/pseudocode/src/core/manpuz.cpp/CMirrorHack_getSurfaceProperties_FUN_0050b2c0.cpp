// Name: core_manpuz.cpp_CMirrorHack_getSurfaceProperties_FUN_0050b2c0
// Address: 0050b2c0
// Address Range: [[0050b2c0, 0050b2eb]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_CMirrorHack_getSurfaceProperties_FUN_0050b2c0(CMirrorHack * this_ptr, SSurfaceInfo * surface_info)

#include "nocturne.h"

void __cdecl
core_manpuz_cpp_CMirrorHack_getSurfaceProperties_FUN_0050b2c0
          (CMirrorHack *this_ptr,SSurfaceInfo *surface_info)

{
  core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840(&this_ptr->base_actor,surface_info);
  if ((surface_info->hit_position).z <= (float)-0.01) {
    return;
  }
  surface_info->alpha_or_wetness = 1.0;
  return;
}
