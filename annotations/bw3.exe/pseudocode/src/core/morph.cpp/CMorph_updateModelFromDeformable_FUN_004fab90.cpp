// Name: core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90
// Address: 004fab90
// Address Range: [[004fab90, 004fabc0]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004fab90(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004fab90(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index)

{
  core_morph_cpp_CMorphModel_animateFromDeformableModel_FUN_004f9f50
            ((CMorphModel *)(this_ptr + model_index * 0x608),part_index,model_ptr);
  return;
}
