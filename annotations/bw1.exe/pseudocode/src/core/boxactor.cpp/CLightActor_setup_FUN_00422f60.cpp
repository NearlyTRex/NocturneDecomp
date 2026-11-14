// Name: core_boxactor.cpp_CLightActor_setup_FUN_00422f60
// Address: 00422f60
// Address Range: [[00422f60, 00422f87]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_setup_FUN_00422f60(CLightActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_setup_FUN_00422f60(CLightActor *this_ptr)

{
  core_boxactor_cpp_FUN_004232c0(this_ptr);
  core_boxactor_cpp_CBoxActor_setup_FUN_00421de0(&this_ptr->base);
  core_dlight_cpp_CDemonLight_init_FUN_00462590(&this_ptr->light);
  return;
}
