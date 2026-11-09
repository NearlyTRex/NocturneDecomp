// Name: core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
// Address: 005232d0
// Address Range: [[005232d0, 00523307]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index,int part_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index,int part_index)

{
  core_morph_cpp_CMorphModel_animateFromKeyframedModel_FUN_005226a0
            ((CMorphModel *)(this_ptr + model_index * 0x608),part_index,model_ptr,frame_index);
  return;
}
