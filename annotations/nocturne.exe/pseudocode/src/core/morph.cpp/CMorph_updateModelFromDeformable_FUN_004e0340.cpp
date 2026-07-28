// Name: core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340
// Address: 004e0340
// Address Range: [[004e0340, 004e0370]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index)

{
  core_morph_cpp_CMorphModel_animateFromDeformableModel_FUN_004df770
            (this_ptr->models + model_index,part_index,model_ptr);
  return;
}
