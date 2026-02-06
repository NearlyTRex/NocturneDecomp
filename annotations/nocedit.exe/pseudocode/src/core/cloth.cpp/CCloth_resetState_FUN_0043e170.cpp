// Name: core_cloth.cpp_CCloth_resetState_FUN_0043e170
// Address: 0043e170
// Address Range: [[0043e170, 0043e19f]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_resetState_FUN_0043e170(CCloth *this_ptr,int vertex_index)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_resetState_FUN_0043e170(CCloth *this_ptr,int vertex_index)

{
  SClothVertex *pSVar1;
  
  pSVar1 = this_ptr->vertices + vertex_index;
  pSVar1->bone_indices[0] = -1;
  pSVar1->bone_indices[1] = -1;
  pSVar1->bone_indices[2] = -1;
  pSVar1->bone_indices[3] = -1;
  this_ptr->vertices[vertex_index].locked = 0;
  return;
}
