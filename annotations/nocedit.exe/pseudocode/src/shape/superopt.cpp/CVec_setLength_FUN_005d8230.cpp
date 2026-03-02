// Name: shape_superopt.cpp_CVec_setLength_FUN_005d8230
// Address: 005d8230
// Address Range: [[005d8230, 005d826e]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CVec_setLength_FUN_005d8230(CVec *this_ptr,double length)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CVec_setLength_FUN_005d8230(CVec *this_ptr,double length)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this_ptr->impl).y;
  dVar2 = (this_ptr->impl).x;
  dVar3 = (this_ptr->impl).z;
  dVar1 = length / SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
  (this_ptr->impl).x = (this_ptr->impl).x * dVar1;
  (this_ptr->impl).y = (this_ptr->impl).y * dVar1;
  (this_ptr->impl).z = (this_ptr->impl).z * dVar1;
  return;
}
