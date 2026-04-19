// Name: shape_design.c_checkVertexCountLimit_FUN_00460a10
// Address: 00460a10
// Address Range: [[00460a10, 00460abd]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_checkVertexCountLimit_FUN_00460a10(void)

#include "nocturne.h"

int __cdecl shape_design_c_checkVertexCountLimit_FUN_00460a10(void)

{
  char local_68 [80];
  uint local_18;
  bool bVar1;
  
  bVar1 = 20000 < g_VertexCount;
  if (bVar1) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    _sprintf(local_68,"ERROR: Too many vertices! (npoints:%d > %d)",g_VertexCount,20000);
    engine_2d_c_drawText_FUN_00401fd0(local_68,0,0);
    _sprintf(local_68,"vertexList[] in 2d.c only supports %d vertices",20000);
    engine_2d_c_drawText_FUN_00401fd0(local_68,0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("You won't be able to view the model, but you can reduce it, etc.",0,0x2c);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  local_18 = (uint)bVar1;
  return local_18;
}
