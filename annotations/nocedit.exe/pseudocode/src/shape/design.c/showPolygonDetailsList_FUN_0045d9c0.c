// Name: shape_design.c_showPolygonDetailsList_FUN_0045d9c0
// Address: 0045d9c0
// Address Range: [[0045d9c0, 0045dbdc]]
// Convention: unknown
// Signature: undefined shape_design.c_showPolygonDetailsList_FUN_0045d9c0()

#include "nocturne.h"

void shape_design_c_showPolygonDetailsList_FUN_0045d9c0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  byte bVar8;
  int local_11c [40];
  char local_7c [80];
  char local_2c [12];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  local_1c = 0;
  do {
    if (g_PolygonCount <= local_1c) {
      local_11c[2] = 0x45dbd6;
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
    local_11c[2] = 0x45da06;
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    local_20 = 0;
    for (local_18 = local_1c; local_18 < g_WindowHeight / 0xb + local_1c; local_18 = local_18 + 1) {
      if ((((g_WireframeMode == 0) || (g_CurrentPartIndex == -1)) ||
          (g_ModelPolygonData[local_18].part_assignment == g_CurrentPartIndex)) &&
         (local_18 < g_PolygonCount)) {
        local_11c[0] = local_18;
        crt_stdio_c_sprintf_FUN_005fdbd0((char *)local_11c,"Poly %d :");
        for (local_14 = 0; local_14 < (int)g_ModelPolygonData[local_18].vertex_indices_count;
            local_14 = local_14 + 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (local_2c," %d",g_ModelPolygonData[local_18].vertex_indices[local_14]);
          pcVar4 = local_2c;
          iVar3 = -1;
          piVar7 = local_11c;
          do {
            piVar5 = piVar7;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            piVar5 = (int *)((int)piVar7 + (uint)bVar8 * -2 + 1);
            iVar2 = *piVar7;
            piVar7 = piVar5;
          } while ((char)iVar2 != '\0');
          pcVar6 = (char *)((int)piVar5 + -1);
          do {
            cVar1 = *pcVar4;
            *pcVar6 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 2;
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
          } while (cVar1 != '\0');
        }
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_7c," Part : %s",
                   g_ModelPartNames + g_ModelPolygonData[local_18].part_assignment);
        pcVar4 = local_7c;
        iVar3 = -1;
        piVar7 = local_11c;
        do {
          piVar5 = piVar7;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          piVar5 = (int *)((int)piVar7 + (uint)bVar8 * -2 + 1);
          iVar2 = *piVar7;
          piVar7 = piVar5;
        } while ((char)iVar2 != '\0');
        pcVar6 = (char *)((int)piVar5 + -1);
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_7c," Color : %d",g_ModelPolygonData[local_18].material_id);
        pcVar4 = local_7c;
        iVar3 = -1;
        piVar7 = local_11c;
        do {
          piVar5 = piVar7;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          piVar5 = (int *)((int)piVar7 + (uint)bVar8 * -2 + 1);
          iVar2 = *piVar7;
          piVar7 = piVar5;
        } while ((char)iVar2 != '\0');
        pcVar6 = (char *)((int)piVar5 + -1);
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        engine_2d_c_drawText_FUN_00401fd0((char *)local_11c,0,local_20);
        local_20 = local_20 + 0xb;
      }
    }
    local_11c[0] = 0x45dbc7;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    local_11c[1] = 0x45dbcc;
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    local_1c = local_1c + g_WindowHeight / 0xb;
  } while( true );
}
