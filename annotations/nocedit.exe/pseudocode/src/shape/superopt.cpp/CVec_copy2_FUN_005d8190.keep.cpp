// Name: shape_superopt.cpp_CVec_copy2_FUN_005d8190
// Address: 005d8190
// MANUAL RECONSTRUCTION
// Address Range: [[005d8190, 005d81ba]]
// Convention: __cdecl
// Signature: CVec * __cdecl shape_superopt_cpp_CVec_copy2_FUN_005d8190(CVec *this_ptr,CVec *other)

#include "nocturne.h"

CVec * __cdecl shape_superopt_cpp_CVec_copy2_FUN_005d8190(CVec *this_ptr,CVec *other)

{
  this_ptr->impl = other->impl;
  return this_ptr;
}
