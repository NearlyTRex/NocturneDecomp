// Name: core_moon.cpp_CMoon_ctor_FUN_00521bc0
// Address: 00521bc0
// Address Range: [[00521bc0, 00521bf7]]
// Convention: unknown
// Signature: CMoon * core_moon_cpp_CMoon_ctor_FUN_00521bc0(CMoon *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMoon * core_moon_cpp_CMoon_ctor_FUN_00521bc0(CMoon *this_ptr)

{
  CKeyFramedModel *pCVar1;
  float *pfVar2;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_004667e0(this_ptr->models);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_004667e0(pCVar1 + 1);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_004667e0(pCVar1 + 1);
  pfVar2 = &pCVar1[-3].rotation_matrix_workspace.m[2].z;
  *pfVar2 = 0.0;
  return (CMoon *)pfVar2;
}
