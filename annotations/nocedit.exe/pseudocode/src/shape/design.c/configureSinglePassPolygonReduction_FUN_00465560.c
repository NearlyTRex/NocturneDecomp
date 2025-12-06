// Name: shape_design.c_configureSinglePassPolygonReduction_FUN_00465560
// Address: 00465560
// Address Range: [[00465560, 0046580e]]
// Convention: __cdecl
// Signature: void shape_design.c_configureSinglePassPolygonReduction_FUN_00465560(int ui_mode)

#include "nocturne.h"

void __cdecl shape_design_c_configureSinglePassPolygonReduction_FUN_00465560(int ui_mode)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  byte bVar7;
  float10 fVar8;
  double dVar9;
  byte bVar10;
  ulonglong in_stack_ffffff8c;
  int local_1c;
  int local_18;
  float local_14;
  char *pcVar6;
  
  bVar7 = 0;
  local_1c = 0;
  if (ui_mode < 1) {
    in_stack_ffffff8c = in_stack_ffffff8c & 0xffffffffffffff00;
  }
  else {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (&stack0xffffff8c,0x14,0,0,"Enter tolerance angle [8.5] : ");
  }
  local_14 = 8.5;
  iVar3 = -1;
  pcVar6 = &stack0xffffff8c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    dVar9 = crt_string_c_strtod_FUN_005ff0f3((char *)in_stack_ffffff8c);
    local_14 = (float)dVar9;
  }
  bVar10 = (byte)in_stack_ffffff8c;
  if (0 < ui_mode) {
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (&stack0xffffff8c,0x14,0,0x16,"Ignore different part names? [y] : ");
    iVar3 = crt_ctype_c_toupper_FUN_005ff9e0((uint)bVar10);
    if (iVar3 == 0x4e) {
      local_1c = 1;
    }
  }
  if (-1 < ui_mode) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Scanning polygons...",0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  fVar8 = (float10)fcos((float10)local_14 * (float10)0.01745329252);
  shape_design_c_removeDuplicatePolygons_FUN_004651b0(local_1c);
  shape_design_c_removeDegeneratePolygons_FUN_00465310();
  for (local_18 = 0; local_18 < g_PolygonCount + -1; local_18 = local_18 + 1) {
    iVar3 = local_18 + 1;
    if ((((g_ModelPolygonData[local_18].vertex_indices_count == 3) &&
         (g_ModelPolygonData[iVar3].vertex_indices_count == 3)) &&
        (iVar2 = shape_design_c_validatePolygonNormals_FUN_00461d80
                           (g_ModelPolygonData + local_18,g_ModelPolygonData + iVar3,
                            (double)(float)fVar8), iVar2 != 0)) &&
       (((iVar2 = shape_design_c_findVertexMatches_FUN_00461ae0
                            ((int *)g_ModelPolygonData[local_18].vertex_indices,
                             (int *)g_ModelPolygonData[iVar3].vertex_indices,3,3), iVar2 != 0 &&
         (iVar2 = crt_string_c_strcmp_FUN_005fef20
                            (g_ModelPolygonData[local_18].lightmap_name,
                             g_ModelPolygonData[iVar3].lightmap_name), iVar2 == 0)) &&
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
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff8c,"Original polygons: %d    New total: %d\n\nTotal passes: %d");
  if (0 < ui_mode) {
    pcVar4 = "\n\nHit a key...";
    iVar3 = -1;
    pcVar6 = &stack0xffffff8c;
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
  if (-1 < ui_mode) {
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff8c,0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  }
  if (0 < ui_mode) {
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  return;
}
