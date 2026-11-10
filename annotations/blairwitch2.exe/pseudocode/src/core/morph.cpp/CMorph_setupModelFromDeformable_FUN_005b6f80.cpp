// Name: core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
// Address: 005b6f80
// Address Range: [[005b6f80, 005b6fb4]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr)

{
  core_morph_cpp_CMorphModel_free_FUN_005b6030(this_ptr->models + model_index);
  core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_005b6350
            (this_ptr->models + model_index,model_ptr);
  return;
}
