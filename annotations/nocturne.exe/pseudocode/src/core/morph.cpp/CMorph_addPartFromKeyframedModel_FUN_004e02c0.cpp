// Name: core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
// Address: 004e02c0
// Address Range: [[004e02c0, 004e02f0]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)

{
  core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610
            (this_ptr->models + model_index,model_ptr,frame_index);
  return;
}
