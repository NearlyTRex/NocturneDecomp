// Name: core_drip.cpp_FUN_0048ea30
// Address: 0048ea30
// Address Range: [[0048ea30, 0048ea5c]]
// Convention: unknown
// Signature: undefined core_drip.cpp_FUN_0048ea30()
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040

#include "nocturne.h"

/* Signature: undefined1 actors_other_drip.cpp_FUN_0048ea30(undefined4 param_1) */

void core_drip_cpp_FUN_0048ea30(void)

{
  CVector3f *pCVar1;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = in_stack_00000004[2].orient_matrix.m + 1;
  if ((CLocation *)pCVar1 != &in_stack_00000004->location) {
    pCVar1->x = (in_stack_00000004->location).position.x;
    in_stack_00000004[2].orient_matrix.m[1].y = (in_stack_00000004->location).position.y;
    in_stack_00000004[2].orient_matrix.m[1].z = (in_stack_00000004->location).position.z;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  return;
}


// Assembly code:
// 0048ea30: MOV ECX,dword ptr [ESP + 0x4]
//   Label: core_drip.cpp_FUN_0048ea30
//   XREF to: Stack[0x4] (READ)
// 0048ea34: LEA EAX,[ECX + 0x2f8]
// 0048ea3a: LEA EDX,[ECX + 0x20]
// 0048ea3d: CMP EAX,EDX
// 0048ea3f: JZ 0x0048ea53
//   XREF to: 0048ea53 (CONDITIONAL_JUMP)
// 0048ea41: PUSH EBX
// 0048ea42: MOV EBX,dword ptr [EDX]
// 0048ea44: MOV dword ptr [EAX],EBX
// 0048ea46: MOV EBX,dword ptr [EDX + 0x4]
// 0048ea49: MOV dword ptr [EAX + 0x4],EBX
// 0048ea4c: MOV EBX,dword ptr [EDX + 0x8]
// 0048ea4f: MOV dword ptr [EAX + 0x8],EBX
// 0048ea52: POP EBX
// 0048ea53: PUSH ECX
//   Label: LAB_0048ea53
// 0048ea54: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 0048ea59: ADD ESP,0x4
// 0048ea5c: RET
