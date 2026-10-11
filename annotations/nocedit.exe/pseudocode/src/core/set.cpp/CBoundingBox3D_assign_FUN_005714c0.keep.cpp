// Name: core_set.cpp_CBoundingBox3D_assign_FUN_005714c0
// Address: 005714c0
// MANUAL RECONSTRUCTION
// Address Range: [[005714c0, 00571504]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_set_cpp_CBoundingBox3D_assign_FUN_005714c0(CBoundingBox3D *this_ptr,CBoundingBox3D *other)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_set_cpp_CBoundingBox3D_assign_FUN_005714c0(CBoundingBox3D *this_ptr,CBoundingBox3D *other)

{
  if (this_ptr == other) {
    if (&this_ptr->max == &other->max) {
      return this_ptr;
    }
  }
  else {
    this_ptr->min = other->min;
    if (&this_ptr->max == &other->max) {
      return this_ptr;
    }
  }
  this_ptr->max = other->max;
  return this_ptr;
}
