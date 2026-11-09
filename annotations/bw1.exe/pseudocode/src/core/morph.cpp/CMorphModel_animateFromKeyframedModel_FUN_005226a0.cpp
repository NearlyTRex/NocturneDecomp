// Name: core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_005226a0
// Address: 005226a0
// Address Range: [[005226a0, 005226d2]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_animateFromKeyframedModel_FUN_005226a0(CMorphModel *this_ptr,int part_index,CKeyFramedModel *model_ptr,int frame_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_animateFromKeyframedModel_FUN_005226a0(CMorphModel *this_ptr,int part_index,CKeyFramedModel *model_ptr,int frame_index)

{
  CVector3i *vertex_buffer;
  int start_offset;
  int vertex_count;
  
  vertex_count = *(int *)&model_ptr->field_0x104;
  start_offset = 0;
  vertex_buffer =
       core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0(model_ptr,frame_index);
  core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540
            (this_ptr,part_index,vertex_buffer,start_offset,vertex_count);
  return;
}
