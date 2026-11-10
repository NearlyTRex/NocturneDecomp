// Name: core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0
// Address: 0044e6a0
// Address Range: [[0044e6a0, 0044e6de]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance,int render_flags)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance,int render_flags)

{
  if (this_ptr->poly_count < 1) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_0044e720(this_ptr,frame_index,instance)
  ;
  core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_0044e7d0(this_ptr,instance,render_flags);
  return;
}
