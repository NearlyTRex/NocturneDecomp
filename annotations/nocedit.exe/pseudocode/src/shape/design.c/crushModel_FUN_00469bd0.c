// Name: shape_design.c_crushModel_FUN_00469bd0
// Address: 00469bd0
// Address Range: [[00469bd0, 00469c6e]]
// Convention: __cdecl
// Signature: void shape_design.c_crushModel_FUN_00469bd0(void)

#include "nocturne.h"

void __cdecl shape_design_c_crushModel_FUN_00469bd0(void)

{
  int iVar1;
  float local_14;
  
  local_14 = 9999.0;
  for (iVar1 = 0; iVar1 < g_VertexCount; iVar1 = iVar1 + 1) {
    if (g_LoadedVertices[iVar1].vertex.y < local_14) {
      local_14 = g_LoadedVertices[iVar1].vertex.y;
    }
  }
  for (iVar1 = 0; iVar1 < g_VertexCount; iVar1 = iVar1 + 1) {
    g_LoadedVertices[iVar1].vertex.y = local_14;
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Model crushed.  Hit a key...",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  return;
}
