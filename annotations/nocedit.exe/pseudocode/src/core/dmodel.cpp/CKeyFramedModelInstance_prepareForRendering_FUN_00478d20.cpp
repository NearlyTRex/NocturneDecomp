// Name: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
// Address: 00478d20
// Address Range: [[00478d20, 00478d54]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags)

{
  CKeyFramedModel *this_ptr_00;
  int frame_index;
  
  frame_index = (int)ROUND(ROUND(animation_frame));
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
            (this_ptr_00,frame_index,this_ptr,render_flags);
  return;
}
