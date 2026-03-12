// Name: shape_meshlod.cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080
// Address: 0051b080
// Address Range: [[0051b080, 0051b2a2]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080(CLodMesh *this_ptr)

{
  int iVar2;
  int iVar1;
  int iVar5;
  int *piVar2;
  int iVar3;
  int iVar6;
  int iVar4;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar4 = 0;
  iVar3 = 0;
  shape_meshlod_cpp_CLodMesh_free_FUN_00515970(this_ptr);
  if (0 < g_PolygonCount) {
    iVar1 = 0;
    do {
      iVar4 = iVar4 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar1 + -0x14) + -2;
      if (g_ModelPolygonData[0].texture_name[iVar1] != '\0') {
        shape_meshlod_cpp_CLodMesh_findOrAddLodTexture_FUN_00518790
                  (this_ptr,g_ModelPolygonData[0].texture_name + iVar1);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x184;
    } while (iVar3 < g_PolygonCount);
  }
  shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0
            (this_ptr,g_VertexCount,iVar4,this_ptr->lod_texture_count);
  iVar6 = 0;
  if (0 < this_ptr->vertex_count) {
    iVar2 = 0;
    iVar5 = 0;
    do {
      *(uint *)(this_ptr->vertex_data->lod_workspace + iVar5 + -0x10) =
           *(uint *)((int)&g_LoadedVertices[0].vertex.x + iVar2);
      *(uint *)(this_ptr->vertex_data->lod_workspace + iVar5 + -0xc) =
           *(uint *)((int)&g_LoadedVertices[0].vertex.y + iVar2);
      *(uint *)(this_ptr->vertex_data->lod_workspace + iVar5 + -8) =
           *(uint *)((int)&g_LoadedVertices[0].vertex.z + iVar2);
      iVar5 = iVar5 + 0x4c4;
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar6 < this_ptr->vertex_count);
  }
  iVar6 = g_PolygonCount;
  local_18 = 0;
  local_1c = 0;
  this_ptr->lod_texture_count = 0;
  if (0 < iVar6) {
    do {
      iVar6 = local_18 * 0x8c;
      local_14 = 2;
      if (2 < (int)g_ModelPolygonData[local_1c].vertex_indices_count) {
        iVar2 = local_1c * 0x184 + 8;
        do {
          local_18 = local_18 + 1;
          piVar2 = (int *)((int)this_ptr->tri_data->attribute_indices + iVar6);
          iVar6 = iVar6 + 0x8c;
          if (g_ModelPolygonData[local_1c].texture_name[0] == '\0') {
            *piVar2 = -1;
          }
          else {
            iVar5 = shape_meshlod_cpp_CLodMesh_findOrAddLodTexture_FUN_00518790
                              (this_ptr,g_ModelPolygonData[local_1c].texture_name);
            *piVar2 = iVar5;
          }
          piVar2[1] = g_ModelPolygonData[local_1c].part_assignment;
          piVar2[4] = g_ModelPolygonData[local_1c].vertex_indices[0];
          piVar2[7] = (int)g_ModelPolygonData[local_1c].uv_u[0];
          piVar2[8] = (int)g_ModelPolygonData[local_1c].uv_v[0];
          piVar2[5] = *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar2 + -4);
          piVar2[9] = *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar2 + 0x3c);
          piVar2[10] = *(int *)((int)g_ModelPolygonData[0].uv_u + iVar2 + 0x3c);
          piVar2[6] = *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar2);
          piVar2[0xb] = *(int *)((int)g_ModelPolygonData[0].uv_u + iVar2);
          local_14 = local_14 + 1;
          piVar2[0xc] = *(int *)((int)g_ModelPolygonData[0].uv_v + iVar2);
          iVar2 = iVar2 + 4;
        } while (local_14 < (int)g_ModelPolygonData[local_1c].vertex_indices_count);
      }
      local_1c = local_1c + 1;
    } while (local_1c < g_PolygonCount);
  }
  this_ptr->active_attribute_count = 2;
  this_ptr->sort_attribute_count = 2;
  this_ptr->extra_attribute_count = 0;
  shape_meshlod_cpp_CLodMesh_postprocessMesh_FUN_0051b330(this_ptr);
  return;
}
