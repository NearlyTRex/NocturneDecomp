// Name: core_dfilter.cpp_CFilterFX_dtor_FUN_004706e0
// Address: 004706e0
// Address Range: [[004706e0, 004706f1]]
// Convention: __cdecl
// Signature: CFilterFx * core_dfilter.cpp_CFilterFX_dtor_FUN_004706e0(CFilterFx * this_ptr)
// Function calls:
//   core_dfilter.cpp_CFilterFX_free_FUN_00470700

#include "nocturne.h"

CFilterFx * __cdecl core_dfilter_cpp_CFilterFX_dtor_FUN_004706e0(CFilterFx *this_ptr)

{
  core_dfilter_cpp_CFilterFX_free_FUN_00470700(this_ptr);
  return this_ptr;
}


// Assembly code:
// 004706e0: PUSH EBX
//   Label: core_dfilter.cpp_CFilterFX_dtor_FUN_004706e0
// 004706e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004706e5: PUSH EBX
// 004706e6: CALL core_dfilter.cpp_CFilterFX_free_FUN_00470700
//   XREF to: 00470700 (UNCONDITIONAL_CALL)
// 004706eb: ADD ESP,0x4
// 004706ee: MOV EAX,EBX
// 004706f0: POP EBX
// 004706f1: RET
