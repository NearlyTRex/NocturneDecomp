// Name: core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_0052b470
// Address: 0052b470
// Address Range: [[0052b470, 0052b4a9]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_0052b470(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_0052b470(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)

{
  core_morph_cpp_CMorphModel_free_FUN_0052a510(this_ptr->models + model_index);
  core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_0052a8d0
            (this_ptr->models + model_index,model_ptr,frame_index);
  return;
}
