// Name: core_morph.cpp_CMorph_addPartFromDeformableModel_FUN_004e0290
// Address: 004e0290
// Address Range: [[004e0290, 004e02b9]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_addPartFromDeformableModel_FUN_004e0290(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_addPartFromDeformableModel_FUN_004e0290(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr)

{
  core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_004df5b0
            (this_ptr->models + model_index,model_ptr);
  return;
}
