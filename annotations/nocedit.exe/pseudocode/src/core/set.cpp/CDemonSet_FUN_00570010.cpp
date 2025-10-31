// Name: core_set.cpp_CDemonSet_FUN_00570010
// Address: 00570010
// Address Range: [[00570010, 00570032]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570010(CDemonSet * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 (00570770) at 0057085d [UNCONDITIONAL_CALL]
// Function calls:
//   core_set.cpp_CDemonSet_FUN_00570040

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_00570010(CDemonSet *this_ptr)

{
  core_set_cpp_CDemonSet_FUN_00570040(this_ptr);
  return;
}


// Assembly code:
// 00570010: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_00570010
// 00570011: PUSH ESI
// 00570012: PUSH 0x48
// 00570014: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 00570018: PUSH EDX
// 00570019: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0057001d: PUSH ECX
// 0057001e: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00570022: PUSH EBX
// 00570023: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00570027: PUSH ESI
// 00570028: CALL core_set.cpp_CDemonSet_FUN_00570040
//   XREF to: 00570040 (UNCONDITIONAL_CALL)
// 0057002d: ADD ESP,0x14
// 00570030: POP ESI
// 00570031: POP EBX
// 00570032: RET
