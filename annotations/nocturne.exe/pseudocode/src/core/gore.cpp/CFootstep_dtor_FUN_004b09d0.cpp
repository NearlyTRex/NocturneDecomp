// Name: core_gore.cpp_CFootstep_dtor_FUN_004b09d0
// Address: 004b09d0
// Address Range: [[004b09d0, 004b09e5]]
// Convention: unknown
// Signature: float * core_gore_cpp_CFootstep_dtor_FUN_004b09d0(int param_1)

#include "nocturne.h"

float * core_gore_cpp_CFootstep_dtor_FUN_004b09d0(int param_1)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_dracbrid_cpp_CVector3f_arrdtor_FUN_0045b410((CVector3f *)(param_1 + 8),0);
  return &pCVar1[-1].y;
}
