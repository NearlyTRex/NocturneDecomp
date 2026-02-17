// Name: core_morph.cpp_CMorph_setupModelFromDeformable_FUN_0052b430
// Address: 0052b430
// Address Range: [[0052b430, 0052b464]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr)

{
  core_morph_cpp_CMorphModel_free_FUN_0052a510(this_ptr->models + model_index);
  core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_0052a870
            (this_ptr->models + model_index,model_ptr);
  return;
}
