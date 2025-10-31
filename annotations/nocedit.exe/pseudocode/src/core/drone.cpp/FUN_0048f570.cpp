// Name: core_drone.cpp_FUN_0048f570
// Address: 0048f570
// Address Range: [[0048f570, 0048f59b]]
// Convention: unknown
// Signature: undefined core_drone.cpp_FUN_0048f570()
// Function calls:
//   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_drone.cpp_FUN_0048f570(undefined4 param_1, undefined4 param_2)
    */

void core_drone_cpp_FUN_0048f570(void)

{
  CDemonActor *in_stack_00000004;
  FILE *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(in_stack_00000004,in_stack_00000008);
  core_skeledit_cpp_GetModelPtrOfFile_FUN_0058a260();
  return;
}


// Assembly code:
// 0048f570: PUSH EBX
//   Label: core_drone.cpp_FUN_0048f570
// 0048f571: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048f575: PUSH EDX
// 0048f576: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0048f57a: PUSH ECX
// 0048f57b: CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
//   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
// 0048f580: ADD ESP,0x8
// 0048f583: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0048f587: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0048f58b: PUSH EBX
// 0048f58c: ADD EAX,0x158
// 0048f591: PUSH EAX
// 0048f592: CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
//   XREF to: 0058a260 (UNCONDITIONAL_CALL)
// 0048f597: ADD ESP,0x8
// 0048f59a: POP EBX
// 0048f59b: RET
