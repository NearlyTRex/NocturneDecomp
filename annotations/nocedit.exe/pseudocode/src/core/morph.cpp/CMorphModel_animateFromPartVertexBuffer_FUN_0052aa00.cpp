// Name: core_morph.cpp_CMorphModel_animateFromPartVertexBuffer_FUN_0052aa00
// Address: 0052aa00
// Address Range: [[0052aa00, 0052aa27]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_animateFromPartVertexBuffer_FUN_0052aa00(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_animateFromPartVertexBuffer_FUN_0052aa00(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count)

{
  core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_0052a920
            (this_ptr,part_index,vertex_buffer,0,this_ptr->parts[part_index].vertex_count);
  return;
}
