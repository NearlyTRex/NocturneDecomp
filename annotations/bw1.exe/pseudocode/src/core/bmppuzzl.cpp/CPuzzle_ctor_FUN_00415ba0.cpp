// Name: core_bmppuzzl.cpp_CPuzzle_ctor_FUN_00415ba0
// Address: 00415ba0
// Address Range: [[00415ba0, 00415bbe]]
// Convention: __cdecl
// Signature: CPuzzle * __cdecl core_bmppuzzl_cpp_CPuzzle_ctor_FUN_00415ba0(CPuzzle *this_ptr)

#include "nocturne.h"

CPuzzle * __cdecl core_bmppuzzl_cpp_CPuzzle_ctor_FUN_00415ba0(CPuzzle *this_ptr)

{
  DAT_007c394c = DAT_007c394c + 1;
  this_ptr->vtable = &PTR_core_bmppuzzl_cpp_CPuzzle_dtor_FUN_00415bc0_005fc944;
  (&DAT_007c394c)[DAT_007c394c] = (int)this_ptr;
  return this_ptr;
}
