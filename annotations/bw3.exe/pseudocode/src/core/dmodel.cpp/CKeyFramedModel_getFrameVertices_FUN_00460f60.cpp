// Name: core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00460f60
// Address: 00460f60
// Address Range: [[00460f60, 00460f9e]]
// Convention: __cdecl
// Signature: CVector3i * __cdecl core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00460f60(CKeyFramedModel *this_ptr,int frame_index)

#include "nocturne.h"

CVector3i * __cdecl core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00460f60(CKeyFramedModel *this_ptr,int frame_index)

{
  if (this_ptr->frame_count <= frame_index) {
    frame_index = this_ptr->frame_count + -1;
  }
  if (frame_index < 0) {
    frame_index = 0;
  }
  return this_ptr->vertex_list + this_ptr->vertex_count * frame_index;
}
