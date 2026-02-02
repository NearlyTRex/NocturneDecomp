// Name: core_boxactor.cpp_CLightActor_setup_FUN_00422a20
// Address: 00422a20
// Address Range: [[00422a20, 00422a47]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_setup_FUN_00422a20(CLightActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_setup_FUN_00422a20(CLightActor *this_ptr)

{
  core_boxactor_cpp_CLightActor_FUN_00422d60(this_ptr);
  core_boxactor_cpp_CBoxActor_setup_FUN_00421830(&this_ptr->base);
  core_dlight_cpp_CDemonLight_init_FUN_004727c0((CDemonLight *)this_ptr->unk);
  return;
}
