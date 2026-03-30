// Name: shape_superopt.cpp_CVec_copy3_FUN_005d82b0
// Address: 005d82b0
// Address Range: [[005d82b0, 005d82da]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CVec_copy3_FUN_005d82b0(CVec *this_ptr,CVec *other)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CVec_copy3_FUN_005d82b0(CVec *this_ptr,CVec *other)

{
  *(uint *)&(this_ptr->impl).x = *(uint *)&(other->impl).x;
  *(uint *)((int)&(this_ptr->impl).x + 4) = *(uint *)((int)&(other->impl).x + 4);
  *(uint *)&(this_ptr->impl).y = *(uint *)&(other->impl).y;
  *(uint *)((int)&(this_ptr->impl).y + 4) = *(uint *)((int)&(other->impl).y + 4);
  *(uint *)&(this_ptr->impl).z = *(uint *)&(other->impl).z;
  *(uint *)((int)&(this_ptr->impl).z + 4) = *(uint *)((int)&(other->impl).z + 4);
  return;
}
