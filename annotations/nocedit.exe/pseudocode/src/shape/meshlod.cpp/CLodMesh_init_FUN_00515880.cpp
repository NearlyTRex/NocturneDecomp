// Name: shape_meshlod.cpp_CLodMesh_init_FUN_00515880
// Address: 00515880
// Address Range: [[00515880, 00515944]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_init_FUN_00515880(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_copy_FUN_00515860 (00515860) at 00515866 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840 (00515840) at 00515846 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_free_FUN_00515970 (00515970) at 00515aa8 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_init_FUN_00515880(CLodMesh *this_ptr)

{
  this_ptr->vertex_count = 0;
  this_ptr->max_vertex_count = 0;
  this_ptr->vertex_data = (SLodVert *)0x0;
  this_ptr->tri_count = 0;
  this_ptr->max_tri_count = 0;
  this_ptr->triangle_data = (SLodTriangle *)0x0;
  this_ptr->next_lod = (CLodMesh *)0x0;
  this_ptr->sample_point_count = 0;
  this_ptr->sample_points_ptr = (void *)0x0;
  this_ptr->edge_count = 0;
  this_ptr->edges_ptr = (SLodEdge *)0x0;
  this_ptr->lod_level_count = 0;
  this_ptr->lod_levels_ptr = (void *)0x0;
  this_ptr->field6_0x18 = 0;
  crt_memory_c_memset_FUN_005fde40(this_ptr->field9_0x24,0,0x10);
  this_ptr->field7_0x1c = 0;
  this_ptr->field8_0x20 = 0;
  this_ptr->submesh_count = 0;
  this_ptr->submesh_data = (void *)0x0;
  this_ptr->field18_0x54 = (void *)0x0;
  this_ptr->field19_0x58 = (void *)0x0;
  this_ptr->scale_factor = 1.0;
  (this_ptr->center_offset).z = 0.0;
  (this_ptr->center_offset).y = (this_ptr->center_offset).z;
  (this_ptr->center_offset).x = (this_ptr->center_offset).y;
  this_ptr->field11_0x38 = (FILE *)0x0;
  return;
}


// Assembly code:
// 00515880: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_init_FUN_00515880
// 00515881: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00515885: MOV dword ptr [EBX],0x0
// 0051588b: MOV dword ptr [EBX + 0x3c],0x0
// 00515892: MOV dword ptr [EBX + 0x4],0x0
// 00515899: MOV dword ptr [EBX + 0x8],0x0
// 005158a0: MOV dword ptr [EBX + 0x40],0x0
// 005158a7: MOV dword ptr [EBX + 0xc],0x0
// 005158ae: MOV dword ptr [EBX + 0x34],0x0
// 005158b5: MOV dword ptr [EBX + 0x5c],0x0
// 005158bc: MOV dword ptr [EBX + 0x60],0x0
// 005158c3: MOV dword ptr [EBX + 0x44],0x0
// 005158ca: MOV dword ptr [EBX + 0x48],0x0
// 005158d1: PUSH 0x10
// 005158d3: MOV dword ptr [EBX + 0x4c],0x0
// 005158da: PUSH 0x0
// 005158dc: LEA EAX,[EBX + 0x24]
// 005158df: MOV dword ptr [EBX + 0x50],0x0
// 005158e6: PUSH EAX
// 005158e7: MOV dword ptr [EBX + 0x18],0x0
// 005158ee: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005158f3: MOV dword ptr [EBX + 0x1c],0x0
// 005158fa: MOV dword ptr [EBX + 0x20],0x0
// 00515901: MOV dword ptr [EBX + 0x10],0x0
// 00515908: MOV dword ptr [EBX + 0x14],0x0
// 0051590f: MOV dword ptr [EBX + 0x54],0x0
// 00515916: MOV dword ptr [EBX + 0x58],0x0
// 0051591d: LEA EAX,[EBX + 0x64]
// 00515920: MOV dword ptr [EBX + 0x70],0x3f800000
// 00515927: MOV dword ptr [EAX + 0x8],0x0
// 0051592e: ADD ESP,0xc
// 00515931: MOV EDX,dword ptr [EAX + 0x8]
// 00515934: MOV dword ptr [EAX + 0x4],EDX
// 00515937: MOV EDX,dword ptr [EAX + 0x4]
// 0051593a: MOV dword ptr [EAX],EDX
// 0051593c: MOV dword ptr [EBX + 0x38],0x0
// 00515943: POP EBX
// 00515944: RET
