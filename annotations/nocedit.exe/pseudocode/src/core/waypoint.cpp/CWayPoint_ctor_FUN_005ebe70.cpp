// Name: core_waypoint.cpp_CWayPoint_ctor_FUN_005ebe70
// Address: 005ebe70
// Address Range: [[005ebe70, 005ebeaf]]
// Convention: __cdecl
// Signature: CWayPoint * core_waypoint.cpp_CWayPoint_ctor_FUN_005ebe70(CWayPoint * this_ptr)
// Cross-references:
//   core_waypoint.cpp_FUN_005ebe30 (005ebe30) at 005ebe4a [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable g_CWayPointVTable
// Function calls:
//   core_trigger.cpp_CTrigger_ctor_FUN_005df840

#include "nocturne.h"

CWayPoint * __cdecl core_waypoint_cpp_CWayPoint_ctor_FUN_005ebe70(CWayPoint *this_ptr)

{
  CWayPoint *pCVar1;
  
  pCVar1 = (CWayPoint *)core_trigger_cpp_CTrigger_ctor_FUN_005df840(&this_ptr->base_trigger);
  (pCVar1->base_trigger).base_actor.vtable = &g_CWayPointVTable;
  (pCVar1->base_trigger).field1_0x158[8] = '\0';
  (pCVar1->base_trigger).field1_0x158[9] = '\0';
  (pCVar1->base_trigger).field1_0x158[10] = '\0';
  (pCVar1->base_trigger).field1_0x158[0xb] = '?';
  (pCVar1->base_trigger).field1_0x158[0xc] = '\0';
  (pCVar1->base_trigger).field1_0x158[0xd] = '\0';
  (pCVar1->base_trigger).field1_0x158[0xe] = -0x80;
  (pCVar1->base_trigger).field1_0x158[0xf] = '?';
  (pCVar1->base_trigger).field1_0x158[0x10] = '\0';
  (pCVar1->base_trigger).field1_0x158[0x11] = '\0';
  (pCVar1->base_trigger).field1_0x158[0x12] = '\0';
  (pCVar1->base_trigger).field1_0x158[0x13] = '?';
  pCVar1->num_adjacent_waypoints = 0;
  return pCVar1;
}


// Assembly code:
// 005ebe70: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_waypoint.cpp_CWayPoint_ctor_FUN_005ebe70
//   XREF to: Stack[0x4] (READ)
// 005ebe74: PUSH EDX
// 005ebe75: CALL core_trigger.cpp_CTrigger_ctor_FUN_005df840
//   XREF to: 005df840 (UNCONDITIONAL_CALL)
// 005ebe7a: MOV dword ptr [EAX + 0x154],0x665484
//   XREF to: 00665484 (DATA)
// 005ebe84: MOV dword ptr [EAX + 0x160],0x3f000000
// 005ebe8e: MOV dword ptr [EAX + 0x164],0x3f800000
// 005ebe98: MOV dword ptr [EAX + 0x168],0x3f000000
// 005ebea2: ADD ESP,0x4
// 005ebea5: MOV dword ptr [EAX + 0x370],0x0
// 005ebeaf: RET
