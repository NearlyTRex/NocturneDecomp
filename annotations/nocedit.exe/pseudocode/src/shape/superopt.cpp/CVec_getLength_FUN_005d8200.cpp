// Name: shape_superopt.cpp_CVec_getLength_FUN_005d8200
// Address: 005d8200
// Address Range: [[005d8200, 005d8228]]
// Convention: __cdecl
// Signature: double __cdecl shape_superopt_cpp_CVec_getLength_FUN_005d8200(CVec *this_ptr)

#include "nocturne.h"

double __cdecl shape_superopt_cpp_CVec_getLength_FUN_005d8200(CVec *this_ptr)

{
  int local_8;
  double dVar1;
  double dVar3;
  double dVar2;
  
  dVar1 = (this_ptr->impl).y;
  dVar2 = (this_ptr->impl).x;
  dVar3 = (this_ptr->impl).z;
  return SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
}
