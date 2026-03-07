// Name: core_waypoint.cpp_CWayPoint_isReachable_FUN_005ebd40
// Address: 005ebd40
// Address Range: [[005ebd40, 005ebe2c]]
// Convention: __cdecl
// Signature: int __cdecl core_waypoint_cpp_CWayPoint_isReachable_FUN_005ebd40(CWayPoint *this_ptr,CLocation *from_location,int use_tight_bounds)

#include "nocturne.h"

int __cdecl core_waypoint_cpp_CWayPoint_isReachable_FUN_005ebd40(CWayPoint *this_ptr,CLocation *from_location,int use_tight_bounds)

{
  CPathMap *this_ptr_00;
  int iVar1;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  CVector3f local_18;
  
  local_24 = *(float *)(this_ptr->base).base.actor_name - (from_location->position).x;
  local_20 = *(float *)((this_ptr->base).base.actor_name + 4) - (from_location->position).y;
  local_1c = *(float *)((this_ptr->base).base.actor_name + 8) - (from_location->position).z;
  if (use_tight_bounds == 0) {
    if ((ABS(local_20) <= (float)10) && (ABS(local_24) <= (float)30)) {
      if ((float)30 < ABS(local_1c)) {
        return 0;
      }
      goto LAB_005ebde7;
    }
  }
  else if (((ABS(local_20) <= (float)8) && (ABS(local_24) <= (float)25))
          && (ABS(local_1c) <= (float)25)) {
LAB_005ebde7:
    local_18.x = *(float *)(this_ptr->base).base.actor_name;
    local_18.y = *(float *)((this_ptr->base).base.actor_name + 4);
    local_18.z = *(float *)((this_ptr->base).base.actor_name + 8);
    this_ptr_00 = core_path_cpp_getPathMap_FUN_00548500(from_location);
    iVar1 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00(this_ptr_00,&local_18,&local_30,0)
    ;
    return (uint)(iVar1 == 1);
  }
  return 0;
}
