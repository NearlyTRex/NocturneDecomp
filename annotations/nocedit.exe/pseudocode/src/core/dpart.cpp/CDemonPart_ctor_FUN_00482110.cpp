// Name: core_dpart.cpp_CDemonPart_ctor_FUN_00482110
// Address: 00482110
// Address Range: [[00482110, 00482152]]
// Convention: __cdecl
// Signature: CDemonPart * core_dpart.cpp_CDemonPart_ctor_FUN_00482110(CDemonPart * this_ptr)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494bea [UNCONDITIONAL_CALL]

#include "nocturne.h"

CDemonPart * __cdecl core_dpart_cpp_CDemonPart_ctor_FUN_00482110(CDemonPart *this_ptr)

{
  this_ptr->vertex_positions = (CVector3i *)0x0;
  this_ptr->face_data = (SSurfacePlane *)0x0;
  this_ptr->vertex_normals = (CVector3i *)0x0;
  this_ptr->vertex_group_size = 0;
  this_ptr->vertex_count = 0;
  this_ptr->face_count = 0;
  this_ptr->mystery_array_size = 0;
  this_ptr->current_vertex_group = 0;
  this_ptr->format[0] = '\0';
  return this_ptr;
}


// Assembly code:
// 00482110: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dpart.cpp_CDemonPart_ctor_FUN_00482110
//   XREF to: Stack[0x4] (READ)
// 00482114: MOV dword ptr [EAX + 0x2c],0x0
// 0048211b: MOV dword ptr [EAX + 0x34],0x0
// 00482122: MOV dword ptr [EAX + 0x30],0x0
// 00482129: MOV dword ptr [EAX + 0x28],0x0
// 00482130: MOV dword ptr [EAX + 0x20],0x0
// 00482137: MOV dword ptr [EAX + 0x24],0x0
// 0048213e: MOV dword ptr [EAX + 0x38],0x0
// 00482145: MOV dword ptr [EAX + 0x384],0x0
// 0048214f: MOV byte ptr [EAX],0x0
// 00482152: RET
