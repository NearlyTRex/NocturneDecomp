// Name: core_boxactor.cpp_FUN_00422a20
// Address: 00422a20
// Address Range: [[00422a20, 00422a47]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422a20()
// Function calls:
//   core_boxactor.cpp_FUN_00421830
//   core_boxactor.cpp_FUN_00422d60
//   core_dlight.cpp_CDemonLight_init_FUN_004727c0

#include "nocturne.h"

void core_boxactor_cpp_FUN_00422a20(void)

{
  int in_stack_00000004;
  
  core_boxactor_cpp_FUN_00422d60();
  core_boxactor_cpp_FUN_00421830();
  core_dlight_cpp_CDemonLight_init_FUN_004727c0((CDemonLight *)(in_stack_00000004 + 0x670));
  return;
}


// Assembly code:
// 00422a20: PUSH EBX
//   Label: core_boxactor.cpp_FUN_00422a20
// 00422a21: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00422a25: PUSH EBX
// 00422a26: CALL core_boxactor.cpp_FUN_00422d60
//   XREF to: 00422d60 (UNCONDITIONAL_CALL)
// 00422a2b: ADD ESP,0x4
// 00422a2e: PUSH EBX
// 00422a2f: CALL core_boxactor.cpp_FUN_00421830
//   XREF to: 00421830 (UNCONDITIONAL_CALL)
// 00422a34: ADD ESP,0x4
// 00422a37: LEA EAX,[EBX + 0x670]
// 00422a3d: PUSH EAX
// 00422a3e: CALL core_dlight.cpp_CDemonLight_init_FUN_004727c0
//   XREF to: 004727c0 (UNCONDITIONAL_CALL)
// 00422a43: ADD ESP,0x4
// 00422a46: POP EBX
// 00422a47: RET
