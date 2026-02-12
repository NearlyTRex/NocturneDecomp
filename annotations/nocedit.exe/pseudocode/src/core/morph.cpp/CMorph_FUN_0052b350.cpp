// Name: core_morph.cpp_CMorph_FUN_0052b350
// Address: 0052b350
// Address Range: [[0052b350, 0052b36f]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_FUN_0052b350(CMorph *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_FUN_0052b350(CMorph *this_ptr)

{
  core_morph_cpp_CMorphModel_free_FUN_0052a510(this_ptr->models);
  core_morph_cpp_CMorphModel_free_FUN_0052a510(this_ptr->models + 1);
  return;
}
