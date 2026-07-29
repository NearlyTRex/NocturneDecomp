// Name: core_cloth.cpp_SClothVertex_ctor_FUN_004389a0
// Address: 004389a0
// Address Range: [[004389a0, 004389be]]
// Convention: __cdecl
// Signature: SClothVertex * __cdecl core_cloth_cpp_SClothVertex_ctor_FUN_004389a0(SClothVertex *this_ptr)

#include "nocturne.h"

SClothVertex * __cdecl core_cloth_cpp_SClothVertex_ctor_FUN_004389a0(SClothVertex *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = __arrinit
                     (this_ptr->bone_positions,3,&g_CVectorTypeInfo_005993b0);
  return (SClothVertex *)((int)pvVar1 + -0xec);
}
