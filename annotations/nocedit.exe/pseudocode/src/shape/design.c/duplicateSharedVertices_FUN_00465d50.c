// Name: shape_design.c_duplicateSharedVertices_FUN_00465d50
// Address: 00465d50
// Address Range: [[00465d50, 00465e8e] [00604d56, 00604d7c]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_duplicateSharedVertices_FUN_00465d50(int polygon_index)

#include "nocturne.h"

void __cdecl shape_design_c_duplicateSharedVertices_FUN_00465d50(int polygon_index)

{
  uint uVar2;
  int iVar3;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  SShapeEditorPolygon *local_28;
  int local_24;
  int local_20;
  int local_1c;
  bool bVar2;
  uint uVar1;
  
  local_24 = 0;
  do {
    if ((int)g_ModelPolygonData[polygon_index].vertex_indices_count <= local_24) {
      return;
    }
    uVar2 = g_ModelPolygonData[polygon_index].vertex_indices[local_24];
    bVar2 = false;
    local_28 = g_ModelPolygonData;
    for (local_20 = 0; local_20 < g_PolygonCount; local_20 = local_20 + 1) {
      if (local_20 != polygon_index) {
        for (local_1c = 0; local_1c < (int)local_28->vertex_indices_count; local_1c = local_1c + 1)
        {
          if (uVar2 == local_28->vertex_indices[local_1c]) {
            bVar2 = true;
            goto LAB_00465e13;
          }
        }
      }
      local_28 = local_28 + 1;
    }
LAB_00465e13:
    if (bVar2) {
      if (19999 < g_VertexCount) {
        g_CurrentFilename = "..\\shape\\design.c";
        g_CurrentLineNumber = 7514;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Cannot add any more points!");
      }
      iVar3 = g_VertexCount;
      g_LoadedVertices[g_VertexCount].vertex.x = g_LoadedVertices[uVar2].vertex.x;
      g_LoadedVertices[iVar3].vertex.y = g_LoadedVertices[uVar2].vertex.y;
      g_LoadedVertices[iVar3].vertex.z = g_LoadedVertices[uVar2].vertex.z;
      g_LoadedVertices[iVar3].u = g_LoadedVertices[uVar2].u;
      g_LoadedVertices[iVar3].v = g_LoadedVertices[uVar2].v;
      g_ModelPolygonData[polygon_index].vertex_indices[local_24] = g_VertexCount;
      g_VertexCount = g_VertexCount + 1;
    }
    local_24 = local_24 + 1;
  } while( true );
}
