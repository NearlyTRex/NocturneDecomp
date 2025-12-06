// Name: core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
// Address: 00477850
// Address Range: [[00477850, 0047788e]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel * this_ptr, CKeyFramedModelInstance * instance, int frame_index, int render_flags)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
          (CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int frame_index,
          int render_flags)

{
  CKeyFramedModelInstance *unaff_EDI;
  int in_stack_00000014;
  
  if (this_ptr->poly_count < 1) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0(this_ptr,instance,frame_index)
  ;
  core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00477980
            (this_ptr,render_flags,in_stack_00000014,unaff_EDI);
  return;
}
