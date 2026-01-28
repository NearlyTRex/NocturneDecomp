// Name: shape_design.c_showModelPartsList_FUN_0045dbe0
// Address: 0045dbe0
// Address Range: [[0045dbe0, 0045dcbd]]
// Convention: unknown
// Signature: void shape_design_c_showModelPartsList_FUN_0045dbe0(void)

#include "nocturne.h"

void shape_design_c_showModelPartsList_FUN_0045dbe0(void)

{
  char local_cc [172];
  int local_20;
  int local_1c;
  int local_18;
  
  engine_2d_c_clearInputAndWait_FUN_00403260();
  for (local_20 = 0; local_20 < g_PartsCount; local_20 = local_20 + g_WindowHeight / 0xb) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    local_1c = 0;
    for (local_18 = local_20; local_18 < g_WindowHeight / 0xb + local_20; local_18 = local_18 + 1) {
      if (local_18 < g_PartsCount) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_cc,"Part %d : %s",local_18,g_ModelPartNames + local_18);
        engine_2d_c_drawText_FUN_00401fd0(local_cc,0,local_1c);
        local_1c = local_1c + 0xb;
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
