// Name: core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040
// Address: 00453040
// Address Range: [[00453040, 0045307e]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance,int render_flags)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance,int render_flags)

{
  if (this_ptr->poly_count < 1) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004530c0(this_ptr,frame_index,instance)
  ;
  core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00453170(this_ptr,instance,render_flags);
  return;
}
