// Name: core_boxactor.cpp_CLightActor_setup_FUN_0041f3a0
// Address: 0041f3a0
// Address Range: [[0041f3a0, 0041f3c7]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_setup_FUN_0041f3a0(CLightActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_setup_FUN_0041f3a0(CLightActor *this_ptr)

{
  core_boxactor_cpp_FUN_0041f6e0(this_ptr);
  core_boxactor_cpp_CBoxActor_setup_FUN_0041e430(&this_ptr->base);
  core_dlight_cpp_CDemonLight_init_FUN_0044e1e0(&this_ptr->light);
  return;
}
