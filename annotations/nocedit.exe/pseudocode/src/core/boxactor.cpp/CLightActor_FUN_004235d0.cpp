// Name: core_boxactor.cpp_CLightActor_FUN_004235d0
// Address: 004235d0
// Address Range: [[004235d0, 004235e3]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CLightActor_FUN_004235d0(CLightActor *this_ptr)

#include "nocturne.h"

int __cdecl core_boxactor_cpp_CLightActor_FUN_004235d0(CLightActor *this_ptr)

{
  return (uint)((this_ptr->base).model.part_visibility_flags[8] != 0);
}
