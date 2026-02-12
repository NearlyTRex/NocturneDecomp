// Name: core_morph.cpp_CMorphModel_FUN_0052a8d0
// Address: 0052a8d0
// Address Range: [[0052a8d0, 0052a918]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_FUN_0052a8d0 (CMorphModel *this_ptr,CKeyFramedModel *model_ptr,int frame_index)

#include "nocturne.h"

void __cdecl
core_morph_cpp_CMorphModel_FUN_0052a8d0
          (CMorphModel *this_ptr,CKeyFramedModel *model_ptr,int frame_index)

{
  core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(model_ptr,frame_index);
  core_morph_cpp_CMorphModel_addPart_FUN_0052a580(this_ptr);
  return;
}
