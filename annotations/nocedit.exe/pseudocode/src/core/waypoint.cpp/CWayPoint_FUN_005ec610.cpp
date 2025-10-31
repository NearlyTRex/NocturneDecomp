// Name: core_waypoint.cpp_CWayPoint_FUN_005ec610
// Address: 005ec610
// Address Range: [[005ec610, 005ec639]]
// Convention: __cdecl
// Signature: void core_waypoint.cpp_CWayPoint_FUN_005ec610(CWayPoint * this_ptr)
// Globals:
//   undefined4 g_CWayPointClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_waypoint.cpp_CallWayPoint_removeAdj_FUN_005ec640

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


// Assembly code:
// 005ec610: MOV EDX,dword ptr [0x03f9591c]
//   Label: core_waypoint.cpp_CWayPoint_FUN_005ec610
//   XREF to: 03f9591c (READ)
// 005ec616: PUSH EDX
// 005ec617: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005ec61b: PUSH ECX
// 005ec61c: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005ec621: ADD ESP,0x8
// 005ec624: TEST EAX,EAX
// 005ec626: JNZ 0x005ec629
//   XREF to: 005ec629 (CONDITIONAL_JUMP)
// 005ec628: RET
// 005ec629: PUSH EBX
//   Label: LAB_005ec629
// 005ec62a: PUSH EAX
// 005ec62b: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ec62f: PUSH EBX
// 005ec630: CALL core_waypoint.cpp_CallWayPoint_removeAdj_FUN_005ec640
//   XREF to: 005ec640 (UNCONDITIONAL_CALL)
// 005ec635: ADD ESP,0x8
// 005ec638: POP EBX
// 005ec639: RET
