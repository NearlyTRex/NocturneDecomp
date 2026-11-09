// Name: core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00460f60
// Address: 00460f60
// Address Range: [[00460f60, 00460f9e]]
// Convention: __cdecl
// Signature: CVector3i * __cdecl core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00460f60(CKeyFramedModel *this_ptr,int frame_index)

#include "nocturne.h"

CVector3i * __cdecl core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00460f60(CKeyFramedModel *this_ptr,int frame_index)

{
  if (*(int *)&this_ptr->field_0x100 <= frame_index) {
    frame_index = *(int *)&this_ptr->field_0x100 + -1;
  }
  if (frame_index < 0) {
    frame_index = 0;
  }
  return (CVector3i *)
         (*(int *)&this_ptr->field_0x10c + *(int *)&this_ptr->field_0x104 * frame_index * 0xc);
}
