// Name: core_teleport.cpp_CTeleportDest_FUN_005da970
// Address: 005da970
// Address Range: [[005da970, 005da99e]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleportDest_FUN_005da970(CTeleportDest * this_ptr)
// Globals:
//   TerminatedCString s_Show_list_of_teleporters_00654c87
//   TerminatedCString s_T_00654cc0
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleportDest_FUN_005da970(CTeleportDest *this_ptr)

{
  int *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base_actor,in_stack_00000008);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
            (in_stack_00000008,"T","Show list of teleporters which go to this teleport dest.");
  return;
}


// Assembly code:
// 005da970: PUSH EBX
//   Label: core_teleport.cpp_CTeleportDest_FUN_005da970
// 005da971: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005da975: PUSH EBX
// 005da976: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005da97a: PUSH EDX
// 005da97b: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 005da980: ADD ESP,0x8
// 005da983: PUSH 0x654c87
//   XREF to: 00654c87 (DATA)
// 005da988: MOV ECX,dword ptr [EBX]
// 005da98a: PUSH 0x654cc0
//   XREF to: 00654cc0 (DATA)
// 005da98f: ADD ECX,0xb
// 005da992: PUSH EBX
// 005da993: MOV dword ptr [EBX],ECX
// 005da995: CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
//   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)
// 005da99a: ADD ESP,0xc
// 005da99d: POP EBX
// 005da99e: RET
