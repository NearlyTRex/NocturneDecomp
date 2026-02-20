// Name: core_manpuz.cpp_SGem_ctor_FUN_0050b940
// Address: 0050b940
// Address Range: [[0050b940, 0050b95a]]
// Convention: __cdecl
// Signature: SGem * __cdecl core_manpuz_cpp_SGem_ctor_FUN_0050b940(SGem *this_ptr)

#include "nocturne.h"

SGem * __cdecl core_manpuz_cpp_SGem_ctor_FUN_0050b940(SGem *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit
                     (&this_ptr->collision_tri_a,2,&g_CDemonTriangleTypeInfo);
  return (SGem *)((int)pvVar1 + -0x3c);
}
