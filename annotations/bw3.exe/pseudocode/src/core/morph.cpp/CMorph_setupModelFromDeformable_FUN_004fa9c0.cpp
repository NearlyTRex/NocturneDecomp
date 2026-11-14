// Name: core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
// Address: 004fa9c0
// Address Range: [[004fa9c0, 004fa9f4]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr)

{
  core_morph_cpp_CMorphModel_free_FUN_004f9a70(this_ptr->models + model_index);
  core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_004f9d90
            (this_ptr->models + model_index,model_ptr);
  return;
}
