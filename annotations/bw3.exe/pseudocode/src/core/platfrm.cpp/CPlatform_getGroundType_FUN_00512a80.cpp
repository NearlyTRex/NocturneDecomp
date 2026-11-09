// Name: core_platfrm.cpp_CPlatform_getGroundType_FUN_00512a80
// Address: 00512a80
// Address Range: [[00512a80, 00512a8a]]
// Convention: __cdecl
// Signature: EGroundType __cdecl core_platfrm_cpp_CPlatform_getGroundType_FUN_00512a80(CPlatform *this_ptr)

#include "nocturne.h"

EGroundType __cdecl core_platfrm_cpp_CPlatform_getGroundType_FUN_00512a80(CPlatform *this_ptr)

{
  return *(EGroundType *)&this_ptr->field_0x2d8;
}
