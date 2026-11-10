// Name: core_morph.cpp_CMorph_free_FUN_005b6ea0
// Address: 005b6ea0
// Address Range: [[005b6ea0, 005b6ebf]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_free_FUN_005b6ea0(CMorph *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_free_FUN_005b6ea0(CMorph *this_ptr)

{
  core_morph_cpp_CMorphModel_free_FUN_005b6030(this_ptr->models);
  core_morph_cpp_CMorphModel_free_FUN_005b6030(this_ptr->models + 1);
  return;
}
