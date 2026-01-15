// Name: shape_design.c_checkVertexCountLimit_FUN_00460a10
// Address: 00460a10
// Address Range: [[00460a10, 00460abd]]
// Convention: __cdecl
// Signature: int shape_design.c_checkVertexCountLimit_FUN_00460a10(void)

#include "nocturne.h"

int __cdecl shape_design_c_checkVertexCountLimit_FUN_00460a10(void)

{
  bool bVar1;
  char local_68 [80];
  uint local_18;
  uint local_14;
  
  local_14 = 20000;
  bVar1 = 20000 < g_VertexCount;
  if (bVar1) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_68,"ERROR: Too many vertices! (npoints:%d > %d)",g_VertexCount,local_14);
    engine_2d_c_drawText_FUN_00401fd0(local_68,0,0);
    crt_stdio_c_sprintf_FUN_005fdbd0(local_68,"vertexList[] in 2d.c only supports %d vertices",local_14);
    engine_2d_c_drawText_FUN_00401fd0(local_68,0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("You won't be able to view the model, but you can reduce it, etc.",0,0x2c);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  }
  local_18 = (uint)bVar1;
  return local_18;
}
