// Name: core_manpuz.cpp_SGem_ctor_FUN_005067c0
// Address: 005067c0
// Address Range: [[005067c0, 005067da]]
// Convention: __cdecl
// Signature: SGem * __cdecl core_manpuz_cpp_SGem_ctor_FUN_005067c0(SGem *this_ptr)

#include "nocturne.h"

SGem * __cdecl core_manpuz_cpp_SGem_ctor_FUN_005067c0(SGem *this_ptr)

{
  int iVar1;
  
  iVar1 = __arrinit
                    (&this_ptr->collision_tri_a,2,&g_CDemonTriangleTypeInfo);
  return (SGem *)(iVar1 + -0x3c);
}
