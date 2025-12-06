// Name: shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00
// Address: 005d7e00
// Address Range: [[005d7e00, 005d811a]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00()

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
  int iVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  float10 fVar16;
  int in_stack_0000000c;
  uint local_34;
  uint local_2c;
  uint local_28;
  uint *local_24;
  
  g_PolygonCount = 0;
  g_VertexCount = 0;
  crt_memory_c_memset_FUN_005fde40(g_ModelPolygonData,0,0x766880);
  crt_memory_c_memset_FUN_005fde40(g_LoadedVertices,0,400000);
  local_2c = 0;
  if (*(int *)(in_stack_0000000c + 0x38) != 0) {
    do {
      local_24 = (uint *)shape_superopt_cpp_FUN_005cbec0();
      iVar7 = shape_superopt_cpp_FUN_005cbf00();
      local_28 = 0;
      if (local_34 != 0) {
LAB_005d7e9e:
        uVar3 = local_24[1];
        uVar4 = *local_24;
        if (20000 < g_VertexCount + uVar4) {
          g_CurrentFilename = "..\\shape\\superopt.cpp";
          g_CurrentLineNumber = 0x25b3;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many points!");
        }
        uVar9 = 0;
        if (uVar4 != 0) {
          iVar10 = g_VertexCount * 0x14;
          uVar12 = uVar3;
          do {
            uVar9 = uVar9 + 1;
            *(float *)((int)&g_LoadedVertices[0].vertex.x + iVar10) =
                 (float)*(double *)(uVar12 + 0x10);
            *(float *)((int)&g_LoadedVertices[0].vertex.y + iVar10) =
                 (float)*(double *)(uVar12 + 0x18);
            *(float *)((int)&g_LoadedVertices[0].vertex.z + iVar10) =
                 (float)*(double *)(uVar12 + 0x20);
            iVar10 = iVar10 + 0x14;
            uVar12 = uVar12 + 0x60;
          } while (uVar9 < uVar4);
        }
        uVar12 = *(int *)(in_stack_0000000c + 0x34) - 1;
        uVar9 = 1;
        do {
          uVar13 = uVar12;
          if (uVar4 <= uVar12) {
            uVar13 = uVar4 - 1;
          }
          if (19999 < g_PolygonCount) {
            g_CurrentFilename = "..\\shape\\superopt.cpp";
            g_CurrentLineNumber = 0x25c1;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Too many polys!");
          }
          iVar10 = g_PolygonCount;
          g_ModelPolygonData[g_PolygonCount].polygon_type = 1;
          g_ModelPolygonData[iVar10].part_assignment = 0;
          pcVar15 = g_ModelPolygonData[iVar10].texture_name;
          pcVar14 = &DAT_03f6bbf0 + iVar7 * 0x50;
          do {
            cVar2 = *pcVar14;
            *pcVar15 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar14[1];
            pcVar14 = pcVar14 + 2;
            pcVar15[1] = cVar2;
            pcVar15 = pcVar15 + 2;
          } while (cVar2 != '\0');
          pcVar15 = g_ModelPolygonData[g_PolygonCount].lightmap_name;
          pcVar14 = &DAT_03f6bbf0 + iVar7 * 0x50;
          do {
            cVar2 = *pcVar14;
            *pcVar15 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar14[1];
            pcVar14 = pcVar14 + 2;
            pcVar15[1] = cVar2;
            pcVar15 = pcVar15 + 2;
          } while (cVar2 != '\0');
          iVar6 = g_PolygonCount;
          iVar8 = g_PolygonCount * 0x184;
          g_ModelPolygonData[g_PolygonCount].vertex_indices[0] = g_VertexCount;
          fVar16 = (float10)256;
          g_ModelPolygonData[iVar6].uv_u[0] = (float)((float10)*(double *)(uVar3 + 0x40) * fVar16);
          iVar5 = g_VertexCount;
          iVar11 = uVar9 * 0x60 + uVar3;
          iVar10 = uVar9 + g_VertexCount;
          uVar9 = 1;
          g_ModelPolygonData[iVar6].uv_v[0] = (float)((float10)*(double *)(uVar3 + 0x48) * fVar16);
          if (iVar10 <= (int)(iVar5 + uVar13)) {
            fVar16 = (float10)256;
            do {
              *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar8 + 4) = iVar10;
              *(float *)((int)g_ModelPolygonData[0].uv_u + iVar8 + 4) =
                   (float)((float10)*(double *)(iVar11 + 0x40) * fVar16);
              pdVar1 = (double *)(iVar11 + 0x48);
              uVar9 = uVar9 + 1;
              iVar11 = iVar11 + 0x60;
              iVar10 = iVar10 + 1;
              *(float *)((int)g_ModelPolygonData[0].uv_v + iVar8 + 4) =
                   (float)((float10)*pdVar1 * fVar16);
              iVar8 = iVar8 + 4;
            } while (iVar10 <= (int)(iVar5 + uVar13));
          }
          g_ModelPolygonData[iVar6].vertex_indices_count = uVar9;
          g_PolygonCount = g_PolygonCount + 1;
          if (uVar4 - 1 <= uVar13) goto LAB_005d80e9;
          uVar12 = uVar13 + *(int *)(in_stack_0000000c + 0x34) + -2;
          uVar9 = uVar13;
        } while( true );
      }
LAB_005d80b9:
      local_2c = local_2c + 1;
    } while (local_2c < *(uint *)(in_stack_0000000c + 0x38));
  }
  shape_design_c_calculateVertexNormals_FUN_0045be40();
  return;
LAB_005d80e9:
  local_24 = local_24 + 2;
  g_VertexCount = g_VertexCount + uVar4;
  local_28 = local_28 + 1;
  if (local_34 <= local_28) goto LAB_005d80b9;
  goto LAB_005d7e9e;
}
