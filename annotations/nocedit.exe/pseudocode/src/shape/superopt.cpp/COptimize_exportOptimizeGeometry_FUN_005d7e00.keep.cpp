// Name: shape_superopt.cpp_COptimize_exportOptimizeGeometry_FUN_005d7e00
// Address: 005d7e00
// MANUAL RECONSTRUCTION
// Address Range: [[005d7e00, 005d811a]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_COptimize_exportOptimizeGeometry_FUN_005d7e00(COptimize *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_COptimize_exportOptimizeGeometry_FUN_005d7e00(COptimize *this_ptr)

{
  SEdgeChainEntry *puVar2;
  SEdgeChainEntry *puVar5;
  int iVar6;
  uint uVar8;
  int iVar5;
  SExpandedEdge *uVar9;
  SExpandedEdge *iVar10;
  uint uVar6;
  uint uVar7;
  SVertexData *pvOut;
  float10 fVar13;
  float10 fVar10;
  int local_3c;
  uint local_34;
  int local_30;
  SEdgeChainEntry *local_2c;
  char *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  SExpandedEdge *local_14;
  int iVar3;
  CComplexPolygon *this_ptr_00;
  int iVar4;
  
  g_PolygonCount = 0;
  g_VertexCount = 0;
  memset(g_ModelPolygonData,0,sizeof(g_ModelPolygonData));
  memset(g_LoadedVertices,0,sizeof(g_LoadedVertices));
  local_34 = 0;
  if (this_ptr->complex_polygon_count != 0) {
    do {
      this_ptr_00 = this_ptr->complex_polygons[local_34];
      puVar5 = shape_superopt_cpp_CComplexPolygon_getConvexSubChains_FUN_005cbec0
                                 (this_ptr_00,&local_3c);
      iVar6 = shape_superopt_cpp_CComplexPolygon_getMaterialId_FUN_005cbf00(this_ptr_00);
      local_24 = g_TriListTextureNames[iVar6];
      local_30 = 0;
      puVar2 = puVar5;
      if (local_3c != 0) {
LAB_005d7e9e:
        local_2c = puVar2;
        local_14 = local_2c->edges;
        local_1c = local_2c->edge_count;
        if (20000 < g_VertexCount + local_1c) {
          g_CurrentFilename = "..\\shape\\superopt.cpp";
          g_CurrentLineNumber = 0x25b3;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many points!");
        }
        uVar8 = 0;
        if (local_1c != 0) {
          pvOut = g_LoadedVertices + g_VertexCount;
          uVar9 = local_14;
          do {
            uVar8 = uVar8 + 1;
            pvOut->vertex.x = (float)uVar9->start_pos.x;
            pvOut->vertex.y = (float)uVar9->start_pos.y;
            pvOut->vertex.z = (float)uVar9->start_pos.z;
            pvOut = pvOut + 1;
            uVar9 = uVar9 + 1;
          } while (uVar8 < local_1c);
        }
        local_18 = 1;
        local_20 = local_1c - 1;
        uVar6 = this_ptr->max_polygon_sides - 1;
        do {
          uVar7 = uVar6;
          if (local_1c <= uVar6) {
            uVar7 = local_20;
          }
          if (19999 < g_PolygonCount) {
            g_CurrentFilename = "..\\shape\\superopt.cpp";
            g_CurrentLineNumber = 0x25c1;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Too many polys!");
          }
          iVar5 = g_PolygonCount;
          g_ModelPolygonData[g_PolygonCount].polygon_type = 1;
          g_ModelPolygonData[iVar5].part_assignment = 0;
          strcpy(g_ModelPolygonData[iVar5].texture_name,local_24);
          strcpy(g_ModelPolygonData[g_PolygonCount].lightmap_name,local_24);
          iVar4 = g_PolygonCount;
          g_ModelPolygonData[g_PolygonCount].vertex_indices[0] = g_VertexCount;
          fVar13 = (float10)256;
          g_ModelPolygonData[iVar4].uv_u[0] =
               (float)((float10)local_14->start_uv[0] * fVar13);
          iVar3 = g_VertexCount;
          iVar10 = local_14 + local_18;
          iVar5 = local_18 + g_VertexCount;
          uVar6 = 1;
          g_ModelPolygonData[iVar4].uv_v[0] =
               (float)((float10)local_14->start_uv[1] * fVar13);
          if (iVar5 <= (int)(iVar3 + uVar7)) {
            fVar10 = (float10)256;
            do {
              g_ModelPolygonData[iVar4].vertex_indices[uVar6] = iVar5;
              g_ModelPolygonData[iVar4].uv_u[uVar6] =
                   (float)((float10)iVar10->start_uv[0] * fVar10);
              g_ModelPolygonData[iVar4].uv_v[uVar6] =
                   (float)((float10)iVar10->start_uv[1] * fVar10);
              iVar10 = iVar10 + 1;
              iVar5 = iVar5 + 1;
              uVar6 = uVar6 + 1;
            } while (iVar5 <= (int)(iVar3 + uVar7));
          }
          g_ModelPolygonData[iVar4].vertex_indices_count = uVar6;
          g_PolygonCount = g_PolygonCount + 1;
          if (local_20 <= uVar7) goto LAB_005d80e9;
          uVar6 = uVar7 + this_ptr->max_polygon_sides + -2;
          local_18 = uVar7;
        } while( true );
      }
LAB_005d80b9:
      local_34 = local_34 + 1;
    } while (local_34 < (uint)this_ptr->complex_polygon_count);
  }
  shape_design_c_calculateVertexNormals_FUN_0045be40();
  return;
LAB_005d80e9:
  local_2c = local_2c + 1;
  g_VertexCount = g_VertexCount + local_1c;
  local_30 = local_30 + 1;
  puVar2 = local_2c;
  if (local_3c <= local_30) goto LAB_005d80b9;
  goto LAB_005d7e9e;
}
