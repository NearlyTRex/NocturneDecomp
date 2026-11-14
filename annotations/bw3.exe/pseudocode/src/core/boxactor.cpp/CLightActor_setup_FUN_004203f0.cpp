// Name: core_boxactor.cpp_CLightActor_setup_FUN_004203f0
// Address: 004203f0
// Address Range: [[004203f0, 00420417]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_setup_FUN_004203f0(CLightActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_setup_FUN_004203f0(CLightActor *this_ptr)

{
  core_boxactor_cpp_FUN_004208d0(this_ptr);
  core_boxactor_cpp_CBoxActor_setup_FUN_0041f130(&this_ptr->base);
  core_dlight_cpp_CDemonLight_init_FUN_0045c2a0(&this_ptr->light);
  return;
}
