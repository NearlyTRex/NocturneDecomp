// Name: shape_superopt.cpp_CP2D_copy_FUN_005d8330
// Address: 005d8330
// Address Range: [[005d8330, 005d834e]]
// Convention: __cdecl
// Signature: CP2D * __cdecl shape_superopt_cpp_CP2D_copy_FUN_005d8330(CP2D *this_ptr,CP2D *src)

#include "nocturne.h"

CP2D * __cdecl shape_superopt_cpp_CP2D_copy_FUN_005d8330(CP2D *this_ptr,CP2D *src)

{
  *(uint *)&(this_ptr->impl).x = *(uint *)&(src->impl).x;
  *(uint *)((int)&(this_ptr->impl).x + 4) = *(uint *)((int)&(src->impl).x + 4);
  *(uint *)&(this_ptr->impl).y = *(uint *)&(src->impl).y;
  *(uint *)((int)&(this_ptr->impl).y + 4) = *(uint *)((int)&(src->impl).y + 4);
  return this_ptr;
}
