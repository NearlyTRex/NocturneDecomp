// Name: core_set.cpp_CDemonSet_FUN_0056ffe0
// Address: 0056ffe0
// Address Range: [[0056ffe0, 00570002]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056ffe0(CDemonSet * this_ptr)
// Cross-references:
//   core_set.cpp_FUN_00570700 (00570700) at 00570763 [UNCONDITIONAL_CALL]
// Function calls:
//   core_set.cpp_CDemonSet_FUN_00570040

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056ffe0(CDemonSet *this_ptr)

{
  core_set_cpp_CDemonSet_FUN_00570040(this_ptr);
  return;
}


// Assembly code:
// 0056ffe0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056ffe0
// 0056ffe1: PUSH ESI
// 0056ffe2: PUSH 0x3c
// 0056ffe4: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 0056ffe8: PUSH EDX
// 0056ffe9: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0056ffed: PUSH ECX
// 0056ffee: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0056fff2: PUSH EBX
// 0056fff3: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0056fff7: PUSH ESI
// 0056fff8: CALL core_set.cpp_CDemonSet_FUN_00570040
//   XREF to: 00570040 (UNCONDITIONAL_CALL)
// 0056fffd: ADD ESP,0x14
// 00570000: POP ESI
// 00570001: POP EBX
// 00570002: RET
