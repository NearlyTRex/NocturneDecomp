// Name: core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_0052b580
// Address: 0052b580
// Address Range: [[0052b580, 0052b5b0]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_0052b580(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_0052b580(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)

{
  core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_0052a8d0
            (this_ptr->models + model_index,model_ptr,frame_index);
  return;
}
