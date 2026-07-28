// Name: core_moon.cpp_CMoon_ctor_FUN_004de800
// Address: 004de800
// Address Range: [[004de800, 004de820]]
// Convention: __cdecl
// Signature: CMoon * __cdecl core_moon_cpp_CMoon_ctor_FUN_004de800(CMoon *this_ptr)

#include "nocturne.h"

CMoon * __cdecl core_moon_cpp_CMoon_ctor_FUN_004de800(CMoon *this_ptr)

{
  CKeyFramedModel *pCVar1;
  float *pfVar2;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00452590(&this_ptr->moon);
  pfVar2 = &pCVar1[-1].rotation_matrix_workspace.m[2].z;
  pCVar1[-1].dead = 0;
  *pfVar2 = 0.0;
  return (CMoon *)pfVar2;
}
