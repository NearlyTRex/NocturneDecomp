// Name: core_morph.cpp_CMorphModel_animateFromPartVertexBuffer_FUN_004df740
// Address: 004df740
// Address Range: [[004df740, 004df767]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_animateFromPartVertexBuffer_FUN_004df740(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_animateFromPartVertexBuffer_FUN_004df740(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer)

{
  core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660
            (this_ptr,part_index,vertex_buffer,0,this_ptr->parts[part_index].vertex_count);
  return;
}
