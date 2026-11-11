// Name: core_cloth.cpp_SClothVertex_ctor_FUN_005b1ba0
// Address: 005b1ba0
// Address Range: [[005b1ba0, 005b1bbe]]
// Convention: __cdecl
// Signature: SClothVertex * __cdecl core_cloth_cpp_SClothVertex_ctor_FUN_005b1ba0(SClothVertex *this_ptr)

#include "nocturne.h"

SClothVertex * __cdecl core_cloth_cpp_SClothVertex_ctor_FUN_005b1ba0(SClothVertex *this_ptr)

{
  int iVar1;
  
  iVar1 = __arrinit(this_ptr->bone_positions,3,&g_CVectorTypeInfo);
  return (SClothVertex *)(iVar1 + -0xec);
}
