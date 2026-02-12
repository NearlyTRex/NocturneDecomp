// Name: core_morph.cpp_CMorph_FUN_0052b4b0
// Address: 0052b4b0
// Address Range: [[0052b4b0, 0052b4fc]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_FUN_0052b4b0(CMorph *this_ptr,int model_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_FUN_0052b4b0(CMorph *this_ptr,int model_index)

{
  core_morph_cpp_CMorphModel_addPart_FUN_0052a580(this_ptr->models + model_index);
  return;
}
