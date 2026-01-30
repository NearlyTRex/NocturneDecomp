// Name: core_cloth.cpp_SClothVertex_dtor_FUN_0043e440
// Address: 0043e440
// Address Range: [[0043e440, 0043e459]]
// Convention: __cdecl
// Signature: SClothVertex * __cdecl core_cloth_cpp_SClothVertex_dtor_FUN_0043e440(SClothVertex *this_ptr)

#include "nocturne.h"

SClothVertex * __cdecl core_cloth_cpp_SClothVertex_dtor_FUN_0043e440(SClothVertex *this_ptr)

{
  int iVar1;
  
  iVar1 = core_cloth_cpp_freeVectors_FUN_0043e460((CVector3f **)this_ptr->unk2);
  return (SClothVertex *)(iVar1 + -0xec);
}
