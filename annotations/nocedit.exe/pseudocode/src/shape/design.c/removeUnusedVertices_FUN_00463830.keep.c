// Name: shape_design.c_removeUnusedVertices_FUN_00463830
// Address: 00463830
// MANUAL RECONSTRUCTION
// Address Range: [[00463830, 00463a1f] [00604d7d, 00604da3]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_removeUnusedVertices_FUN_00463830(void)

#include "nocturne.h"

void __cdecl shape_design_c_removeUnusedVertices_FUN_00463830(void)

{
  uint *dest;
  int local_2c;
  int local_24;
  int local_1c;
  int iVar1;
  
  if (0 < g_VertexCount) {
    dest = (uint *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (g_VertexCount << 2,"..\\shape\\design.c",6298);
    if (dest == (uint *)0x0) {
      engine_special_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("ERROR: Can't allocate memory to remove unused vertices.",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      memset(dest,0,g_VertexCount * sizeof(*dest));
      for (local_1c = 0; iVar1 = g_VertexCount, local_1c < g_PolygonCount; local_1c = local_1c + 1)
      {
        for (local_24 = 0; local_24 < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
            local_24 = local_24 + 1) {
          dest[g_ModelPolygonData[local_1c].vertex_indices[local_24]] = 1;
        }
      }
      g_VertexCount = 0;
      for (local_1c = 0; local_1c < iVar1; local_1c = local_1c + 1) {
        if (dest[local_1c] == 0) {
          dest[local_1c] = 0xffffffff;
        }
        else {
          if (g_VertexCount != local_1c) {
            g_LoadedVertices[g_VertexCount] = g_LoadedVertices[local_1c];
          }
          dest[local_1c] = g_VertexCount;
          g_VertexCount = g_VertexCount + 1;
        }
      }
      for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
        for (local_2c = 0; local_2c < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
            local_2c = local_2c + 1) {
          g_ModelPolygonData[local_1c].vertex_indices[local_2c] =
               dest[g_ModelPolygonData[local_1c].vertex_indices[local_2c]];
        }
      }
      shape_memdbg_cpp_debugFree_FUN_0050f460(dest,"..\\shape\\design.c",6356);
    }
  }
  return;
}
