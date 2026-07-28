// Name: core_skeleton.cpp_SVert_dtor_FUN_0051f860
// Address: 0051f860
// Address Range: [[0051f860, 0051f875]]
// Convention: unknown
// Signature: float * core_skeleton_cpp_SVert_dtor_FUN_0051f860(int param_1)

#include "nocturne.h"

float * core_skeleton_cpp_SVert_dtor_FUN_0051f860(int param_1)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_cloth_cpp_CVector3f_arrdtor_FUN_004389e0((CVector3f *)(param_1 + 0x10),0);
  return &pCVar1[-2].z;
}
