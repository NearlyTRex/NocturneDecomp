// Name: shape_superopt.cpp_CP3D_scale_FUN_005d8630
// Address: 005d8630
// Address Range: [[005d8630, 005d866c]]
// Convention: __stackdbl_esi
// Signature: CP3D * __stackdbl_esi shape_superopt_cpp_CP3D_scale_FUN_005d8630(CP3D *this_ptr,double scalar,CP3D *result)

#include "nocturne.h"

CP3D * __stackdbl_esi shape_superopt_cpp_CP3D_scale_FUN_005d8630(CP3D *this_ptr,double scalar,CP3D *result)

{
  int iVar1;
  double *pdVar2;
  CP3D *pCVar3;
  double local_20;
  double local_18;
  double local_10;
  
  local_18 = (this_ptr->impl).y * scalar;
  local_10 = (this_ptr->impl).z * scalar;
  local_20 = (this_ptr->impl).x * scalar;
  pdVar2 = &local_20;
  pCVar3 = result;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)&(pCVar3->impl).x = *(uint *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pCVar3 = (CP3D *)((int)&(pCVar3->impl).x + 4);
  }
  return result;
}
