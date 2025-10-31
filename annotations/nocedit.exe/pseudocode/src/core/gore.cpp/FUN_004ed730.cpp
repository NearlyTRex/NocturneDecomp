// Name: core_gore.cpp_FUN_004ed730
// Address: 004ed730
// Address Range: [[004ed730, 004ed741]]
// Convention: __cdecl
// Signature: CGore * core_gore.cpp_FUN_004ed730(CGore * this_ptr)
// Cross-references:
//   core_gore.cpp_staticInit_FUN_004eb8c0 (004eb8c0) at 004eb8c5 [UNCONDITIONAL_CALL]
// Function calls:
//   core_gore.cpp_FUN_004ed760

#include "nocturne.h"

CGore * __cdecl core_gore_cpp_FUN_004ed730(CGore *this_ptr)

{
  core_gore_cpp_FUN_004ed760();
  return this_ptr;
}


// Assembly code:
// 004ed730: PUSH EBX
//   Label: core_gore.cpp_FUN_004ed730
// 004ed731: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004ed735: PUSH EBX
// 004ed736: CALL core_gore.cpp_FUN_004ed760
//   XREF to: 004ed760 (UNCONDITIONAL_CALL)
// 004ed73b: ADD ESP,0x4
// 004ed73e: MOV EAX,EBX
// 004ed740: POP EBX
// 004ed741: RET
