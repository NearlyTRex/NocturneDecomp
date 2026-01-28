// Name: shape_design.c_triangulateDSE_FUN_0046e4d0
// Address: 0046e4d0
// Address Range: [[0046e4d0, 0046e6a4]]
// Convention: unknown
// Signature: void shape_design_c_triangulateDSE_FUN_0046e4d0(void)

#include "nocturne.h"

/* Signature: byte shape_design.c_triangulateDSE(uint param_1) */

void shape_design_c_triangulateDSE_FUN_0046e4d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SShapeEditorPolygon *pSVar4;
  SShapeEditorPolygon *pSVar5;
  SShapeEditorPolygon *pSVar6;
  SShapeEditorPolygon *pSVar7;
  byte bVar8;
  uint in_stack_00000004;
  int local_24;
  int local_1c;
  int local_14;
  
  iVar1 = g_PolygonCount;
  bVar8 = 0;
  for (local_14 = 0; local_14 < iVar1; local_14 = local_14 + 1) {
    pSVar4 = g_ModelPolygonData + local_14;
    if ((int)in_stack_00000004 < (int)g_ModelPolygonData[local_14].vertex_indices_count) {
      local_1c = in_stack_00000004 - 1;
      while (local_1c < (int)(g_ModelPolygonData[local_14].vertex_indices_count - 1)) {
        if (19999 < g_PolygonCount) {
          g_CurrentFilename = "..\\shape\\design.c";
          g_CurrentLineNumber = 0x2c8f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("triangulateDSE - too many faces!");
        }
        iVar2 = g_PolygonCount;
        pSVar5 = g_ModelPolygonData + g_PolygonCount;
        g_PolygonCount = g_PolygonCount + 1;
        pSVar6 = pSVar4;
        pSVar7 = pSVar5;
        for (iVar3 = 0x61; iVar3 != 0; iVar3 = iVar3 + -1) {
          pSVar7->polygon_type = pSVar6->polygon_type;
          pSVar6 = (SShapeEditorPolygon *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
          pSVar7 = (SShapeEditorPolygon *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
        }
        g_ModelPolygonData[iVar2].vertex_indices[1] = pSVar4->vertex_indices[local_1c];
        g_ModelPolygonData[iVar2].uv_u[1] = pSVar4->uv_u[local_1c];
        g_ModelPolygonData[iVar2].uv_v[1] = pSVar4->uv_v[local_1c];
        g_ModelPolygonData[iVar2].vertex_indices_count =
             (g_ModelPolygonData[local_14].vertex_indices_count - local_1c) + 1;
        if ((int)in_stack_00000004 < (int)g_ModelPolygonData[iVar2].vertex_indices_count) {
          g_ModelPolygonData[iVar2].vertex_indices_count = in_stack_00000004;
        }
        for (local_24 = 2; local_24 < (int)g_ModelPolygonData[iVar2].vertex_indices_count;
            local_24 = local_24 + 1) {
          pSVar5->vertex_indices[local_24] = pSVar4->vertex_indices[local_1c + 1];
          pSVar5->uv_u[local_24] = pSVar4->uv_u[local_1c + 1];
          pSVar5->uv_v[local_24] = pSVar4->uv_v[local_1c + 1];
          local_1c = local_1c + 1;
        }
      }
      g_ModelPolygonData[local_14].vertex_indices_count = in_stack_00000004;
    }
  }
  return;
}
