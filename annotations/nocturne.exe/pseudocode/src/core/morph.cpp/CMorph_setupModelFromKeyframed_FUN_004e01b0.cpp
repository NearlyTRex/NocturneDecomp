// Name: core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0
// Address: 004e01b0
// Address Range: [[004e01b0, 004e01e9]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)

{
  core_morph_cpp_CMorphModel_free_FUN_004df290(this_ptr->models + model_index);
  core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610
            (this_ptr->models + model_index,model_ptr,frame_index);
  return;
}
