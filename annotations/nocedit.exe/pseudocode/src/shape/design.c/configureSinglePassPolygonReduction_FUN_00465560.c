// Name: shape_design.c_configureSinglePassPolygonReduction_FUN_00465560
// Address: 00465560
// Address Range: [[00465560, 0046580e]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_configureSinglePassPolygonReduction_FUN_00465560(int ui_mode)

#include "nocturne.h"

void __cdecl shape_design_c_configureSinglePassPolygonReduction_FUN_00465560(int ui_mode)

{
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar2;
  int iVar5;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar6;
  byte bVar6;
  float10 fVar7;
  double dVar8;
  byte local_74 [80];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  byte *pbVar5;
  byte bVar1;
  
  iVar5 = g_PolygonCount;
  bVar6 = 0;
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
  iVar2 = -1;
  pbVar6 = local_74;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + (uint)bVar6 * -2 + 1;
  } while (bVar1 != 0);
  if (iVar2 != -2) {
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
            ((char *)local_74,"Original polygons: %d    New total: %d\n\nTotal passes: %d",iVar5,g_PolygonCount);
  if (0 < ui_mode) {
    pcVar3 = "\n\nHit a key...";
    iVar5 = -1;
    pbVar4 = local_74;
    do {
      pbVar4 = pbVar4;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pbVar4 = pbVar4 + (uint)bVar6 * -2 + 1;
      bVar2 = *pbVar4;
      pbVar4 = pbVar4;
    } while (bVar2 != 0);
    pbVar6 = pbVar4 + -1;
    do {
      bVar2 = *pcVar3;
      *pbVar6 = bVar2;
      if (bVar2 == 0) break;
      bVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pbVar6[1] = bVar2;
      pbVar6 = pbVar6 + 2;
    } while (bVar2 != 0);
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
