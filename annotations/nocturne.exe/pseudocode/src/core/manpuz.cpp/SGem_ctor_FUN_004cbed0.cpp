// Name: core_manpuz.cpp_SGem_ctor_FUN_004cbed0
// Address: 004cbed0
// Address Range: [[004cbed0, 004cbeea]]
// Convention: __cdecl
// Signature: SGem * __cdecl core_manpuz_cpp_SGem_ctor_FUN_004cbed0(SGem *this_ptr)

#include "nocturne.h"

SGem * __cdecl core_manpuz_cpp_SGem_ctor_FUN_004cbed0(SGem *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit
                     (&this_ptr->collision_tri_a,2,&g_CDemonTriangleTypeInfo_0059c080);
  return (SGem *)((int)pvVar1 + -0x3c);
}
