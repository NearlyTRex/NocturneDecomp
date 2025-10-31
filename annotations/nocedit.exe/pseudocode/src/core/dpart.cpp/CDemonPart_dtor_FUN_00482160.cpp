// Name: core_dpart.cpp_CDemonPart_dtor_FUN_00482160
// Address: 00482160
// Address Range: [[00482160, 00482171]]
// Convention: __cdecl
// Signature: CDemonPart * core_dpart.cpp_CDemonPart_dtor_FUN_00482160(CDemonPart * this_ptr)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0 (004942d0) at 00494341 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dpart.cpp_CDemonPart_free_FUN_004822b0

#include "nocturne.h"

CDemonPart * __cdecl core_dpart_cpp_CDemonPart_dtor_FUN_00482160(CDemonPart *this_ptr)

{
  core_dpart_cpp_CDemonPart_free_FUN_004822b0(this_ptr);
  return this_ptr;
}


// Assembly code:
// 00482160: PUSH EBX
//   Label: core_dpart.cpp_CDemonPart_dtor_FUN_00482160
// 00482161: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00482165: PUSH EBX
// 00482166: CALL core_dpart.cpp_CDemonPart_free_FUN_004822b0
//   XREF to: 004822b0 (UNCONDITIONAL_CALL)
// 0048216b: ADD ESP,0x4
// 0048216e: MOV EAX,EBX
// 00482170: POP EBX
// 00482171: RET
