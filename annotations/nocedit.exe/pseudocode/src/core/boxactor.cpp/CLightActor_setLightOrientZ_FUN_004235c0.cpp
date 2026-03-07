// Name: core_boxactor.cpp_CLightActor_setLightOrientZ_FUN_004235c0
// Address: 004235c0
// Address Range: [[004235c0, 004235cb]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_setLightOrientZ_FUN_004235c0(CLightActor *this_ptr,float angle)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_setLightOrientZ_FUN_004235c0(CLightActor *this_ptr,float angle)

{
  (this_ptr->base).base.orient.vec.z = angle;
  return;
}
