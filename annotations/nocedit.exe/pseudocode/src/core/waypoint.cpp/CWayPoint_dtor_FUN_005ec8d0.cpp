// Name: core_waypoint.cpp_CWayPoint_dtor_FUN_005ec8d0
// Address: 005ec8d0
// Address Range: [[005ec8d0, 005ec91d]]
// Convention: __cdecl
// Signature: CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_dtor_FUN_005ec8d0(CWayPoint *this_ptr,uint d1,uint d2)

#include "nocturne.h"

CWayPoint * __cdecl
core_waypoint_cpp_CWayPoint_dtor_FUN_005ec8d0(CWayPoint *this_ptr,uint d1,uint d2)

{
  CWayPoint *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CWayPointTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CWayPoint *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)this_ptr,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
