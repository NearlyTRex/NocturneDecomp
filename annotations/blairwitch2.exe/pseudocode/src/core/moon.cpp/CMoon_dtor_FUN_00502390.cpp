// Name: core_moon.cpp_CMoon_dtor_FUN_00502390
// Address: 00502390
// Address Range: [[00502390, 005023d3]]
// Convention: __cdecl
// Signature: CMoon * __cdecl core_moon_cpp_CMoon_dtor_FUN_00502390(CMoon *this_ptr,uint flags)

#include "nocturne.h"

CMoon * __cdecl core_moon_cpp_CMoon_dtor_FUN_00502390(CMoon *this_ptr,uint flags)

{
  CKeyFramedModel *pCVar1;
  
  core_moon_cpp_CMoon_free_FUN_00502450(this_ptr);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_0044dcb0(this_ptr->models + 2,0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_0044dcb0(pCVar1 + -1,0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_0044dcb0(pCVar1 + -1,0);
  return (CMoon *)&pCVar1[-1].rotation_matrix_workspace.m[2].z;
}
