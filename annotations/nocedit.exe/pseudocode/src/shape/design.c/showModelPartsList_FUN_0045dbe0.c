// Name: shape_design.c_showModelPartsList_FUN_0045dbe0
// Address: 0045dbe0
// Address Range: [[0045dbe0, 0045dcbd]]
// Convention: unknown
// Signature: undefined shape_design.c_showModelPartsList_FUN_0045dbe0()

#include "nocturne.h"

void shape_design_c_showModelPartsList_FUN_0045dbe0(void)

{
  BADSPACEBASE *in_ESP;
  SModelPartName *local_cc;
  uint uStack_c8;
  uint uStack_c4;
  int local_20;
  int local_1c;
  int local_18;
  
  engine_2d_c_clearInputAndWait_FUN_00403260();
  for (local_20 = 0; local_20 < g_PartsCount; local_20 = local_20 + g_WindowHeight / 0xb) {
    uStack_c4 = 0x45dc26;
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    local_1c = 0;
    for (local_18 = local_20; local_18 < g_WindowHeight / 0xb + local_20; local_18 = local_18 + 1) {
      if (local_18 < g_PartsCount) {
        local_cc = g_ModelPartNames + local_18;
        crt_stdio_c_sprintf_FUN_005fdbd0((char *)&local_cc,"Part %d : %s",local_18);
        engine_2d_c_drawText_FUN_00401fd0((char *)&local_cc,0,local_1c);
        local_1c = local_1c + 0xb;
      }
    }
    local_cc = (SModelPartName *)0x45dca8;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    uStack_c8 = 0x45dcad;
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  uStack_c4 = 0x45dcb7;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}
