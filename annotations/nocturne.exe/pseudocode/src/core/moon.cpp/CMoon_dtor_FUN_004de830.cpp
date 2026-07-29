// Name: core_moon.cpp_CMoon_dtor_FUN_004de830
// Address: 004de830
// Address Range: [[004de830, 004de850]]
// Convention: __cdecl
// Signature: CMoon * __cdecl core_moon_cpp_CMoon_dtor_FUN_004de830(CMoon *this_ptr,uint flags)

#include "nocturne.h"

CMoon * __cdecl core_moon_cpp_CMoon_dtor_FUN_004de830(CMoon *this_ptr,uint flags)

{
  CKeyFramedModel *pCVar1;
  
  core_moon_cpp_CMoon_free_FUN_004dea60(this_ptr);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00452630(&this_ptr->moon,0);
  return (CMoon *)&pCVar1[-1].rotation_matrix_workspace.m[2].z;
}
