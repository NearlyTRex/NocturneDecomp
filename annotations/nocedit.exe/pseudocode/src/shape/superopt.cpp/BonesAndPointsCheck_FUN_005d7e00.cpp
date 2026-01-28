// Name: shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00
// Address: 005d7e00
// Address Range: [[005d7e00, 005d811a]]
// Convention: unknown
// Signature: void shape_superopt_cpp_BonesAndPointsCheck_FUN_005d7e00(void)

#include "nocturne.h"

void shape_superopt_cpp_BonesAndPointsCheck_FUN_005d7e00(void)

{
  double *pdVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  float10 fVar15;
  int in_stack_00000004;
  uint local_3c;
  uint local_34;
  uint local_30;
  uint *local_2c;
  uint local_18;
  
  g_PolygonCount = 0;
  g_VertexCount = 0;
  crt_memory_c_memset_FUN_005fde40(g_ModelPolygonData,0,0x766880);
  crt_memory_c_memset_FUN_005fde40(g_LoadedVertices,0,400000);
  local_34 = 0;
  if (*(int *)(in_stack_00000004 + 0x38) != 0) {
    do {
      local_2c = (uint *)shape_superopt_cpp_FUN_005cbec0();
      iVar7 = shape_superopt_cpp_FUN_005cbf00();
      local_30 = 0;
      if (local_3c != 0) {
LAB_005d7e9e:
        uVar3 = local_2c[1];
        uVar4 = *local_2c;
        if (20000 < g_VertexCount + uVar4) {
          g_CurrentFilename = "..\\shape\\superopt.cpp";
          g_CurrentLineNumber = 0x25b3;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many points!");
        }
        uVar9 = 0;
        if (uVar4 != 0) {
          iVar10 = g_VertexCount * 0x14;
          uVar11 = uVar3;
          do {
            uVar9 = uVar9 + 1;
            *(float *)((int)&g_LoadedVertices[0].vertex.x + iVar10) =
                 (float)*(double *)(uVar11 + 0x10);
            *(float *)((int)&g_LoadedVertices[0].vertex.y + iVar10) =
                 (float)*(double *)(uVar11 + 0x18);
            *(float *)((int)&g_LoadedVertices[0].vertex.z + iVar10) =
                 (float)*(double *)(uVar11 + 0x20);
            iVar10 = iVar10 + 0x14;
            uVar11 = uVar11 + 0x60;
          } while (uVar9 < uVar4);
        }
        local_18 = 1;
        uVar9 = *(int *)(in_stack_00000004 + 0x34) - 1;
        do {
          uVar11 = uVar9;
          if (uVar4 <= uVar9) {
            uVar11 = uVar4 - 1;
          }
          if (19999 < g_PolygonCount) {
            g_CurrentFilename = "..\\shape\\superopt.cpp";
            g_CurrentLineNumber = 0x25c1;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Too many polys!");
          }
          iVar10 = g_PolygonCount;
          g_ModelPolygonData[g_PolygonCount].polygon_type = 1;
          g_ModelPolygonData[iVar10].part_assignment = 0;
          pcVar14 = g_ModelPolygonData[iVar10].texture_name;
          pcVar13 = &DAT_03f6bbf0 + iVar7 * 0x50;
          do {
            cVar2 = *pcVar13;
            *pcVar14 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar13[1];
            pcVar13 = pcVar13 + 2;
            pcVar14[1] = cVar2;
            pcVar14 = pcVar14 + 2;
          } while (cVar2 != '\0');
          pcVar14 = g_ModelPolygonData[g_PolygonCount].lightmap_name;
          pcVar13 = &DAT_03f6bbf0 + iVar7 * 0x50;
          do {
            cVar2 = *pcVar13;
            *pcVar14 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar13[1];
            pcVar13 = pcVar13 + 2;
            pcVar14[1] = cVar2;
            pcVar14 = pcVar14 + 2;
          } while (cVar2 != '\0');
          iVar6 = g_PolygonCount;
          iVar8 = g_PolygonCount * 0x184;
          g_ModelPolygonData[g_PolygonCount].vertex_indices[0] = g_VertexCount;
          fVar15 = (float10)256;
          g_ModelPolygonData[iVar6].uv_u[0] = (float)((float10)*(double *)(uVar3 + 0x40) * fVar15);
          iVar5 = g_VertexCount;
          iVar12 = local_18 * 0x60 + uVar3;
          iVar10 = local_18 + g_VertexCount;
          uVar9 = 1;
          g_ModelPolygonData[iVar6].uv_v[0] = (float)((float10)*(double *)(uVar3 + 0x48) * fVar15);
          if (iVar10 <= (int)(iVar5 + uVar11)) {
            fVar15 = (float10)256;
            do {
              *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar8 + 4) = iVar10;
              *(float *)((int)g_ModelPolygonData[0].uv_u + iVar8 + 4) =
                   (float)((float10)*(double *)(iVar12 + 0x40) * fVar15);
              pdVar1 = (double *)(iVar12 + 0x48);
              uVar9 = uVar9 + 1;
              iVar12 = iVar12 + 0x60;
              iVar10 = iVar10 + 1;
              *(float *)((int)g_ModelPolygonData[0].uv_v + iVar8 + 4) =
                   (float)((float10)*pdVar1 * fVar15);
              iVar8 = iVar8 + 4;
            } while (iVar10 <= (int)(iVar5 + uVar11));
          }
          g_ModelPolygonData[iVar6].vertex_indices_count = uVar9;
          g_PolygonCount = g_PolygonCount + 1;
          if (uVar4 - 1 <= uVar11) goto LAB_005d80e9;
          uVar9 = uVar11 + *(int *)(in_stack_00000004 + 0x34) + -2;
          local_18 = uVar11;
        } while( true );
      }
LAB_005d80b9:
      local_34 = local_34 + 1;
    } while (local_34 < *(uint *)(in_stack_00000004 + 0x38));
  }
  shape_design_c_calculateVertexNormals_FUN_0045be40();
  return;
LAB_005d80e9:
  local_2c = local_2c + 2;
  g_VertexCount = g_VertexCount + uVar4;
  local_30 = local_30 + 1;
  if (local_3c <= local_30) goto LAB_005d80b9;
  goto LAB_005d7e9e;
}
