// Name: core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_005b6fc0
// Address: 005b6fc0
// Address Range: [[005b6fc0, 005b6ff9]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_005b6fc0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_005b6fc0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)

{
  core_morph_cpp_CMorphModel_free_FUN_005b6030(this_ptr->models + model_index);
  core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005b63b0
            (this_ptr->models + model_index,model_ptr,frame_index);
  return;
}
