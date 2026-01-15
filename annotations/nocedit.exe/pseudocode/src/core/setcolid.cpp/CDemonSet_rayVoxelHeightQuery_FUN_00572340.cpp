// Name: core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340
// Address: 00572340
// Address Range: [[00572340, 00572457]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340(CDemonSet * this_ptr, CVector3f * position)

#include "nocturne.h"

float __cdecl
core_setcolid_cpp_CDemonSet_rayVoxelHeightQuery_FUN_00572340
          (CDemonSet *this_ptr,CVector3f *position)

{
  float fVar1;
  float local_2c;
  CVector3f local_28;
  CVector3f local_1c;
  float fStack_c;
  
  if (&local_1c != position) {
    local_1c.x = position->x;
    local_1c.y = position->y;
    local_1c.z = position->z;
  }
  if (&local_28 != position) {
    local_28.x = position->x;
    local_28.y = position->y;
    local_28.z = position->z;
  }
  local_1c.y = local_1c.y + -1f;
  local_28.y = local_28.y + 150f;
  fStack_c = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                       (&g_CDemonRaytraceInstance,&local_1c,&local_28,&this_ptr->collision_normal,
                        &this_ptr->ground_type);
  local_2c = fStack_c;
  if (fStack_c < 0.0) {
    local_2c = 1.01;
  }
  if ((local_2c < 1.0) && (this_ptr->ground_type == 0)) {
    this_ptr->ground_type = this_ptr->default_ground_type;
  }
  fVar1 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
                    (this_ptr,-1.0,&local_1c,&local_28,local_2c);
  return (local_28.y - local_1c.y) * fVar1 + local_1c.y;
}
