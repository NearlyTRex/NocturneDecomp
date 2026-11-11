// Name: core_morph.cpp_CMorph_free_FUN_004fa8e0
// Address: 004fa8e0
// Address Range: [[004fa8e0, 004fa8ff]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_free_FUN_004fa8e0(CMorph *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_free_FUN_004fa8e0(CMorph *this_ptr)

{
  core_morph_cpp_CMorphModel_free_FUN_004f9a70(this_ptr->models);
  core_morph_cpp_CMorphModel_free_FUN_004f9a70(this_ptr->models + 1);
  return;
}
