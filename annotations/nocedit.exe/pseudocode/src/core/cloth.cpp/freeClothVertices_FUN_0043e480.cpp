// Name: core_cloth.cpp_freeClothVertices_FUN_0043e480
// Address: 0043e480
// Address Range: [[0043e480, 0043e497]]
// Convention: __cdecl
// Signature: int __cdecl core_cloth_cpp_freeClothVertices_FUN_0043e480(SClothVertex **array)

#include "nocturne.h"

int __cdecl core_cloth_cpp_freeClothVertices_FUN_0043e480(SClothVertex **array)

{
  int iVar1;
  
  iVar1 = __arrfini(array,800,&g_SClothVertexTypeInfo);
  return iVar1;
}
