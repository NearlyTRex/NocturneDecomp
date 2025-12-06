// Name: shape_meshlod.cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080
// Address: 0051b080
// Address Range: [[0051b080, 0051b2a2]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080(CLodMesh *this_ptr)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CLodMesh *in_stack_00000008;
  CLodMesh *in_stack_0000000c;
  int local_14;
  
  iVar6 = 0;
  iVar4 = 0;
  shape_meshlod_cpp_CLodMesh_free_FUN_00515970(this_ptr);
  if (0 < g_PolygonCount) {
    iVar2 = 0;
    do {
      iVar6 = iVar6 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar2 + -0x14) + -2;
      if (g_ModelPolygonData[0].texture_name[iVar2] != '\0') {
        shape_meshlod_cpp_CLodMesh_findOrAddSubmesh_FUN_00518790
                  (in_stack_00000008,g_ModelPolygonData[0].texture_name + iVar2);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x184;
    } while (iVar4 < g_PolygonCount);
  }
  shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0
            (in_stack_00000008,g_VertexCount,iVar6,in_stack_00000008->submesh_count);
  iVar4 = 0;
  if (0 < in_stack_00000008->vertex_count) {
    iVar6 = 0;
    iVar2 = 0;
    do {
      *(uint *)(in_stack_0000000c->vertex_data->lod_workspace + iVar2 + -0x10) =
           *(uint *)((int)&g_LoadedVertices[0].vertex.x + iVar6);
      *(uint *)(in_stack_0000000c->vertex_data->lod_workspace + iVar2 + -0xc) =
           *(uint *)((int)&g_LoadedVertices[0].vertex.y + iVar6);
      *(uint *)(in_stack_0000000c->vertex_data->lod_workspace + iVar2 + -8) =
           *(uint *)((int)&g_LoadedVertices[0].vertex.z + iVar6);
      iVar2 = iVar2 + 0x4c4;
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0x14;
    } while (iVar4 < in_stack_0000000c->vertex_count);
  }
  iVar4 = g_PolygonCount;
  iVar6 = 0;
  local_14 = 0;
  in_stack_0000000c->submesh_count = 0;
  if (0 < iVar4) {
    do {
      iVar2 = iVar6 * 0x8c;
      iVar4 = 2;
      if (2 < (int)g_ModelPolygonData[local_14].vertex_indices_count) {
        iVar5 = local_14 * 0x184 + 8;
        do {
          iVar6 = iVar6 + 1;
          piVar3 = (int *)((int)in_stack_0000000c->tri_data->attribute_indices + iVar2);
          iVar2 = iVar2 + 0x8c;
          if (g_ModelPolygonData[local_14].texture_name[0] == '\0') {
            *piVar3 = -1;
          }
          else {
            iVar1 = shape_meshlod_cpp_CLodMesh_findOrAddSubmesh_FUN_00518790
                              (in_stack_0000000c,g_ModelPolygonData[local_14].texture_name);
            *piVar3 = iVar1;
          }
          piVar3[1] = g_ModelPolygonData[local_14].part_assignment;
          piVar3[4] = g_ModelPolygonData[local_14].vertex_indices[0];
          piVar3[7] = (int)g_ModelPolygonData[local_14].uv_u[0];
          piVar3[8] = (int)g_ModelPolygonData[local_14].uv_v[0];
          piVar3[5] = *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar5 + -4);
          piVar3[9] = *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar5 + 0x3c);
          piVar3[10] = *(int *)((int)g_ModelPolygonData[0].uv_u + iVar5 + 0x3c);
          piVar3[6] = *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar5);
          piVar3[0xb] = *(int *)((int)g_ModelPolygonData[0].uv_u + iVar5);
          iVar4 = iVar4 + 1;
          piVar3[0xc] = *(int *)((int)g_ModelPolygonData[0].uv_v + iVar5);
          iVar5 = iVar5 + 4;
        } while (iVar4 < (int)g_ModelPolygonData[local_14].vertex_indices_count);
      }
      local_14 = local_14 + 1;
    } while (local_14 < g_PolygonCount);
  }
  in_stack_0000000c->active_attribute_count = 2;
  in_stack_0000000c->sort_attribute_count = 2;
  in_stack_0000000c->reserved_attribute_count = 0;
  shape_meshlod_cpp_CLodMesh_postprocessMesh_FUN_0051b330(in_stack_0000000c);
  return;
}
