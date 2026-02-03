// Name: core_cloth.cpp_freeClothVertices_FUN_0043e480
// Address: 0043e480
// Address Range: [[0043e480, 0043e497]]
// Convention: __cdecl
// Signature: SClothVertex * __cdecl core_cloth_cpp_freeClothVertices_FUN_0043e480(SClothVertex *array)

#include "nocturne.h"

SClothVertex * __cdecl core_cloth_cpp_freeClothVertices_FUN_0043e480(SClothVertex *array)

{
  SClothVertex *pSVar1;
  
  pSVar1 = __arrfini(array,800,&g_SClothVertexTypeInfo);
  return pSVar1;
}
