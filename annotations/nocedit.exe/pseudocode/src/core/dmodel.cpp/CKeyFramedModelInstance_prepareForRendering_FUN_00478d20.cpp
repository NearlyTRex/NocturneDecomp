// Name: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
// Address: 00478d20
// Address Range: [[00478d20, 00478d54]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
          (CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags)

{
  CKeyFramedModelInstance *this_ptr_00;
  CKeyFramedModel *this_ptr_01;
  float10 fVar1;
  double dVar2;
  int render_flags_00;
  int in_stack_fffffffc;
  
  fVar1 = (float10)animation_frame;
  dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(render_flags,this_ptr));
  this_ptr_00 = SUB84 /* extract 2-byte value */(dVar2,0);
  render_flags_00 = (int)ROUND(fVar1);
  this_ptr_01 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
            (this_ptr_01,this_ptr_00,in_stack_fffffffc,render_flags_00);
  return;
}
