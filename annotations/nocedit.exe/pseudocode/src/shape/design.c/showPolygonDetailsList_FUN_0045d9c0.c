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
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char local_11c [160];
  char local_7c [80];
  char local_2c [12];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  local_1c = 0;
  do {
    if (g_PolygonCount <= local_1c) {
      local_11c[4] = -0x2a;
      local_11c[5] = -0x25;
      local_11c[6] = 'E';
      local_11c[7] = '\0';
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
    local_11c[4] = '\x06';
    local_11c[5] = -0x26;
    local_11c[6] = 'E';
    local_11c[7] = '\0';
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    local_20 = 0;
    for (local_18 = local_1c; local_18 < g_WindowHeight / 0xb + local_1c; local_18 = local_18 + 1) {
      if ((((g_WireframeMode == 0) || (g_CurrentPartIndex == -1)) ||
          (g_ModelPolygonData[local_18].part_assignment == g_CurrentPartIndex)) &&
         (local_18 < g_PolygonCount)) {
        crt_stdio_c_sprintf_FUN_005fdbd0(local_11c,"Poly %d :",local_18);
        for (local_14 = 0; local_14 < (int)g_ModelPolygonData[local_18].vertex_indices_count;
            local_14 = local_14 + 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (local_2c," %d",g_ModelPolygonData[local_18].vertex_indices[local_14]);
          pcVar3 = local_2c;
          iVar2 = -1;
          pcVar5 = local_11c;
          do {
            pcVar4 = pcVar5;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar4 = pcVar5 + (uint)bVar6 * -2 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar4;
          } while (cVar1 != '\0');
          pcVar4 = pcVar4 + -1;
          do {
            cVar1 = *pcVar3;
            *pcVar4 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar4[1] = cVar1;
            pcVar4 = pcVar4 + 2;
          } while (cVar1 != '\0');
        }
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_7c," Part : %s",
                   g_ModelPartNames + g_ModelPolygonData[local_18].part_assignment);
        pcVar3 = local_7c;
        iVar2 = -1;
        pcVar5 = local_11c;
        do {
          pcVar4 = pcVar5;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar4 = pcVar5 + (uint)bVar6 * -2 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar4;
        } while (cVar1 != '\0');
        pcVar4 = pcVar4 + -1;
        do {
          cVar1 = *pcVar3;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar3[1];
          pcVar3 = pcVar3 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_7c," Color : %d",g_ModelPolygonData[local_18].material_id);
        pcVar3 = local_7c;
        iVar2 = -1;
        pcVar5 = local_11c;
        do {
          pcVar4 = pcVar5;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar4 = pcVar5 + (uint)bVar6 * -2 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar4;
        } while (cVar1 != '\0');
        pcVar4 = pcVar4 + -1;
        do {
          cVar1 = *pcVar3;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar3[1];
          pcVar3 = pcVar3 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
        engine_2d_c_drawText_FUN_00401fd0(local_11c,0,local_20);
        local_20 = local_20 + 0xb;
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    local_11c[0] = -0x34;
    local_11c[1] = -0x25;
    local_11c[2] = 'E';
    local_11c[3] = '\0';
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    local_1c = local_1c + g_WindowHeight / 0xb;
  } while( true );
}
