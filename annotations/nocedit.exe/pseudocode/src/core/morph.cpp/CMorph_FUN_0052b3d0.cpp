// Name: core_morph.cpp_CMorph_FUN_0052b3d0
// Address: 0052b3d0
// Address Range: [[0052b3d0, 0052b425]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_FUN_0052b3d0(CMorph *this_ptr,int model_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_FUN_0052b3d0(CMorph *this_ptr,int model_index)

{
  core_morph_cpp_CMorphModel_free_FUN_0052a510(this_ptr->models + model_index);
  core_morph_cpp_CMorphModel_addPart_FUN_0052a580(this_ptr->models + model_index);
  return;
}
