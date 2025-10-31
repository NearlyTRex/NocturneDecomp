// Name: core_dfilter.cpp_CDemonFilter_dtor_FUN_00470240
// Address: 00470240
// Address Range: [[00470240, 00470251]]
// Convention: __cdecl
// Signature: CDemonFilter * core_dfilter.cpp_CDemonFilter_dtor_FUN_00470240(CDemonFilter * this_ptr)
// Cross-references:
//   core_dfilter.cpp_CFilterCache_free_FUN_00470000 (00470000) at 00470049 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0

#include "nocturne.h"

CDemonFilter * __cdecl core_dfilter_cpp_CDemonFilter_dtor_FUN_00470240(CDemonFilter *this_ptr)

{
  core_dfilter_cpp_CDemonFilter_freeMemory_FUN_004702c0(this_ptr);
  return this_ptr;
}


// Assembly code:
// 00470240: PUSH EBX
//   Label: core_dfilter.cpp_CDemonFilter_dtor_FUN_00470240
// 00470241: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00470245: PUSH EBX
// 00470246: CALL core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0
//   XREF to: 004702c0 (UNCONDITIONAL_CALL)
// 0047024b: ADD ESP,0x4
// 0047024e: MOV EAX,EBX
// 00470250: POP EBX
// 00470251: RET
