// Name: core_moon.cpp_CMoon_dtor_FUN_00529ab0
// Address: 00529ab0
// Address Range: [[00529ab0, 00529ad0]]
// Convention: __cdecl
// Signature: CMoon * __cdecl core_moon_cpp_CMoon_dtor_FUN_00529ab0(CMoon *this_ptr)

#include "nocturne.h"

CMoon * __cdecl core_moon_cpp_CMoon_dtor_FUN_00529ab0(CMoon *this_ptr)

{
  CKeyFramedModel *pCVar1;
  
  core_moon_cpp_CMoon_free_FUN_00529ce0(this_ptr);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(&this_ptr->moon);
  return (CMoon *)&pCVar1[-1].rotation_matrix_workspace.m[2].z;
}
