// Name: core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190
// Address: 005b7190
// Address Range: [[005b7190, 005b71c7]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index,int part_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index,int part_index)

{
  core_morph_cpp_CMorphModel_animateFromKeyframedModel_FUN_005b6560
            (this_ptr->models + model_index,part_index,model_ptr,frame_index);
  return;
}
