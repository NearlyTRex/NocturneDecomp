// Name: core_morph.cpp_CMorph_updateModelFromDeformable_FUN_0052b600
// Address: 0052b600
// Address Range: [[0052b600, 0052b630]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_updateModelFromDeformable_FUN_0052b600(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_updateModelFromDeformable_FUN_0052b600(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index)

{
  core_morph_cpp_CMorphModel_animateFromDeformableModel_FUN_0052aa30
            (this_ptr->models + model_index,part_index,model_ptr);
  return;
}
