// Name: core_dfilter.cpp_CFilterCache_ctor_FUN_0046ffd0
// Address: 0046ffd0
// Address Range: [[0046ffd0, 0046ffda]]
// Convention: __cdecl
// Signature: CFilterCache * core_dfilter.cpp_CFilterCache_ctor_FUN_0046ffd0(CFilterCache * this_ptr)
// Cross-references:
//   core_dfilter.cpp_staticInit_FUN_0046ff50 (0046ff50) at 0046ff97 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CFilterCache * __cdecl core_dfilter_cpp_CFilterCache_ctor_FUN_0046ffd0(CFilterCache *this_ptr)

{
  this_ptr->filter_count = 0;
  return this_ptr;
}


// Assembly code:
// 0046ffd0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dfilter.cpp_CFilterCache_ctor_FUN_0046ffd0
//   XREF to: Stack[0x4] (READ)
// 0046ffd4: MOV dword ptr [EAX],0x0
// 0046ffda: RET
