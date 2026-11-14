// Name: core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
// Address: 00523210
// Address Range: [[00523210, 00523240]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)

{
  core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005224f0
            (this_ptr->models + model_index,model_ptr,frame_index);
  return;
}
