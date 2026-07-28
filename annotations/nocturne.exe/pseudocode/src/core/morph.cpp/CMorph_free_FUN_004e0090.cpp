// Name: core_morph.cpp_CMorph_free_FUN_004e0090
// Address: 004e0090
// Address Range: [[004e0090, 004e00af]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_free_FUN_004e0090(CMorph *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_free_FUN_004e0090(CMorph *this_ptr)

{
  core_morph_cpp_CMorphModel_free_FUN_004df290(this_ptr->models);
  core_morph_cpp_CMorphModel_free_FUN_004df290(this_ptr->models + 1);
  return;
}
