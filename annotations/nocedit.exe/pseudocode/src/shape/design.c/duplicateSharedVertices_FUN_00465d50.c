// Name: shape_design.c_duplicateSharedVertices_FUN_00465d50
// Address: 00465d50
// Address Range: [[00465d50, 00465e8e]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_duplicateSharedVertices_FUN_00465d50(int polygon_index)

#include "nocturne.h"

void __cdecl shape_design_c_duplicateSharedVertices_FUN_00465d50(int polygon_index)

{
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
  
  bVar7 = 0;
  local_24 = 0;
  do {
    if ((int)g_ModelPolygonData[polygon_index].vertex_indices_count <= local_24) {
      return;
    }
    uVar1 = g_ModelPolygonData[polygon_index].vertex_indices[local_24];
    bVar2 = false;
    local_28 = g_ModelPolygonData;
    for (local_20 = 0; local_20 < g_PolygonCount; local_20 = local_20 + 1) {
      if (local_20 != polygon_index) {
        for (local_1c = 0; local_1c < (int)local_28->vertex_indices_count; local_1c = local_1c + 1)
        {
          if (uVar1 == local_28->vertex_indices[local_1c]) {
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
        g_CurrentLineNumber = 0x1d5a;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Cannot add any more points!");
      }
      puVar5 = (uint *)(g_VertexCount * 0x14 + 0x1626410 + (uint)bVar7 * -8);
      puVar3 = (uint *)(uVar1 * 0x14 + 0x1626410 + (uint)bVar7 * -8);
      g_LoadedVertices[g_VertexCount].vertex.x = g_LoadedVertices[uVar1].vertex.x;
      puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar4 = puVar3 + (uint)bVar7 * -2 + 1;
      *puVar5 = *puVar3;
      *puVar6 = *puVar4;
      puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
      (puVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
           (puVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
      g_ModelPolygonData[polygon_index].vertex_indices[local_24] = g_VertexCount;
      g_VertexCount = g_VertexCount + 1;
    }
    local_24 = local_24 + 1;
  } while( true );
}
