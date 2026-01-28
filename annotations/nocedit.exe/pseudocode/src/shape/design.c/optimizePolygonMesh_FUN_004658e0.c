// Name: shape_design.c_optimizePolygonMesh_FUN_004658e0
// Address: 004658e0
// Address Range: [[004658e0, 00465b3d]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_optimizePolygonMesh_FUN_004658e0 (float angle_tolerance,int strict_mode,int display_progress)

#include "nocturne.h"

void __cdecl
shape_design_c_optimizePolygonMesh_FUN_004658e0
          (float angle_tolerance,int strict_mode,int display_progress)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar7;
  float10 fVar8;
  char local_70 [80];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char *pcVar6;
  
  bVar7 = 0;
  local_14 = g_PolygonCount;
  if (-1 < display_progress) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Scanning polygons...",0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  fVar8 = (float10)fcos((float10)angle_tolerance * (float10)0.01745329252);
  shape_design_c_removeDuplicatePolygons_FUN_004651b0(strict_mode);
  shape_design_c_removeDegeneratePolygons_FUN_00465310();
  do {
    local_18 = g_PolygonCount;
    for (local_20 = 0; local_20 < g_PolygonCount + -1; local_20 = local_20 + 1) {
      iVar3 = local_20;
      if (g_ModelPolygonData[local_20].vertex_indices_count == 3) {
        while ((local_1c = iVar3 + 1, local_1c < g_PolygonCount &&
               (g_ModelPolygonData[local_20].vertex_indices_count == 3))) {
          iVar3 = local_1c;
          if (((g_ModelPolygonData[local_1c].vertex_indices_count == 3) &&
              (((iVar2 = shape_design_c_validatePolygonNormals_FUN_00461d80
                                   (g_ModelPolygonData + local_20,g_ModelPolygonData + local_1c,
                                    (double)(float)fVar8), iVar3 = local_1c, iVar2 != 0 &&
                (iVar2 = shape_design_c_findVertexMatches_FUN_00461ae0
                                   ((int *)g_ModelPolygonData[local_20].vertex_indices,
                                    (int *)g_ModelPolygonData[local_1c].vertex_indices,3,3),
                iVar3 = local_1c, iVar2 != 0)) &&
               (iVar2 = crt_string_c_strcmp_FUN_005fef20
                                  (g_ModelPolygonData[local_20].lightmap_name,
                                   g_ModelPolygonData[local_1c].lightmap_name), iVar3 = local_1c,
               iVar2 == 0)))) &&
             ((strict_mode == 0 ||
              (g_ModelPolygonData[local_20].part_assignment ==
               g_ModelPolygonData[local_1c].part_assignment)))) {
            shape_design_c_mergeTrianglesIntoQuad_FUN_00462190(local_20,local_1c);
            iVar3 = local_1c;
          }
        }
      }
    }
  } while (g_PolygonCount != local_18);
  shape_design_c_removeDuplicatePolygons_FUN_004651b0(strict_mode);
  shape_design_c_removeDegeneratePolygons_FUN_00465310();
  shape_design_c_removeUnusedVertices_FUN_00463830();
  g_PolygonOptimizationPasses = g_PolygonOptimizationPasses + 1;
  crt_stdio_c_sprintf_FUN_005fdbd0
            (local_70,"Original polygons: %d    New total: %d\n\nTotal passes: %d",local_14,g_PolygonCount);
  if (0 < display_progress) {
    pcVar4 = "\n\nHit a key...";
    iVar3 = -1;
    pcVar6 = local_70;
    do {
      pcVar5 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  if (-1 < display_progress) {
    engine_2d_c_drawText_FUN_00401fd0(local_70,0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  if (0 < display_progress) {
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  return;
}
