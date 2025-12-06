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
  BADSPACEBASE *in_ESP;
  byte local_2c [8];
  float local_24;
  byte local_20 [8];
  float local_18;
  float local_14;
  float fStack_c;
  
  if ((CVector3f *)local_20 != position) {
    local_20._0_4_ = position->x;
    local_20._4_4_ = position->y;
    local_18 = position->z;
  }
  if ((CVector3f *)local_2c != position) {
    local_2c._0_4_ = position->x;
    local_2c._4_4_ = position->y;
    local_24 = position->z;
  }
  local_20._4_4_ = (float)local_20._4_4_ + -1f;
  local_2c._4_4_ = (float)local_2c._4_4_ + 150f;
  fStack_c = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                       (&g_CDemonRaytraceInstance,(CVector3f *)local_20,(CVector3f *)local_2c,
                        &this_ptr->collision_normal,&this_ptr->ground_type);
  local_2c._0_4_ = fStack_c;
  if (fStack_c < 0.0) {
    local_2c._0_4_ = 1.01;
  }
  if (((float)local_2c._0_4_ < 1.0) && (this_ptr->ground_type == 0)) {
    this_ptr->ground_type = this_ptr->default_ground_type;
  }
  fVar1 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
                    (this_ptr,-1.0,(CVector3f *)(local_20 + 4),(CVector3f *)(local_2c + 4),
                     (float)local_2c._0_4_);
  return ((float)local_20._0_4_ - local_14) * fVar1 + local_14;
}
