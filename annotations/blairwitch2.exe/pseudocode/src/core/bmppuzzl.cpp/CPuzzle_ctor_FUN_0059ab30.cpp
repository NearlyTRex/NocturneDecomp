// Name: core_bmppuzzl.cpp_CPuzzle_ctor_FUN_0059ab30
// Address: 0059ab30
// Address Range: [[0059ab30, 0059ab4e]]
// Convention: __cdecl
// Signature: CPuzzle * __cdecl core_bmppuzzl_cpp_CPuzzle_ctor_FUN_0059ab30(CPuzzle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CPuzzle * __cdecl core_bmppuzzl_cpp_CPuzzle_ctor_FUN_0059ab30(CPuzzle *this_ptr)

{
  _DAT_026677b4 = _DAT_026677b4 + 1;
  this_ptr->vtable = &PTR_core_bmppuzzl_cpp_CPuzzle_dtor_FUN_0059ab50_005fe4f4;
  *(CPuzzle **)(&DAT_026677b4 + _DAT_026677b4 * 4) = this_ptr;
  return this_ptr;
}
