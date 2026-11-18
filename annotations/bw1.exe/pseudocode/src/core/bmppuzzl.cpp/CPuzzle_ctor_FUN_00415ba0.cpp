// Name: core_bmppuzzl.cpp_CPuzzle_ctor_FUN_00415ba0
// Address: 00415ba0
// Address Range: [[00415ba0, 00415bbe]]
// Convention: __cdecl
// Signature: CPuzzle * __cdecl core_bmppuzzl_cpp_CPuzzle_ctor_FUN_00415ba0(CPuzzle *this_ptr)

#include "nocturne.h"

CPuzzle * __cdecl core_bmppuzzl_cpp_CPuzzle_ctor_FUN_00415ba0(CPuzzle *this_ptr)

{
  g_INT_ARRAY_007c394c[0] = g_INT_ARRAY_007c394c[0] + 1;
  this_ptr->vtable = g_ARRAY_PTR_005fc944;
  g_INT_ARRAY_007c394c[g_INT_ARRAY_007c394c[0]] = (int)this_ptr;
  return this_ptr;
}
