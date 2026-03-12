// Name: shape_superopt.cpp_COptimize_exportOptimizeGeometry_FUN_005d7e00
// Address: 005d7e00
// Address Range: [[005d7e00, 005d811a]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_COptimize_exportOptimizeGeometry_FUN_005d7e00(COptimize *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_COptimize_exportOptimizeGeometry_FUN_005d7e00(COptimize *this_ptr)

{
  char cVar1;
  uint *puVar2;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar5;
  uint uVar9;
  int iVar10;
  uint uVar6;
  uint uVar7;
  char *pcVar11;
  char *pcVar8;
  char *pcVar12;
  char *pcVar9;
  float10 fVar13;
  float10 fVar10;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint *local_2c;
  int local_28;
  char *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  char cVar2;
  double *pdVar1;
  int iVar3;
  CComplexPolygon *this_ptr_00;
  int iVar4;
  
  g_PolygonCount = 0;
  g_VertexCount = 0;
  memset(g_ModelPolygonData,0,0x766880);
  memset(g_LoadedVertices,0,400000);
  local_34 = 0;
  if (this_ptr->complex_polygon_count != 0) {
    local_38 = 0;
    do {
      this_ptr_00 = *(CComplexPolygon **)((int)this_ptr->complex_polygons + local_38);
      puVar5 = shape_superopt_cpp_CComplexPolygon_getConvexSubChains_FUN_005cbec0
                         (this_ptr_00,(int *)&local_3c);
      iVar6 = shape_superopt_cpp_CComplexPolygon_getMaterialId_FUN_005cbf00(this_ptr_00);
      local_24 = g_TriListTextureNames[iVar6];
      local_30 = 0;
      puVar2 = puVar5;
      if (local_3c != 0) {
LAB_005d7e9e:
        local_2c = puVar2;
        local_14 = local_2c[1];
        local_1c = *local_2c;
        if (20000 < g_VertexCount + local_1c) {
          g_CurrentFilename = "..\\shape\\superopt.cpp";
          g_CurrentLineNumber = 0x25b3;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many points!");
        }
        uVar8 = 0;
        if (local_1c != 0) {
          iVar5 = g_VertexCount * 0x14;
          uVar9 = local_14;
          do {
            uVar8 = uVar8 + 1;
            *(float *)((int)&g_LoadedVertices[0].vertex.x + iVar5) =
                 (float)*(double *)(uVar9 + 0x10);
            *(float *)((int)&g_LoadedVertices[0].vertex.y + iVar5) =
                 (float)*(double *)(uVar9 + 0x18);
            *(float *)((int)&g_LoadedVertices[0].vertex.z + iVar5) =
                 (float)*(double *)(uVar9 + 0x20);
            iVar5 = iVar5 + 0x14;
            uVar9 = uVar9 + 0x60;
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
          pcVar12 = g_ModelPolygonData[iVar5].texture_name;
          pcVar11 = local_24;
          do {
            cVar2 = *pcVar11;
            *pcVar12 = cVar2;
            if (cVar2 == '\0') break;
            cVar1 = pcVar11[1];
            pcVar11 = pcVar11 + 2;
            pcVar12[1] = cVar1;
            pcVar12 = pcVar12 + 2;
          } while (cVar1 != '\0');
          pcVar9 = g_ModelPolygonData[g_PolygonCount].lightmap_name;
          pcVar8 = local_24;
          do {
            cVar1 = *pcVar8;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
          iVar4 = g_PolygonCount;
          local_28 = g_PolygonCount * 0x184;
          g_ModelPolygonData[g_PolygonCount].vertex_indices[0] = g_VertexCount;
          fVar13 = (float10)256;
          g_ModelPolygonData[iVar4].uv_u[0] =
               (float)((float10)*(double *)(local_14 + 0x40) * fVar13);
          iVar3 = g_VertexCount;
          iVar10 = local_18 * 0x60 + local_14;
          iVar5 = local_18 + g_VertexCount;
          uVar6 = 1;
          g_ModelPolygonData[iVar4].uv_v[0] =
               (float)((float10)*(double *)(local_14 + 0x48) * fVar13);
          if (iVar5 <= (int)(iVar3 + uVar7)) {
            fVar10 = (float10)256;
            iVar7 = local_28;
            do {
              iVar7 = iVar7 + 4;
              *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar7 + 4) = iVar5;
              *(float *)((int)g_ModelPolygonData[0].uv_u + iVar7 + 4) =
                   (float)((float10)*(double *)(iVar10 + 0x40) * fVar10);
              pdVar1 = (double *)(iVar10 + 0x48);
              uVar6 = uVar6 + 1;
              iVar10 = iVar10 + 0x60;
              iVar5 = iVar5 + 1;
              *(float *)((int)g_ModelPolygonData[0].uv_v + iVar7 + 4) =
                   (float)((float10)*pdVar1 * fVar10);
              iVar7 = iVar7;
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
      local_38 = local_38 + 4;
      local_34 = local_34 + 1;
    } while (local_34 < (uint)this_ptr->complex_polygon_count);
  }
  shape_design_c_calculateVertexNormals_FUN_0045be40();
  return;
LAB_005d80e9:
  local_2c = local_2c + 2;
  g_VertexCount = g_VertexCount + local_1c;
  local_30 = local_30 + 1;
  puVar2 = local_2c;
  if (local_3c <= local_30) goto LAB_005d80b9;
  goto LAB_005d7e9e;
}
