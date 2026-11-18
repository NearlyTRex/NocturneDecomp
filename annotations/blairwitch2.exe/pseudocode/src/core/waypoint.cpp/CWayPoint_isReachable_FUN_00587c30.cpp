// Name: core_waypoint.cpp_CWayPoint_isReachable_FUN_00587c30
// Address: 00587c30
// Address Range: [[00587c30, 00587d30]]
// Convention: __cdecl
// Signature: int __cdecl core_waypoint_cpp_CWayPoint_isReachable_FUN_00587c30(CWayPoint *this_ptr,CLocation *from_location,int use_tight_bounds,int skip_path_check )

#include "nocturne.h"

int __cdecl core_waypoint_cpp_CWayPoint_isReachable_FUN_00587c30(CWayPoint *this_ptr,CLocation *from_location,int use_tight_bounds,int skip_path_check )

{
  CPathMap *this_ptr_00;
  int iVar1;
  CVector3f local_40;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_28 = *(float *)(this_ptr->base).base.actor_name - (from_location->position).x;
  local_24 = *(float *)((this_ptr->base).base.actor_name + 4) - (from_location->position).y;
  local_20 = *(float *)((this_ptr->base).base.actor_name + 8) - (from_location->position).z;
  if (use_tight_bounds == 0) {
    if ((((float)10 < ABS(local_24)) || ((float)30 < ABS(local_28)))
       || ((float)30 < ABS(local_20))) {
      return 0;
    }
  }
  else if ((((float)8 < ABS(local_24)) || ((float)25 < ABS(local_28))
           ) || ((float)25 < ABS(local_20))) {
    return 0;
  }
  if (skip_path_check != 0) {
    return 1;
  }
  local_40.x = *(float *)(this_ptr->base).base.actor_name;
  local_40.y = *(float *)((this_ptr->base).base.actor_name + 4);
  local_40.z = *(float *)((this_ptr->base).base.actor_name + 8);
  local_1c = local_28;
  local_18 = local_24;
  local_14 = local_20;
  this_ptr_00 = core_path_cpp_getPathMap_FUN_00513ea0(from_location);
  iVar1 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650(this_ptr_00,&local_40,&local_34,0);
  return (uint)(iVar1 == 1);
}
