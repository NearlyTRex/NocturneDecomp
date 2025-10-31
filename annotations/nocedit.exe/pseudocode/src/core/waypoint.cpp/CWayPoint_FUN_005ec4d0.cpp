// Name: core_waypoint.cpp_CWayPoint_FUN_005ec4d0
// Address: 005ec4d0
// Address Range: [[005ec4d0, 005ec4e2]]
// Convention: __cdecl
// Signature: void core_waypoint.cpp_CWayPoint_FUN_005ec4d0(CWayPoint * this_ptr)
// Function calls:
//   core_trigger.cpp_CTrigger_FUN_005e0f70

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec4d0(CWayPoint *this_ptr)

{
  core_trigger_cpp_CTrigger_FUN_005e0f70(&this_ptr->base_trigger);
  return;
}


// Assembly code:
// 005ec4d0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_waypoint.cpp_CWayPoint_FUN_005ec4d0
//   XREF to: Stack[0x8] (READ)
// 005ec4d4: PUSH EDX
// 005ec4d5: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ec4d9: PUSH ECX
// 005ec4da: CALL core_trigger.cpp_CTrigger_FUN_005e0f70
//   XREF to: 005e0f70 (UNCONDITIONAL_CALL)
// 005ec4df: ADD ESP,0x8
// 005ec4e2: RET
