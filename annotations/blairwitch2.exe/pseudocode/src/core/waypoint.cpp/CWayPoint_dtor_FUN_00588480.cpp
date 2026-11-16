// Name: core_waypoint.cpp_CWayPoint_dtor_FUN_00588480
// Address: 00588480
// Address Range: [[00588480, 005884cd]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_dtor_FUN_00588480(CWayPoint *this_ptr,uint flags)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_dtor_FUN_00588480(CWayPoint *this_ptr,uint flags)

{
  CWayPoint *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CWayPointTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CWayPoint *)core_trigger_cpp_CTrigger_dtor_FUN_00577840(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
