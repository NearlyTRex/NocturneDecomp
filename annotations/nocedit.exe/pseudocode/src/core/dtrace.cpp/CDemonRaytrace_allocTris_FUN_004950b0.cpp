// Name: core_dtrace.cpp_CDemonRaytrace_allocTris_FUN_004950b0
// Address: 004950b0
// Address Range: [[004950b0, 004950f7]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_allocTris_FUN_004950b0(CDemonRaytrace * this_ptr)
// Cross-references:
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579aaa [UNCONDITIONAL_CALL]
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocTris_FUN_004950b0(CDemonRaytrace *this_ptr)

{
  this_ptr->triangle_count = 200000;
  core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00494600(this_ptr);
  this_ptr->triangle_count = 0;
  (this_ptr->bbox_min).x = 99999.9;
  (this_ptr->bbox_min).y = 99999.9;
  (this_ptr->bbox_min).z = 99999.9;
  (this_ptr->bbox_max).x = -99999.9;
  (this_ptr->bbox_max).y = -99999.9;
  (this_ptr->bbox_max).z = -99999.9;
  return;
}


// Assembly code:
// 004950b0: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_allocTris_FUN_004950b0
// 004950b1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004950b5: PUSH EBX
// 004950b6: MOV dword ptr [EBX + 0x4],0x30d40
// 004950bd: CALL core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600
//   XREF to: 00494600 (UNCONDITIONAL_CALL)
// 004950c2: MOV dword ptr [EBX + 0x4],0x0
// 004950c9: MOV dword ptr [EBX + 0x10],0x47c34ff3
// 004950d0: MOV dword ptr [EBX + 0x14],0x47c34ff3
// 004950d7: MOV dword ptr [EBX + 0x18],0x47c34ff3
// 004950de: MOV dword ptr [EBX + 0x1c],0xc7c34ff3
// 004950e5: MOV dword ptr [EBX + 0x20],0xc7c34ff3
// 004950ec: ADD ESP,0x4
// 004950ef: MOV dword ptr [EBX + 0x24],0xc7c34ff3
// 004950f6: POP EBX
// 004950f7: RET
