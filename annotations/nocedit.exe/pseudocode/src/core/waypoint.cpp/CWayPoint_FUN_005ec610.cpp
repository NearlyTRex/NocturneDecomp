// Name: core_waypoint.cpp_CWayPoint_FUN_005ec610
// Address: 005ec610
// Address Range: [[005ec610, 005ec639]]
// Convention: __cdecl
// Signature: void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec610(CWayPoint *this_ptr)

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec610(CWayPoint *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000008;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000008,g_CWayPointClassInfo.name_hash);
  if (pCVar1 == (CDemonActor *)0x0) {
    return;
  }
  core_waypoint_cpp_CallWayPoint_removeAdj_FUN_005ec640();
  return;
}
