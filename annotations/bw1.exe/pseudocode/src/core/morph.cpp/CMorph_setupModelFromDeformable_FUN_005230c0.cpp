// Name: core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0
// Address: 005230c0
// Address Range: [[005230c0, 005230f4]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr)

{
  core_morph_cpp_CMorphModel_free_FUN_00522170((CMorphModel *)(this_ptr + model_index * 0x608));
  core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_00522490
            ((CMorphModel *)(this_ptr + model_index * 0x608),model_ptr);
  return;
}
