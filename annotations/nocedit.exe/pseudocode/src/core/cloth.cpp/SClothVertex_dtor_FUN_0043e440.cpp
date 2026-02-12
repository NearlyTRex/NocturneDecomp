// Name: core_cloth.cpp_SClothVertex_dtor_FUN_0043e440
// Address: 0043e440
// Address Range: [[0043e440, 0043e459]]
// Convention: __cdecl
// Signature: SClothVertex * __cdecl core_cloth_cpp_SClothVertex_dtor_FUN_0043e440(SClothVertex *this_ptr,uint flags)

#include "nocturne.h"

SClothVertex * __cdecl
core_cloth_cpp_SClothVertex_dtor_FUN_0043e440(SClothVertex *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_cloth_cpp_CVector3f_arrdtor_FUN_0043e460(this_ptr->bone_positions,0);
  return (SClothVertex *)&pCVar1[-0x14].y;
}
