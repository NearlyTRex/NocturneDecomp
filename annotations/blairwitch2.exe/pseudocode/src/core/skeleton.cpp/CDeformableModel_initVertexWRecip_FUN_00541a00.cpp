// Name: core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_00541a00
// Address: 00541a00
// Address Range: [[00541a00, 00541a50]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_00541a00(CDeformableModel *this_ptr,int lod_index,CVector3i *lod_vertices)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_00541a00(CDeformableModel *this_ptr,int lod_index,CVector3i *lod_vertices)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < this_ptr->vertex_count[lod_index]) {
    do {
      *(uint *)(*DAT_0060b280 + 0x2c + iVar1) = _DAT_01c38aec;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x30;
    } while (iVar2 < this_ptr->vertex_count[lod_index]);
  }
  return;
}
