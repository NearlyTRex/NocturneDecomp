// Name: core_waypoint.cpp_CWayPoint_FUN_005ebd40
// Address: 005ebd40
// Address Range: [[005ebd40, 005ebe2c]]
// Convention: __cdecl
// Signature: int __cdecl core_waypoint_cpp_CWayPoint_FUN_005ebd40(CWayPoint *this_ptr)

#include "nocturne.h"

int __cdecl core_waypoint_cpp_CWayPoint_FUN_005ebd40(CWayPoint *this_ptr)

{
  CPathMap *this_ptr_00;
  int iVar1;
  float *in_stack_00000008;
  int in_stack_0000000c;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  CVector3f local_18;
  
  local_24 = *(float *)(this_ptr->base).base.actor_name - *in_stack_00000008;
  local_20 = *(float *)((this_ptr->base).base.actor_name + 4) - in_stack_00000008[1];
  local_1c = *(float *)((this_ptr->base).base.actor_name + 8) - in_stack_00000008[2];
  if (in_stack_0000000c == 0) {
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
    this_ptr_00 = core_path_cpp_FUN_00548500();
    iVar1 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00(this_ptr_00,&local_18,&local_30,0)
    ;
    return (uint)(iVar1 == 1);
  }
  return 0;
}
