// Name: core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270
// Address: 00467270
// Address Range: [[00467270, 004672ae]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00467270(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance,int render_flags)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00467270(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance,int render_flags)

{
  if (*(int *)&this_ptr->field_0x110 < 1) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004672f0(this_ptr,frame_index,instance)
  ;
  core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_004673a0(this_ptr,instance,render_flags);
  return;
}
