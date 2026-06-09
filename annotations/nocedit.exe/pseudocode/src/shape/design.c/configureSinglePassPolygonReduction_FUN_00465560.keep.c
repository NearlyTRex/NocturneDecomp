// Name: shape_design.c_configureSinglePassPolygonReduction_FUN_00465560
// Address: 00465560
// MANUAL RECONSTRUCTION
// Address Range: [[00465560, 0046580e]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_configureSinglePassPolygonReduction_FUN_00465560(int ui_mode)

#include "nocturne.h"

void __cdecl shape_design_c_configureSinglePassPolygonReduction_FUN_00465560(int ui_mode)

{
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar7;
  double dVar8;
  byte local_74 [80];
  int local_1c;
  int local_18;
  float local_14;
  
  iVar5 = g_PolygonCount;
  local_1c = 0;
  if (ui_mode < 1) {
    local_74[0] = 0;
  }
  else {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              ((char *)local_74,0x14,0,0,"Enter tolerance angle [8.5] : ");
  }
  local_14 = 8.5;
  if (strlen((char *)local_74) != 0) {
    dVar8 = _strtod((char *)local_74);
    local_14 = (float)dVar8;
  }
  if (0 < ui_mode) {
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              ((char *)local_74,0x14,0,0x16,"Ignore different part names? [y] : ");
    iVar3 = toupper((uint)local_74[0]);
    if (iVar3 == 0x4e) {
      local_1c = 1;
    }
  }
  if (-1 < ui_mode) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Scanning polygons...",0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  fVar7 = (float10)fcos((float10)local_14 * (float10)0.01745329252);
  shape_design_c_removeDuplicatePolygons_FUN_004651b0(local_1c);
  shape_design_c_removeDegeneratePolygons_FUN_00465310();
  for (local_18 = 0; local_18 < g_PolygonCount + -1; local_18 = local_18 + 1) {
    iVar3 = local_18 + 1;
    if ((((g_ModelPolygonData[local_18].vertex_indices_count == 3) &&
         (g_ModelPolygonData[iVar3].vertex_indices_count == 3)) &&
        (iVar4 = shape_design_c_validatePolygonNormals_FUN_00461d80
                           (g_ModelPolygonData + local_18,g_ModelPolygonData + iVar3,
                            (double)(float)fVar7), iVar4 != 0)) &&
       (((iVar4 = shape_design_c_findVertexMatches_FUN_00461ae0
                            ((int *)g_ModelPolygonData[local_18].vertex_indices,
                             (int *)g_ModelPolygonData[iVar3].vertex_indices,3,3), iVar4 != 0 &&
         (iVar4 = _strcmp
                            (g_ModelPolygonData[local_18].lightmap_name,
                             g_ModelPolygonData[iVar3].lightmap_name), iVar4 == 0)) &&
        ((local_1c == 0 ||
         (g_ModelPolygonData[local_18].part_assignment == g_ModelPolygonData[iVar3].part_assignment)
         ))))) {
      shape_design_c_mergeTrianglesIntoQuad_FUN_00462190(local_18,iVar3);
    }
  }
  shape_design_c_removeDuplicatePolygons_FUN_004651b0(local_1c);
  shape_design_c_removeDegeneratePolygons_FUN_00465310();
  shape_design_c_removeUnusedVertices_FUN_00463830();
  g_PolygonOptimizationPasses = g_PolygonOptimizationPasses + 1;
  _sprintf
            ((char *)local_74,"Original polygons: %d    New total: %d\n\nTotal passes: %d",iVar5,g_PolygonCount,g_PolygonOptimizationPasses);
  if (0 < ui_mode) {
    strcat((char *)local_74,"\n\nHit a key...");
  }
  if (-1 < ui_mode) {
    engine_2d_c_drawText_FUN_00401fd0((char *)local_74,0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  if (0 < ui_mode) {
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  return;
}
