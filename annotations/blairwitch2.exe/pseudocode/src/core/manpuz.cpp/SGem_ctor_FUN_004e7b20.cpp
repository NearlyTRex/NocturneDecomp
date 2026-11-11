// Name: core_manpuz.cpp_SGem_ctor_FUN_004e7b20
// Address: 004e7b20
// Address Range: [[004e7b20, 004e7b3a]]
// Convention: __cdecl
// Signature: SGem * __cdecl core_manpuz_cpp_SGem_ctor_FUN_004e7b20(SGem *this_ptr)

#include "nocturne.h"

SGem * __cdecl core_manpuz_cpp_SGem_ctor_FUN_004e7b20(SGem *this_ptr)

{
  int iVar1;
  
  iVar1 = __arrinit
                    (&this_ptr->collision_tri_a,2,&g_CDemonTriangleTypeInfo);
  return (SGem *)(iVar1 + -0x3c);
}
