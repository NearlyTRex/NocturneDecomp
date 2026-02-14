// Name: shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0
// Address: 0051a8c0
// Address Range: [[0051a8c0, 0051a97f]]
// Convention: __cdecl
// Signature: CLodMesh * __cdecl shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(CLodMesh *this_ptr,CLodMesh *source_mesh)

#include "nocturne.h"

CLodMesh * __cdecl shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(CLodMesh *this_ptr,CLodMesh *source_mesh)

{
  uint uVar1;
  int iVar2;
  CLodVert *pCVar3;
  CLodFace *pCVar4;
  SLodSubmesh *pSVar5;
  int *piVar6;
  CLodVert *pCVar7;
  CLodFace *pCVar8;
  SLodSubmesh *pSVar9;
  int *piVar10;
  byte bVar11;
  
  bVar11 = 0;
  shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0
            (this_ptr,source_mesh->vertex_count,source_mesh->tri_count,source_mesh->submesh_count);
  pCVar3 = source_mesh->vertex_data;
  pCVar7 = this_ptr->vertex_data;
  for (uVar1 = (uint)(this_ptr->vertex_count * 0x4c4) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    (pCVar7->position).x = (pCVar3->position).x;
    pCVar3 = (CLodVert *)((int)pCVar3 + (uint)bVar11 * -8 + 4);
    pCVar7 = (CLodVert *)((int)pCVar7 + (uint)bVar11 * -8 + 4);
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(byte *)&(pCVar7->position).x = *(byte *)&(pCVar3->position).x;
    pCVar3 = (CLodVert *)((int)pCVar3 + (uint)bVar11 * -2 + 1);
    pCVar7 = (CLodVert *)((int)pCVar7 + (uint)bVar11 * -2 + 1);
  }
  pCVar4 = source_mesh->tri_data;
  pCVar8 = this_ptr->tri_data;
  for (uVar1 = this_ptr->tri_count * 0x23 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    pCVar8->attribute_indices[0] = pCVar4->attribute_indices[0];
    pCVar4 = (CLodFace *)((int)pCVar4 + (uint)bVar11 * -8 + 4);
    pCVar8 = (CLodFace *)((int)pCVar8 + (uint)bVar11 * -8 + 4);
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(char *)pCVar8->attribute_indices = (char)pCVar4->attribute_indices[0];
    pCVar4 = (CLodFace *)((int)pCVar4 + (uint)bVar11 * -2 + 1);
    pCVar8 = (CLodFace *)((int)pCVar8 + (uint)bVar11 * -2 + 1);
  }
  pSVar5 = source_mesh->submesh_data;
  pSVar9 = this_ptr->submesh_data;
  for (uVar1 = (uint)(this_ptr->submesh_count * 0x48) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint *)pSVar9->unk = *(uint *)pSVar5->unk;
    pSVar5 = (SLodSubmesh *)((int)pSVar5 + (uint)bVar11 * -8 + 4);
    pSVar9 = (SLodSubmesh *)((int)pSVar9 + (uint)bVar11 * -8 + 4);
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    pSVar9->unk[0] = pSVar5->unk[0];
    pSVar5 = (SLodSubmesh *)((int)pSVar5 + (uint)bVar11 * -2 + 1);
    pSVar9 = (SLodSubmesh *)((int)pSVar9 + (uint)bVar11 * -2 + 1);
  }
  this_ptr->active_attribute_count = source_mesh->active_attribute_count;
  this_ptr->sort_attribute_count = source_mesh->sort_attribute_count;
  this_ptr->reserved_attribute_count = source_mesh->reserved_attribute_count;
  piVar6 = source_mesh->attribute_enabled_flags;
  piVar10 = this_ptr->attribute_enabled_flags;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar10 = *piVar6;
    piVar6 = piVar6 + (uint)bVar11 * -2 + 1;
    piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(char *)piVar10 = (char)*piVar6;
    piVar6 = (int *)((int)piVar6 + (uint)bVar11 * -2 + 1);
    piVar10 = (int *)((int)piVar10 + (uint)bVar11 * -2 + 1);
  }
  return this_ptr;
}
