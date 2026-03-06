// Name: core_cloth.cpp_SClothVertex_ctor_FUN_0043e420
// Address: 0043e420
// Address Range: [[0043e420, 0043e43e]]
// Convention: __cdecl
// Signature: SClothVertex * __cdecl core_cloth_cpp_SClothVertex_ctor_FUN_0043e420(SClothVertex *this_ptr)

#include "nocturne.h"

SClothVertex * __cdecl core_cloth_cpp_SClothVertex_ctor_FUN_0043e420(SClothVertex *this_ptr)

{
  SClothVertex_ptr_236 pvVar1;
  
  pvVar1 = __arrinit(this_ptr->bone_positions,3,&g_CVectorTypeInfo);
  return ADJ(pvVar1);
}
