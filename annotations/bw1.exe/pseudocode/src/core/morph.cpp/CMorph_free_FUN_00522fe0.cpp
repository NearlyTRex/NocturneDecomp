// Name: core_morph.cpp_CMorph_free_FUN_00522fe0
// Address: 00522fe0
// Address Range: [[00522fe0, 00522fff]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_free_FUN_00522fe0(CMorph *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorph_free_FUN_00522fe0(CMorph *this_ptr)

{
  core_morph_cpp_CMorphModel_free_FUN_00522170(this_ptr->models);
  core_morph_cpp_CMorphModel_free_FUN_00522170(this_ptr->models + 1);
  return;
}
