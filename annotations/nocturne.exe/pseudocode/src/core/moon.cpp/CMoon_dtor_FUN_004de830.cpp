// Name: core_moon.cpp_CMoon_dtor_FUN_004de830
// Address: 004de830
// Address Range: [[004de830, 004de850]]
// Convention: unknown
// Signature: float * core_moon_cpp_CMoon_dtor_FUN_004de830(CMoon *param_1)

#include "nocturne.h"

float * core_moon_cpp_CMoon_dtor_FUN_004de830(CMoon *param_1)

{
  CKeyFramedModel *pCVar1;
  
  core_moon_cpp_CMoon_free_FUN_004dea60(param_1);
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00452630(&param_1->moon,0);
  return &pCVar1[-1].rotation_matrix_workspace.m[2].z;
}
