// Name: core_bmppuzzl.cpp_CPuzzle_ctor_FUN_00411960
// Address: 00411960
// Address Range: [[00411960, 0041197e]]
// Convention: __cdecl
// Signature: CPuzzle * __cdecl core_bmppuzzl_cpp_CPuzzle_ctor_FUN_00411960(CPuzzle *this_ptr)

#include "nocturne.h"

CPuzzle * __cdecl core_bmppuzzl_cpp_CPuzzle_ctor_FUN_00411960(CPuzzle *this_ptr)

{
  DAT_007dff88 = DAT_007dff88 + 1;
  this_ptr->vtable = &PTR_core_bmppuzzl_cpp_CPuzzle_dtor_FUN_00411980_005dbe54;
  (&DAT_007dff88)[DAT_007dff88] = (int)this_ptr;
  return this_ptr;
}
