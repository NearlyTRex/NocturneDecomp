// Name: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
// Address: 00478d20
// Address Range: [[00478d20, 00478d54]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags)

{
  CKeyFramedModel *this_ptr_00;
  double dVar1;
  CKeyFramedModelInstance *instance;
  int render_flags_00;
  
  render_flags_00 = 0x478d35;
  dVar1 = round((double)animation_frame);
  instance = (CKeyFramedModelInstance *)(int)ROUND(dVar1);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
            (this_ptr_00,instance,(int)this_ptr,render_flags_00);
  return;
}
