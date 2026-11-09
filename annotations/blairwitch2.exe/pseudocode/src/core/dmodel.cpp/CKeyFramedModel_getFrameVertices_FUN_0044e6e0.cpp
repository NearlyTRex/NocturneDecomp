// Name: core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0
// Address: 0044e6e0
// Address Range: [[0044e6e0, 0044e71e]]
// Convention: __cdecl
// Signature: CVector3i * __cdecl core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0(CKeyFramedModel *this_ptr,int frame_index)

#include "nocturne.h"

CVector3i * __cdecl core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0(CKeyFramedModel *this_ptr,int frame_index)

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
