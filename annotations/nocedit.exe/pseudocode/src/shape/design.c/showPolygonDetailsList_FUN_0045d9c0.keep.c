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
          strcat(local_11c,local_2c);
        }
        _sprintf
                  (local_7c," Part : %s",
                   (g_ModelPartNames + g_ModelPolygonData[local_18].part_assignment)->name);
        strcat(local_11c,local_7c);
        _sprintf
                  (local_7c," Color : %d",g_ModelPolygonData[local_18].material_id);
        strcat(local_11c,local_7c);
        engine_2d_c_drawText_FUN_00401fd0(local_11c,0,local_20);
        local_20 = local_20 + 0xb;
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    local_1c = local_1c + g_WindowHeight / 0xb;
  } while( true );
}
