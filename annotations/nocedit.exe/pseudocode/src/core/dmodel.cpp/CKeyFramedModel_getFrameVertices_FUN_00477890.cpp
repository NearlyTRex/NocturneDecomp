// Name: core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
// Address: 00477890
// Address Range: [[00477890, 004778ce]]
// Convention: __cdecl
// Signature: CVector3i * __cdecl core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(CKeyFramedModel *this_ptr,int frame_index)

#include "nocturne.h"

CVector3i * __cdecl core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(CKeyFramedModel *this_ptr,int frame_index)

{
  if (this_ptr->frame_count <= frame_index) {
    frame_index = this_ptr->frame_count + -1;
  }
  if (frame_index < 0) {
    frame_index = 0;
  }
  return this_ptr->vertex_list + this_ptr->vertex_count * frame_index;
}
