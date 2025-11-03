// Name: core_waypoint.cpp_CWayPoint_FUN_005ec690
// Address: 005ec690
// Address Range: [[005ec690, 005ec6f7]]
// Convention: __cdecl
// Signature: void core_waypoint.cpp_CWayPoint_FUN_005ec690(CWayPoint * this_ptr)
// Globals:
//   TerminatedCString s_Prev_next_waypoint_on_tr_0065759d
//   TerminatedCString s_anon_006575ba
//   TerminatedCString s_Add_WayPoint_BEFORE_this_006575be
//   TerminatedCString s_CTRL_B_006575e1
//   TerminatedCString s_Add_WayPoint_AFTER_this__006575e8
//   TerminatedCString s_CTRL_A_0065760a
//   TerminatedCString s_Insert_WayPoint_into_tra_00657611
//   TerminatedCString s_CTRL_I_0065762d
// Function calls:
//   core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
//   core_trigger.cpp_CTrigger_FUN_005e1350

#include "nocturne.h"

void __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec690(CWayPoint *this_ptr)

{
  int *in_stack_00000008;
  
  core_trigger_cpp_CTrigger_FUN_005e1350(&this_ptr->base_trigger);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (in_stack_00000008,"</>","Prev/next waypoint on trail.");
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (in_stack_00000008,"CTRL+B","Add WayPoint BEFORE this waypoint.");
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (in_stack_00000008,"CTRL+A","Add WayPoint AFTER this waypoint.");
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (in_stack_00000008,"CTRL+I","Insert WayPoint into trail.");
  return;
}


// Assembly code:
// 005ec690: PUSH EBX
//   Label: core_waypoint.cpp_CWayPoint_FUN_005ec690
// 005ec691: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005ec695: PUSH EBX
// 005ec696: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ec69a: PUSH EDX
// 005ec69b: CALL core_trigger.cpp_CTrigger_FUN_005e1350
//   XREF to: 005e1350 (UNCONDITIONAL_CALL)
// 005ec6a0: ADD ESP,0x8
// 005ec6a3: PUSH 0x65759d
//   XREF to: 0065759d (DATA)
// 005ec6a8: MOV ECX,dword ptr [EBX]
// 005ec6aa: PUSH 0x6575ba
//   XREF to: 006575ba (DATA)
// 005ec6af: ADD ECX,0xb
// 005ec6b2: PUSH EBX
// 005ec6b3: MOV dword ptr [EBX],ECX
// 005ec6b5: CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
//   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)
// 005ec6ba: ADD ESP,0xc
// 005ec6bd: PUSH 0x6575be
//   XREF to: 006575be (DATA)
// 005ec6c2: PUSH 0x6575e1
//   XREF to: 006575e1 (DATA)
// 005ec6c7: PUSH EBX
// 005ec6c8: CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
//   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)
// 005ec6cd: ADD ESP,0xc
// 005ec6d0: PUSH 0x6575e8
//   XREF to: 006575e8 (DATA)
// 005ec6d5: PUSH 0x65760a
//   XREF to: 0065760a (DATA)
// 005ec6da: PUSH EBX
// 005ec6db: CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
//   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)
// 005ec6e0: ADD ESP,0xc
// 005ec6e3: PUSH 0x657611
//   XREF to: 00657611 (DATA)
// 005ec6e8: PUSH 0x65762d
//   XREF to: 0065762d (DATA)
// 005ec6ed: PUSH EBX
// 005ec6ee: CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
//   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)
// 005ec6f3: ADD ESP,0xc
// 005ec6f6: POP EBX
// 005ec6f7: RET
