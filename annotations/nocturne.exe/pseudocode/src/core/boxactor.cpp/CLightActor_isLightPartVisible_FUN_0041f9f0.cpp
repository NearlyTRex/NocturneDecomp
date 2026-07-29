// Name: core_boxactor.cpp_CLightActor_isLightPartVisible_FUN_0041f9f0
// Address: 0041f9f0
// Address Range: [[0041f9f0, 0041fa03]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CLightActor_isLightPartVisible_FUN_0041f9f0(CLightActor *this_ptr)

#include "nocturne.h"

int __cdecl core_boxactor_cpp_CLightActor_isLightPartVisible_FUN_0041f9f0(CLightActor *this_ptr)

{
  return (uint)((this_ptr->base).model.part_visibility_flags[10] != 0);
}
