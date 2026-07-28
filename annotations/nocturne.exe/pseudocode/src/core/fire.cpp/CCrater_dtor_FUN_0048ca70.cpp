// Name: core_fire.cpp_CCrater_dtor_FUN_0048ca70
// Address: 0048ca70
// Address Range: [[0048ca70, 0048ca85]]
// Convention: unknown
// Signature: float * core_fire_cpp_CCrater_dtor_FUN_0048ca70(int param_1)

#include "nocturne.h"

float * core_fire_cpp_CCrater_dtor_FUN_0048ca70(int param_1)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_cloth_cpp_CVector3f_arrdtor_FUN_004389e0((CVector3f *)(param_1 + 0x1c),0);
  return &pCVar1[-3].z;
}
