// Name: core_moon.cpp_CMoon_ctor_FUN_00502350
// Address: 00502350
// Address Range: [[00502350, 00502387]]
// Convention: __cdecl
// Signature: CMoon * __cdecl core_moon_cpp_CMoon_ctor_FUN_00502350(CMoon *this_ptr)

#include "nocturne.h"

CMoon * __cdecl core_moon_cpp_CMoon_ctor_FUN_00502350(CMoon *this_ptr)

{
  CKeyFramedModel *pCVar1;
  float *pfVar2;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_0044dc10(this_ptr->models);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_0044dc10(pCVar1 + 1);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_0044dc10(pCVar1 + 1);
  pfVar2 = &pCVar1[-3].rotation_matrix_workspace.m[2].z;
  *pfVar2 = 0.0;
  return (CMoon *)pfVar2;
}
