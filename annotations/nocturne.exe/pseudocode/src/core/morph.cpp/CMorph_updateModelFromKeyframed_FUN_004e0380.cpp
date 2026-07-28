// Name: core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
// Address: 004e0380
// Address Range: [[004e0380, 004e03b7]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index,int part_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_004e0380(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index,int part_index)

{
  core_morph_cpp_CMorphModel_animateFromKeyframedModel_FUN_004df7c0
            (this_ptr->models + model_index,part_index,model_ptr,frame_index);
  return;
}
