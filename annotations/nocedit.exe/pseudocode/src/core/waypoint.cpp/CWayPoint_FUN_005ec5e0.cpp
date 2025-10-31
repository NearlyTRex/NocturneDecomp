// Name: core_waypoint.cpp_CWayPoint_FUN_005ec5e0
// Address: 005ec5e0
// Address Range: [[005ec5e0, 005ec604]]
// Convention: __cdecl
// Signature: void core_waypoint.cpp_CWayPoint_FUN_005ec5e0(CWayPoint * this_ptr)
// Function calls:
//   core_trigger.cpp_CTrigger_FUN_005e1180
//   core_waypoint.cpp_FUN_005ec4f0

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec5e0(CWayPoint *this_ptr)

{
  core_waypoint_cpp_FUN_005ec4f0();
  core_trigger_cpp_CTrigger_FUN_005e1180(&this_ptr->base_trigger);
  (*((this_ptr->base_trigger).base_actor.metadata.vtable)->setup)((CDemonActor *)this_ptr);
  return;
}


// Assembly code:
// 005ec5e0: PUSH EBX
//   Label: core_waypoint.cpp_CWayPoint_FUN_005ec5e0
// 005ec5e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ec5e5: PUSH EBX
// 005ec5e6: CALL core_waypoint.cpp_FUN_005ec4f0
//   XREF to: 005ec4f0 (UNCONDITIONAL_CALL)
// 005ec5eb: ADD ESP,0x4
// 005ec5ee: PUSH EBX
// 005ec5ef: CALL core_trigger.cpp_CTrigger_FUN_005e1180
//   XREF to: 005e1180 (UNCONDITIONAL_CALL)
// 005ec5f4: ADD ESP,0x4
// 005ec5f7: MOV EAX,dword ptr [EBX + 0x154]
// 005ec5fd: PUSH EBX
// 005ec5fe: CALL dword ptr [EAX]
// 005ec600: ADD ESP,0x4
// 005ec603: POP EBX
// 005ec604: RET
