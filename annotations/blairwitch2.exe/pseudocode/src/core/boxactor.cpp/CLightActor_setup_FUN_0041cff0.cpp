// Name: core_boxactor.cpp_CLightActor_setup_FUN_0041cff0
// Address: 0041cff0
// Address Range: [[0041cff0, 0041d017]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_setup_FUN_0041cff0(CLightActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_setup_FUN_0041cff0(CLightActor *this_ptr)

{
  core_boxactor_cpp_CLightActor_setupLightModel_FUN_0041d350(this_ptr);
  core_boxactor_cpp_CBoxActor_setup_FUN_0041be70(&this_ptr->base);
  core_dlight_cpp_CDemonLight_init_FUN_00449d90(&this_ptr->light);
  return;
}
