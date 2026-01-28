// Name: shape_meshlod.cpp_CLodMesh_validateFace_FUN_00519830
// Address: 00519830
// Address Range: [[00519830, 0051986a]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_validateFace_FUN_00519830(CLodMesh *this_ptr,CLodFace *face)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_validateFace_FUN_00519830(CLodMesh *this_ptr,CLodFace *face)

{
  CLodVert *pCVar1;
  int iVar2;
  
  pCVar1 = this_ptr->vertex_data;
  iVar2 = shape_meshlod_cpp_CLodFace_computeNormalAndPlane_FUN_00519870
                    (face,&pCVar1[face->vertex_idx_0].position,&pCVar1[face->vertex_idx_1].position,
                     &pCVar1[face->vertex_idx_2].position);
  return iVar2;
}
