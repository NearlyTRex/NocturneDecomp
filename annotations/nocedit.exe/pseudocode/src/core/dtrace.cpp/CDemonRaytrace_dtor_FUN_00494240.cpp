// Name: core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00494240
// Address: 00494240
// Address Range: [[00494240, 00494263]]
// Convention: __cdecl
// Signature: CDemonRaytrace * core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00494240(CDemonRaytrace * this_ptr)
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0
//   core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400
//   core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690

#include "nocturne.h"

CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_dtor_FUN_00494240(CDemonRaytrace *this_ptr)

{
  core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(this_ptr);
  core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00494690(this_ptr);
  core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400(this_ptr);
  return this_ptr;
}


// Assembly code:
// 00494240: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00494240
// 00494241: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00494245: PUSH EBX
// 00494246: CALL core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0
//   XREF to: 004942d0 (UNCONDITIONAL_CALL)
// 0049424b: ADD ESP,0x4
// 0049424e: PUSH EBX
// 0049424f: CALL core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
//   XREF to: 00494690 (UNCONDITIONAL_CALL)
// 00494254: ADD ESP,0x4
// 00494257: PUSH EBX
// 00494258: CALL core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400
//   XREF to: 00494400 (UNCONDITIONAL_CALL)
// 0049425d: ADD ESP,0x4
// 00494260: MOV EAX,EBX
// 00494262: POP EBX
// 00494263: RET
