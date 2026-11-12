// Name: core_waypoint.cpp_CWayPoint_dtor_FUN_005abd30
// Address: 005abd30
// Address Range: [[005abd30, 005abd7d]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_dtor_FUN_005abd30(CWayPoint *this_ptr,uint flags)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_dtor_FUN_005abd30(CWayPoint *this_ptr,uint flags)

{
  CWayPoint *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CWayPointTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CWayPoint *)core_actor_cpp_CDemonActor_dtor_FUN_00408730((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
