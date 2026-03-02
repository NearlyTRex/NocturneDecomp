// Name: shape_superopt.cpp_CP3D_multiply_FUN_005d85f0
// Address: 005d85f0
// Address Range: [[005d85f0, 005d862e]]
// Convention: __stack2_esi
// Signature: CP3D * __stack2_esi shape_superopt_cpp_CP3D_multiply_FUN_005d85f0(CP3D *this_ptr,CP3D *a,CP3D *b)

#include "nocturne.h"

CP3D * __stack2_esi shape_superopt_cpp_CP3D_multiply_FUN_005d85f0(CP3D *this_ptr,CP3D *a,CP3D *b)

{
  int iVar1;
  double *pdVar2;
  CP3D *pCVar3;
  double local_20;
  double local_18;
  double local_10;
  
  local_18 = (this_ptr->impl).y * (a->impl).y;
  local_10 = (this_ptr->impl).z * (a->impl).z;
  local_20 = (this_ptr->impl).x * (a->impl).x;
  pdVar2 = &local_20;
  pCVar3 = b;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)&(pCVar3->impl).x = *(uint *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pCVar3 = (CP3D *)((int)&(pCVar3->impl).x + 4);
  }
  return b;
}
