// Name: shape_design.c_squashShapeFor3DMorph_FUN_004685e0
// Address: 004685e0
// Address Range: [[004685e0, 004686dd]]
// Convention: __cdecl
// Signature: void shape_design.c_squashShapeFor3DMorph_FUN_004685e0(void)

#include "nocturne.h"

void __cdecl shape_design_c_squashShapeFor3DMorph_FUN_004685e0(void)

{
  uint uVar1;
  int local_1c;
  
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_2d_c_drawText_FUN_00401fd0("Enter squash axis - X, Y, or Z : ",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  uVar1 = crt_ctype_c_toupper_FUN_005ff9e0(uVar1 & 0xff);
  if (uVar1 < 0x59) {
    if (uVar1 == 0x58) {
      for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
        g_LoadedVertices[local_1c].vertex.x = 0.0;
      }
    }
  }
  else if (uVar1 < 0x5a) {
    for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
      g_LoadedVertices[local_1c].vertex.y = 0.0;
    }
  }
  else if (uVar1 == 0x5a) {
    for (local_1c = 0; local_1c < g_VertexCount; local_1c = local_1c + 1) {
      g_LoadedVertices[local_1c].vertex.z = 0.0;
    }
  }
  return;
}
