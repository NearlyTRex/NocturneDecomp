// Name: core_moon.cpp_CMoon_ctor_FUN_004f9410
// Address: 004f9410
// Address Range: [[004f9410, 004f9447]]
// Convention: __cdecl
// Signature: CMoon * __cdecl core_moon_cpp_CMoon_ctor_FUN_004f9410(CMoon *this_ptr)

#include "nocturne.h"

CMoon * __cdecl core_moon_cpp_CMoon_ctor_FUN_004f9410(CMoon *this_ptr)

{
  CKeyFramedModel *pCVar1;
  float *pfVar2;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00460490(this_ptr->models);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00460490(pCVar1 + 1);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00460490(pCVar1 + 1);
  pfVar2 = &pCVar1[-3].rotation_matrix_workspace.m[2].z;
  *pfVar2 = 0.0;
  return (CMoon *)pfVar2;
}
