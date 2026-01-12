// Name: shape_design.c_deletePolygonRange_FUN_0045dd70
// Address: 0045dd70
// Address Range: [[0045dd70, 0045de7d]]
// Convention: unknown
// Signature: undefined shape_design.c_deletePolygonRange_FUN_0045dd70()

#include "nocturne.h"

void shape_design_c_deletePolygonRange_FUN_0045dd70(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  SShapeEditorPolygon *pSVar3;
  char *pcVar4;
  SShapeEditorPolygon *pSVar5;
  byte bVar6;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff90,0x32,0,0,"Polygon range #s to delete (a,b) : ");
  iVar2 = -1;
  pcVar4 = &stack0xffffff90;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if ((iVar2 != -2) &&
     (local_14 = crt_stdio_c_sscanf_FUN_0060013c
                           (&stack0xffffff90,"%d,%d",&local_1c,&local_18), local_14 == 2)) {
    if ((local_18 < local_1c) || ((local_1c < 0 || (g_PolygonCount <= local_18)))) {
      engine_2d_c_drawText_FUN_00401fd0("Bad range.  Hit a key...",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      for (local_14 = 0; local_14 < (local_18 - local_1c) + 1; local_14 = local_14 + 1) {
        for (local_20 = local_1c; local_20 < g_PolygonCount + -1; local_20 = local_20 + 1) {
          pSVar3 = g_ModelPolygonData + local_20 + 1;
          pSVar5 = g_ModelPolygonData + local_20;
          for (iVar2 = 0x61; iVar2 != 0; iVar2 = iVar2 + -1) {
            pSVar5->polygon_type = pSVar3->polygon_type;
            pSVar3 = (SShapeEditorPolygon *)((int)pSVar3 + ((uint)bVar6 * -2 + 1) * 4);
            pSVar5 = (SShapeEditorPolygon *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
          }
        }
        g_PolygonCount = g_PolygonCount + -1;
      }
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
  }
  return;
}
