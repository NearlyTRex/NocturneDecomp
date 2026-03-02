// Name: shape_superopt.cpp_CVec_dot_FUN_005d82e0
// Address: 005d82e0
// Address Range: [[005d82e0, 005d830c]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CVec_dot_FUN_005d82e0(CVec *this_ptr,CVec *other)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CVec_dot_FUN_005d82e0(CVec *this_ptr,CVec *other)

{
  int local_8;
  
  local_8 = SUB84((this_ptr->impl).z * (other->impl).z +
                  (this_ptr->impl).x * (other->impl).x + (this_ptr->impl).y * (other->impl).y,0);
  return local_8;
}
