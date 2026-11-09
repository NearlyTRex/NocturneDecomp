// Name: core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0
// Address: 005b70d0
// Address Range: [[005b70d0, 005b7100]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)

{
  core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005b63b0
            ((CMorphModel *)(this_ptr + model_index * 0x608),model_ptr,frame_index);
  return;
}
