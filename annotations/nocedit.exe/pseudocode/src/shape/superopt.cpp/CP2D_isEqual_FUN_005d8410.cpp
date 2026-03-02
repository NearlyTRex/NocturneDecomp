// Name: shape_superopt.cpp_CP2D_isEqual_FUN_005d8410
// Address: 005d8410
// Address Range: [[005d8410, 005d8434]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CP2D_isEqual_FUN_005d8410(CP2D *this_ptr,CP2D *b)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CP2D_isEqual_FUN_005d8410(CP2D *this_ptr,CP2D *b)

{
  if (((this_ptr->impl).x == (b->impl).x) && ((this_ptr->impl).y == (b->impl).y)) {
    return 1;
  }
  return 0;
}
