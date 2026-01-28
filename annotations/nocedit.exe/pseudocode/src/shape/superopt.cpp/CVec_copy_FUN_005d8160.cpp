// Name: shape_superopt.cpp_CVec_copy_FUN_005d8160
// Address: 005d8160
// Address Range: [[005d8160, 005d818a]]
// Convention: __cdecl
// Signature: CVec * __cdecl shape_superopt_cpp_CVec_copy_FUN_005d8160(CVec *this_ptr,CVec *other)

#include "nocturne.h"

CVec * __cdecl shape_superopt_cpp_CVec_copy_FUN_005d8160(CVec *this_ptr,CVec *other)

{
  *(uint *)&(this_ptr->impl).x = *(uint *)&(other->impl).x;
  *(uint *)((int)&(this_ptr->impl).x + 4) = *(uint *)((int)&(other->impl).x + 4);
  *(uint *)&(this_ptr->impl).y = *(uint *)&(other->impl).y;
  *(uint *)((int)&(this_ptr->impl).y + 4) = *(uint *)((int)&(other->impl).y + 4);
  *(uint *)&(this_ptr->impl).z = *(uint *)&(other->impl).z;
  *(uint *)((int)&(this_ptr->impl).z + 4) = *(uint *)((int)&(other->impl).z + 4);
  return this_ptr;
}
