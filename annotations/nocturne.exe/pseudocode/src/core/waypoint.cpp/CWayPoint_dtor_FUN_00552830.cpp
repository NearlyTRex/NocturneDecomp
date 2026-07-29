// Name: core_waypoint.cpp_CWayPoint_dtor_FUN_00552830
// Address: 00552830
// Address Range: [[00552830, 0055287d]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_dtor_FUN_00552830(CWayPoint *this_ptr,uint flags)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_dtor_FUN_00552830(CWayPoint *this_ptr,uint flags)

{
  CWayPoint *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CWayPointTypeInfo_005a4110);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CWayPoint *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
