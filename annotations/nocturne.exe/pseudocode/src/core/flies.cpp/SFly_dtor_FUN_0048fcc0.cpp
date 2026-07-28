// Name: core_flies.cpp_SFly_dtor_FUN_0048fcc0
// Address: 0048fcc0
// Address Range: [[0048fcc0, 0048fcd5]]
// Convention: unknown
// Signature: float * core_flies_cpp_SFly_dtor_FUN_0048fcc0(int param_1)

#include "nocturne.h"

float * core_flies_cpp_SFly_dtor_FUN_0048fcc0(int param_1)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_dracbrid_cpp_CVector3f_arrdtor_FUN_0045b410((CVector3f *)(param_1 + 4),0);
  return &pCVar1[-1].z;
}
