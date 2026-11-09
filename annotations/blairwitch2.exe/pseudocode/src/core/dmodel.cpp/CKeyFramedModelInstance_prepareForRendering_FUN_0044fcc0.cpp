// Name: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
// Address: 0044fcc0
// Address Range: [[0044fcc0, 0044fcf4]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags)

{
  CKeyFramedModelInstance *this_ptr_00;
  CKeyFramedModel *this_ptr_01;
  float10 fVar1;
  int frame_index;
  
  fVar1 = (float10)animation_frame;
  this_ptr_00 = (CKeyFramedModelInstance *)round();
  frame_index = (int)ROUND(fVar1);
  this_ptr_01 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(this_ptr_00);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0
            (this_ptr_01,frame_index,this_ptr_00,render_flags);
  return;
}
