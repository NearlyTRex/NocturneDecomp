// Name: core_moon.cpp_CMoon_dtor_FUN_00502390
// Address: 00502390
// Address Range: [[00502390, 005023d3]]
// Convention: unknown
// Signature: CMoon * core_moon_cpp_CMoon_dtor_FUN_00502390(CMoon *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMoon * core_moon_cpp_CMoon_dtor_FUN_00502390(CMoon *this_ptr,uint flags)

{
  CKeyFramedModel *pCVar1;
  
  core_moon_cpp_FUN_00502450(this_ptr);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_0044dcb0
                     ((CKeyFramedModel *)&this_ptr->field_0x738,0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_0044dcb0(pCVar1 + -1,0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_0044dcb0(pCVar1 + -1,0);
  return (CMoon *)&pCVar1[-1].rotation_matrix_workspace.m[2].z;
}
