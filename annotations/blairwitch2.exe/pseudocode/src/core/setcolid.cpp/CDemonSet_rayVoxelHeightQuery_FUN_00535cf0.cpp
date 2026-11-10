// Name: core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00535cf0
// Address: 00535cf0
// Address Range: [[00535cf0, 00535e07]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_rayVoxelHeightQuery_FUN_00535cf0(CDemonSet *this_ptr,CVector3f *position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_setcolid_cpp_CDemonSet_rayVoxelHeightQuery_FUN_00535cf0(CDemonSet *this_ptr,CVector3f *position)

{
  float fVar1;
  float local_30;
  CVector3f local_2c;
  CVector3f local_20;
  float local_10;
  
  if (&local_20 != position) {
    local_20.x = position->x;
    local_20.y = position->y;
    local_20.z = position->z;
  }
  if (&local_2c != position) {
    local_2c.x = position->x;
    local_2c.y = position->y;
    local_2c.z = position->z;
  }
  local_20.y = local_20.y + _DAT_005e5dad;
  local_2c.y = local_2c.y + _DAT_005e5db1;
  local_10 = (float)core_dtrace_cpp_FUN_00472c60
                              (&g_CDemonRaytraceInstance,&local_20,&local_2c,
                               &this_ptr->collision_normal,&this_ptr->ground_type);
  local_30 = local_10;
  if (local_10 < 0.0) {
    local_30 = 1.01;
  }
  if ((local_30 < 1.0) && (this_ptr->ground_type == 0)) {
    this_ptr->ground_type = this_ptr->default_ground_type;
  }
  fVar1 = (float)core_setcolid_cpp_FUN_00536490(this_ptr,0xbf800000,&local_20,&local_2c,local_30);
  return (local_2c.y - local_20.y) * fVar1 + local_20.y;
}
