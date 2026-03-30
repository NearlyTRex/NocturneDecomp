// Name: shape_design.c_showPolygonDetailsList_FUN_0045d9c0
// Address: 0045d9c0
// MANUAL RECONSTRUCTION
// Address Range: [[0045d9c0, 0045dbdc]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_showPolygonDetailsList_FUN_0045d9c0(void)

#include "nocturne.h"

void __cdecl shape_design_c_showPolygonDetailsList_FUN_0045d9c0(void)

{
  char cVar2;
  int iVar2;
  int iVar3;
  char *pcVar3;
  char *pcVar4;
  char *pcVar6;
  char *pcVar7;
  char *pcVar5;
  char *pcVar8;
  byte bVar6;
  char local_11c [160];
  char local_7c [80];
  char local_2c [12];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char cVar1;
  
  bVar6 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  local_1c = 0;
  do {
    if (g_PolygonCount <= local_1c) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    local_20 = 0;
    for (local_18 = local_1c; local_18 < g_WindowHeight / 0xb + local_1c; local_18 = local_18 + 1) {
      if ((((g_WireframeMode == 0) || (g_CurrentPartIndex == -1)) ||
          (g_ModelPolygonData[local_18].part_assignment == g_CurrentPartIndex)) &&
         (local_18 < g_PolygonCount)) {
        _sprintf(local_11c,"Poly %d :",local_18);
        for (local_14 = 0; local_14 < (int)g_ModelPolygonData[local_18].vertex_indices_count;
            local_14 = local_14 + 1) {
          _sprintf
                    (local_2c," %d",g_ModelPolygonData[local_18].vertex_indices[local_14]);
          pcVar3 = local_2c;
          iVar2 = -1;
          pcVar4 = local_11c;
          do {
            pcVar4 = pcVar4;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4;
          } while (cVar1 != '\0');
          pcVar6 = pcVar4 + -1;
          do {
            cVar2 = *pcVar3;
            *pcVar6 = cVar2;
            if (cVar2 == '\0') break;
            cVar2 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar6[1] = cVar2;
            pcVar6 = pcVar6 + 2;
          } while (cVar2 != '\0');
        }
        _sprintf
                  (local_7c," Part : %s",
                   (g_ModelPartNames + g_ModelPolygonData[local_18].part_assignment)->name);
        pcVar6 = local_7c;
        iVar3 = -1;
        pcVar8 = local_11c;
        do {
          pcVar7 = pcVar8;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar7 = pcVar8 + (uint)bVar6 * -2 + 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar7;
        } while (cVar2 != '\0');
        pcVar7 = pcVar7 + -1;
        do {
          cVar2 = *pcVar6;
          *pcVar7 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar7[1] = cVar2;
          pcVar7 = pcVar7 + 2;
        } while (cVar2 != '\0');
        _sprintf
                  (local_7c," Color : %d",g_ModelPolygonData[local_18].material_id);
        pcVar6 = local_7c;
        iVar3 = -1;
        pcVar5 = local_11c;
        do {
          pcVar5 = pcVar5;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar5;
        } while (cVar2 != '\0');
        pcVar8 = pcVar5 + -1;
        do {
          cVar2 = *pcVar6;
          *pcVar8 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar8[1] = cVar2;
          pcVar8 = pcVar8 + 2;
        } while (cVar2 != '\0');
        engine_2d_c_drawText_FUN_00401fd0(local_11c,0,local_20);
        local_20 = local_20 + 0xb;
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    local_1c = local_1c + g_WindowHeight / 0xb;
  } while( true );
}
