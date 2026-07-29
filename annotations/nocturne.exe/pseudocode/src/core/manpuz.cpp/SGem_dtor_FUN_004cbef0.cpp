// Name: core_manpuz.cpp_SGem_dtor_FUN_004cbef0
// Address: 004cbef0
// Address Range: [[004cbef0, 004cbf05]]
// Convention: __cdecl
// Signature: SGem * __cdecl core_manpuz_cpp_SGem_dtor_FUN_004cbef0(SGem *this_ptr,uint flags)

#include "nocturne.h"

SGem * __cdecl core_manpuz_cpp_SGem_dtor_FUN_004cbef0(SGem *this_ptr,uint flags)

{
  CDemonTriangle *pCVar1;
  
  pCVar1 = core_manpuz_cpp_CDemonTriangle_arrdtor_FUN_004cc000(&this_ptr->collision_tri_a,0);
  return (SGem *)&pCVar1[-2].dominant_axis;
}
