// Name: core_moon.cpp_CMoon_dtor_FUN_004f9450
// Address: 004f9450
// Address Range: [[004f9450, 004f9493]]
// Convention: __cdecl
// Signature: CMoon * __cdecl core_moon_cpp_CMoon_dtor_FUN_004f9450(CMoon *this_ptr,uint flags)

#include "nocturne.h"

CMoon * __cdecl core_moon_cpp_CMoon_dtor_FUN_004f9450(CMoon *this_ptr,uint flags)

{
  CKeyFramedModel *pCVar1;
  
  core_moon_cpp_CMoon_free_FUN_004f9580(this_ptr);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00460530(this_ptr->models + 2,0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00460530(pCVar1 + -1,0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00460530(pCVar1 + -1,0);
  return (CMoon *)&pCVar1[-1].rotation_matrix_workspace.m[2].z;
}
