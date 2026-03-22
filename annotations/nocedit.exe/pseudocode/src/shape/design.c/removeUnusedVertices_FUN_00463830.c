// Name: shape_design.c_removeUnusedVertices_FUN_00463830
// Address: 00463830
// Address Range: [[00463830, 00463a1f] [00604d7d, 00604da3]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_removeUnusedVertices_FUN_00463830(void)

#include "nocturne.h"

void __cdecl shape_design_c_removeUnusedVertices_FUN_00463830(void)

{
  int iVar2;
  void *dest;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int local_2c;
  int local_24;
  int local_1c;
  int iVar1;
  
  if (0 < g_VertexCount) {
    dest = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (g_VertexCount << 2,"..\\shape\\design.c",0x189a);
    if (dest == (void *)0x0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("ERROR: Can't allocate memory to remove unused vertices.",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      memset(dest,0,g_VertexCount << 2);
      for (local_1c = 0; iVar1 = g_VertexCount, local_1c < g_PolygonCount; local_1c = local_1c + 1)
      {
        for (local_24 = 0; local_24 < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
            local_24 = local_24 + 1) {
          *(uint *)(g_ModelPolygonData[local_1c].vertex_indices[local_24] * 4 + (int)dest) = 1
          ;
        }
      }
      g_VertexCount = 0;
      for (local_1c = 0; iVar2 = g_VertexCount, local_1c < iVar1; local_1c = local_1c + 1) {
        if (*(int *)(local_1c * 4 + (int)dest) == 0) {
          *(uint *)(local_1c * 4 + (int)dest) = 0xffffffff;
        }
        else {
          if (g_VertexCount != local_1c) {
            g_LoadedVertices[g_VertexCount].vertex.x = g_LoadedVertices[local_1c].vertex.x;
            g_LoadedVertices[iVar2].vertex.y = g_LoadedVertices[local_1c].vertex.y;
            g_LoadedVertices[iVar2].vertex.z = g_LoadedVertices[local_1c].vertex.z;
            g_LoadedVertices[iVar2].u = g_LoadedVertices[local_1c].u;
            g_LoadedVertices[iVar2].v = g_LoadedVertices[local_1c].v;
          }
          *(int *)((int)dest + local_1c * 4) = g_VertexCount;
          g_VertexCount = g_VertexCount + 1;
        }
      }
      for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
        for (local_2c = 0; local_2c < (int)g_ModelPolygonData[local_1c].vertex_indices_count;
            local_2c = local_2c + 1) {
          g_ModelPolygonData[local_1c].vertex_indices[local_2c] =
               *(uint *)((int)dest + g_ModelPolygonData[local_1c].vertex_indices[local_2c] * 4);
        }
      }
      shape_memdbg_cpp_debugFree_FUN_0050f460(dest,"..\\shape\\design.c",0x18d4);
    }
  }
  return;
}
