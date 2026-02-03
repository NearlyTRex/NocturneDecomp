// Name: core_manpuz.cpp_SGem_dtor_FUN_0050b960
// Address: 0050b960
// Address Range: [[0050b960, 0050b975]]
// Convention: __cdecl
// Signature: SGem * __cdecl core_manpuz_cpp_SGem_dtor_FUN_0050b960(SGem *this_ptr)

#include "nocturne.h"

SGem * __cdecl core_manpuz_cpp_SGem_dtor_FUN_0050b960(SGem *this_ptr)

{
  CDemonTriangle *pCVar1;
  
  pCVar1 = core_manpuz_cpp_freeTriangles_FUN_0050ba70((CDemonTriangle *)(this_ptr->unk + 0x3c));
  return (SGem *)&pCVar1[-2].area;
}
