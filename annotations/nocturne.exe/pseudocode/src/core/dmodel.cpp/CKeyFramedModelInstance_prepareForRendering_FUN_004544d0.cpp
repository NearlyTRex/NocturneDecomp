// Name: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
// Address: 004544d0
// Address Range: [[004544d0, 00454504]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags)

{
  CKeyFramedModel *this_ptr_00;
  double dVar1;
  int frame_index;
  int render_flags_00;
  
  render_flags_00 = 0x4544e5;
  dVar1 = round((double)animation_frame);
  frame_index = (int)ROUND(dVar1);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(this_ptr);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
            (this_ptr_00,frame_index,this_ptr,render_flags_00);
  return;
}
