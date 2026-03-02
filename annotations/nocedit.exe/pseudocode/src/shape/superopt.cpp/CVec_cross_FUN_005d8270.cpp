// Name: shape_superopt.cpp_CVec_cross_FUN_005d8270
// Address: 005d8270
// Address Range: [[005d8270, 005d82ac]]
// Convention: __cdecl
// Signature: CVec * __cdecl shape_superopt_cpp_CVec_cross_FUN_005d8270(CVec *this_ptr,CVec *a,CVec *b)

#include "nocturne.h"

CVec * __cdecl shape_superopt_cpp_CVec_cross_FUN_005d8270(CVec *this_ptr,CVec *a,CVec *b)

{
  (a->impl).x = (this_ptr->impl).y * (b->impl).z - (this_ptr->impl).z * (b->impl).y;
  (a->impl).y = (this_ptr->impl).z * (b->impl).x - (this_ptr->impl).x * (b->impl).z;
  (a->impl).z = (this_ptr->impl).x * (b->impl).y - (this_ptr->impl).y * (b->impl).x;
  return a;
}
