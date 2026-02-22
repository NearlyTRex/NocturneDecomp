// Name: core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
// Address: 00477850
// Address Range: [[00477850, 0047788e]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance,int render_flags)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance,int render_flags)

{
  if (this_ptr->poly_count < 1) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0(this_ptr,frame_index,instance)
  ;
  core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00477980(this_ptr,instance,render_flags);
  return;
}
