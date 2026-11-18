// Name: core_waypoint.cpp_CWayPoint_dtor_FUN_005795e0
// Address: 005795e0
// Address Range: [[005795e0, 0057962d]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_dtor_FUN_005795e0(CWayPoint *this_ptr,uint flags)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_dtor_FUN_005795e0(CWayPoint *this_ptr,uint flags)

{
  CWayPoint *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CWayPointTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CWayPoint *)core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
