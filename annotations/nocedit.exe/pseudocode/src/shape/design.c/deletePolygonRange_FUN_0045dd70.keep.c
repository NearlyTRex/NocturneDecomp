// Name: shape_design.c_deletePolygonRange_FUN_0045dd70
// Address: 0045dd70
// MANUAL RECONSTRUCTION
// Address Range: [[0045dd70, 0045de7d]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_deletePolygonRange_FUN_0045dd70(void)

#include "nocturne.h"

void __cdecl shape_design_c_deletePolygonRange_FUN_0045dd70(void)

{
  char local_70 [80];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;

  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_70,0x32,0,0,"Polygon range #s to delete (a,b) : ")
  ;
  if ((strlen(local_70) != 0) &&
     (local_14 = sscanf(local_70,"%d,%d",&local_1c,&local_18),
     local_14 == 2)) {
    if ((local_18 < local_1c) || ((local_1c < 0 || (g_PolygonCount <= local_18)))) {
      engine_2d_c_drawText_FUN_00401fd0("Bad range.  Hit a key...",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      for (local_14 = 0; local_14 < (local_18 - local_1c) + 1; local_14 = local_14 + 1) {
        for (local_20 = local_1c; local_20 < g_PolygonCount + -1; local_20 = local_20 + 1) {
          g_ModelPolygonData[local_20] = g_ModelPolygonData[local_20 + 1];
        }
        g_PolygonCount = g_PolygonCount + -1;
      }
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
  }
  return;
}
