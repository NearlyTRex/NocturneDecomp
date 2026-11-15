// Name: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
// Address: 00462540
// Address Range: [[00462540, 00462574]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags)

{
  CKeyFramedModel *this_ptr_00;
  double dVar1;
  int frame_index;
  int render_flags_00;
  
  render_flags_00 = 0x462555;
  dVar1 = round((double)animation_frame);
  frame_index = (int)ROUND(dVar1);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(this_ptr);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00460f20
            (this_ptr_00,frame_index,this_ptr,render_flags_00);
  return;
}
