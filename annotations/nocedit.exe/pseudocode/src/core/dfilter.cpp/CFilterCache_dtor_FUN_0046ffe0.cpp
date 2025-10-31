// Name: core_dfilter.cpp_CFilterCache_dtor_FUN_0046ffe0
// Address: 0046ffe0
// Address Range: [[0046ffe0, 0046fff1]]
// Convention: __cdecl
// Signature: CFilterCache * core_dfilter.cpp_CFilterCache_dtor_FUN_0046ffe0(CFilterCache * this_ptr)
// Function calls:
//   core_dfilter.cpp_CFilterCache_free_FUN_00470000

#include "nocturne.h"

CFilterCache * __cdecl core_dfilter_cpp_CFilterCache_dtor_FUN_0046ffe0(CFilterCache *this_ptr)

{
  core_dfilter_cpp_CFilterCache_free_FUN_00470000(this_ptr);
  return this_ptr;
}


// Assembly code:
// 0046ffe0: PUSH EBX
//   Label: core_dfilter.cpp_CFilterCache_dtor_FUN_0046ffe0
// 0046ffe1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0046ffe5: PUSH EBX
// 0046ffe6: CALL core_dfilter.cpp_CFilterCache_free_FUN_00470000
//   XREF to: 00470000 (UNCONDITIONAL_CALL)
// 0046ffeb: ADD ESP,0x4
// 0046ffee: MOV EAX,EBX
// 0046fff0: POP EBX
// 0046fff1: RET
