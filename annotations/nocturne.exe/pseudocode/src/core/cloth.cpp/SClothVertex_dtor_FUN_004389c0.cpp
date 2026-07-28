// Name: core_cloth.cpp_SClothVertex_dtor_FUN_004389c0
// Address: 004389c0
// Address Range: [[004389c0, 004389d9]]
// Convention: unknown
// Signature: float * core_cloth_cpp_SClothVertex_dtor_FUN_004389c0(int param_1)

#include "nocturne.h"

float * core_cloth_cpp_SClothVertex_dtor_FUN_004389c0(int param_1)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_cloth_cpp_CVector3f_arrdtor_FUN_004389e0((CVector3f *)(param_1 + 0xec),0);
  return &pCVar1[-0x14].y;
}
