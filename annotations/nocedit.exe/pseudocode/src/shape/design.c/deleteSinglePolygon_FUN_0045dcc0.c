// Name: shape_design.c_deleteSinglePolygon_FUN_0045dcc0
// Address: 0045dcc0
// Address Range: [[0045dcc0, 0045dd6c]]
// Convention: unknown
// Signature: undefined shape_design.c_deleteSinglePolygon_FUN_0045dcc0()

#include "nocturne.h"

void shape_design_c_deleteSinglePolygon_FUN_0045dcc0(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  SShapeEditorPolygon *pSVar3;
  char *pcVar4;
  SShapeEditorPolygon *pSVar5;
  byte bVar6;
  int local_1c;
  
  bVar6 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff94,0x14,0,0,"Polygon # to delete : ");
  iVar2 = -1;
  pcVar4 = &stack0xffffff94;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (((iVar2 != -2) && (local_1c = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff94), -1 < local_1c)
      ) && (local_1c < g_PolygonCount)) {
    for (; local_1c < g_PolygonCount + -1; local_1c = local_1c + 1) {
      pSVar3 = g_ModelPolygonData + local_1c + 1;
      pSVar5 = g_ModelPolygonData + local_1c;
      for (iVar2 = 0x61; iVar2 != 0; iVar2 = iVar2 + -1) {
        pSVar5->polygon_type = pSVar3->polygon_type;
        pSVar3 = (SShapeEditorPolygon *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
        pSVar5 = (SShapeEditorPolygon *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
      }
    }
    g_PolygonCount = g_PolygonCount + -1;
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
