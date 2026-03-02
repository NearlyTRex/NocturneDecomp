// Name: shape_superopt.cpp_CVec_normalize_FUN_005d81c0
// Address: 005d81c0
// Address Range: [[005d81c0, 005d81fa]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CVec_normalize_FUN_005d81c0(CVec *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CVec_normalize_FUN_005d81c0(CVec *this_ptr)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this_ptr->impl).y;
  dVar2 = (this_ptr->impl).x;
  dVar3 = (this_ptr->impl).z;
  dVar1 = 1.0 / SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
  (this_ptr->impl).x = (this_ptr->impl).x * dVar1;
  (this_ptr->impl).y = (this_ptr->impl).y * dVar1;
  (this_ptr->impl).z = (this_ptr->impl).z * dVar1;
  return;
}
