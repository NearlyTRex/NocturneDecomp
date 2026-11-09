// Name: core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_00523100
// Address: 00523100
// Address Range: [[00523100, 00523139]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_00523100(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_00523100(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)

{
  core_morph_cpp_CMorphModel_free_FUN_00522170((CMorphModel *)(this_ptr + model_index * 0x608));
  core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005224f0
            ((CMorphModel *)(this_ptr + model_index * 0x608),model_ptr,frame_index);
  return;
}
