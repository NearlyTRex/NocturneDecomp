// Name: core_cloth.cpp_SClothVertex_dtor_FUN_004389c0
// Address: 004389c0
// Address Range: [[004389c0, 004389d9]]
// Convention: __cdecl
// Signature: SClothVertex * __cdecl core_cloth_cpp_SClothVertex_dtor_FUN_004389c0(SClothVertex *this_ptr,uint flags)

#include "nocturne.h"

SClothVertex * __cdecl core_cloth_cpp_SClothVertex_dtor_FUN_004389c0(SClothVertex *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_cloth_cpp_CVector3f_arrdtor3_FUN_004389e0(this_ptr->bone_positions,0);
  return (SClothVertex *)&pCVar1[-0x14].y;
}
