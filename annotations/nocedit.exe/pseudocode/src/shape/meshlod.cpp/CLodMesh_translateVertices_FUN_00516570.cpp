// Name: shape_meshlod.cpp_CLodMesh_translateVertices_FUN_00516570
// Address: 00516570
// Address Range: [[00516570, 005165bf]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_translateVertices_FUN_00516570(CLodMesh *this_ptr,CVector3f *offset)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_translateVertices_FUN_00516570(CLodMesh *this_ptr,CVector3f *offset)

{
  CLodVert *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < this_ptr->vertex_count) {
    iVar2 = 0;
    do {
      pCVar1 = this_ptr->vertex_data;
      *(float *)(pCVar1->lod_workspace + iVar2 + -0x10) =
           offset->x + *(float *)(pCVar1->lod_workspace + iVar2 + -0x10);
      *(float *)(pCVar1->lod_workspace + iVar2 + -0xc) =
           offset->y + *(float *)(pCVar1->lod_workspace + iVar2 + -0xc);
      iVar3 = iVar3 + 1;
      *(float *)(pCVar1->lod_workspace + iVar2 + -8) =
           offset->z + *(float *)(pCVar1->lod_workspace + iVar2 + -8);
      iVar2 = iVar2 + 0x4c4;
    } while (iVar3 < this_ptr->vertex_count);
  }
  shape_meshlod_cpp_CLodMesh_validateAndRemoveInvalidFaces_FUN_005197c0(this_ptr);
  return;
}
