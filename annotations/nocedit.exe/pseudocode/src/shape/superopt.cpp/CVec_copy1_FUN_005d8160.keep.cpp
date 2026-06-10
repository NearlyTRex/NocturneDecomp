// Name: shape_superopt.cpp_CVec_copy1_FUN_005d8160
// Address: 005d8160
// MANUAL RECONSTRUCTION
// Address Range: [[005d8160, 005d818a]]
// Convention: __cdecl
// Signature: CVec * __cdecl shape_superopt_cpp_CVec_copy1_FUN_005d8160(CVec *this_ptr,CVec *other)

#include "nocturne.h"

CVec * __cdecl shape_superopt_cpp_CVec_copy1_FUN_005d8160(CVec *this_ptr,CVec *other)

{
  this_ptr->impl = other->impl;
  return this_ptr;
}
