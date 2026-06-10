// Name: shape_meshlod.cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080
// Address: 0051b080
// MANUAL RECONSTRUCTION
// Address Range: [[0051b080, 0051b2a2]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080(CLodMesh *this_ptr)

{
  int iVar3;
  int iVar4;
  int iVar6;
  int local_1c;
  int local_18;
  int local_14;
  CLodFace *piVar2;

  iVar4 = 0;
  shape_meshlod_cpp_CLodMesh_free_FUN_00515970(this_ptr);
  for (iVar3 = 0; iVar3 < g_PolygonCount; iVar3 = iVar3 + 1) {
    iVar4 = iVar4 + (int)g_ModelPolygonData[iVar3].vertex_indices_count + -2;
    if (g_ModelPolygonData[iVar3].texture_name[0] != '\0') {
      shape_meshlod_cpp_CLodMesh_findOrAddLodTexture_FUN_00518790
                (this_ptr,g_ModelPolygonData[iVar3].texture_name);
    }
  }
  shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0
            (this_ptr,g_VertexCount,iVar4,this_ptr->lod_texture_count);
  for (iVar6 = 0; iVar6 < this_ptr->vertex_count; iVar6 = iVar6 + 1) {
    this_ptr->vertex_data[iVar6].position = g_LoadedVertices[iVar6].vertex;
  }
  local_18 = 0;
  this_ptr->lod_texture_count = 0;
  for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
    for (local_14 = 2; local_14 < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
         local_14 = local_14 + 1) {
      piVar2 = &this_ptr->tri_data[local_18];
      local_18 = local_18 + 1;
      if (g_ModelPolygonData[local_1c].texture_name[0] == '\0') {
        piVar2->attribute_indices[0] = -1;
      }
      else {
        piVar2->attribute_indices[0] =
             shape_meshlod_cpp_CLodMesh_findOrAddLodTexture_FUN_00518790
                       (this_ptr,g_ModelPolygonData[local_1c].texture_name);
      }
      piVar2->attribute_indices[1] = g_ModelPolygonData[local_1c].part_assignment;
      piVar2->vertex_idx_0 = g_ModelPolygonData[local_1c].vertex_indices[0];
      piVar2->uv_coords[0][0] = g_ModelPolygonData[local_1c].uv_u[0];
      piVar2->uv_coords[0][1] = g_ModelPolygonData[local_1c].uv_v[0];
      piVar2->vertex_idx_1 = g_ModelPolygonData[local_1c].vertex_indices[local_14 + -1];
      piVar2->uv_coords[1][0] = g_ModelPolygonData[local_1c].uv_u[local_14 + -1];
      piVar2->uv_coords[1][1] = g_ModelPolygonData[local_1c].uv_v[local_14 + -1];
      piVar2->vertex_idx_2 = g_ModelPolygonData[local_1c].vertex_indices[local_14];
      piVar2->uv_coords[2][0] = g_ModelPolygonData[local_1c].uv_u[local_14];
      piVar2->uv_coords[2][1] = g_ModelPolygonData[local_1c].uv_v[local_14];
    }
  }
  this_ptr->active_attribute_count = 2;
  this_ptr->sort_attribute_count = 2;
  this_ptr->extra_attribute_count = 0;
  shape_meshlod_cpp_CLodMesh_postprocessMesh_FUN_0051b330(this_ptr);
  return;
}
