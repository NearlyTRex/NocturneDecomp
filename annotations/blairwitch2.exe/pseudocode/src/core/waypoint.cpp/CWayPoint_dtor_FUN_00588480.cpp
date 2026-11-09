// Name: core_waypoint.cpp_CWayPoint_dtor_FUN_00588480
// Address: 00588480
// Address Range: [[00588480, 005884cd]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_dtor_FUN_00588480(CWayPoint *this_ptr,uint flags)

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_dtor_FUN_00588480(CWayPoint *this_ptr,uint flags)

{
  CWayPoint *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CWayPointTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CWayPoint *)core_trigger_cpp_CTrigger_dtor_FUN_00577840((CTrigger *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
