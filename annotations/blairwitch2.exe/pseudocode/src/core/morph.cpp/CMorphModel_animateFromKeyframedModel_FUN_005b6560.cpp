// Name: core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_005b6560
// Address: 005b6560
// Address Range: [[005b6560, 005b6592]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_animateFromKeyframedModel_FUN_005b6560(CMorphModel *this_ptr,int part_index,CKeyFramedModel *model_ptr,int frame_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_animateFromKeyframedModel_FUN_005b6560(CMorphModel *this_ptr,int part_index,CKeyFramedModel *model_ptr,int frame_index)

{
  CVector3i *vertex_buffer;
  int start_offset;
  int vertex_count;
  
  vertex_count = model_ptr->vertex_count;
  start_offset = 0;
  vertex_buffer =
       core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0(model_ptr,frame_index);
  core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400
            (this_ptr,part_index,vertex_buffer,start_offset,vertex_count);
  return;
}
