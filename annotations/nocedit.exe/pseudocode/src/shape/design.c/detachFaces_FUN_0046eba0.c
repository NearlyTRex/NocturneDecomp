// Name: shape_design.c_detachFaces_FUN_0046eba0
// Address: 0046eba0
// Address Range: [[0046eba0, 0046ecf1]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_detachFaces_FUN_0046eba0(void)

#include "nocturne.h"

void __cdecl shape_design_c_detachFaces_FUN_0046eba0(void)

{
  uint uVar1;
  SVertexData *pSVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  
  iVar3 = g_VertexCount;
  local_20 = 0;
  do {
    if (g_PolygonCount <= local_20) {
      for (local_1c = iVar3; local_1c < g_VertexCount; local_1c = local_1c + 1) {
        iVar4 = local_1c - iVar3;
        g_LoadedVertices[iVar4].vertex.x = g_LoadedVertices[local_1c].vertex.x;
        g_LoadedVertices[iVar4].vertex.y = g_LoadedVertices[local_1c].vertex.y;
        g_LoadedVertices[iVar4].vertex.z = g_LoadedVertices[local_1c].vertex.z;
        g_LoadedVertices[iVar4].u = g_LoadedVertices[local_1c].u;
        g_LoadedVertices[iVar4].v = g_LoadedVertices[local_1c].v;
      }
      g_VertexCount = g_VertexCount - iVar3;
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Faces detached.",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      return;
    }
    for (local_1c = 0; iVar4 = g_VertexCount,
        local_1c < (int)g_ModelPolygonData[local_20].vertex_indices_count; local_1c = local_1c + 1)
    {
      uVar1 = g_ModelPolygonData[local_20].vertex_indices[local_1c];
      pSVar2 = g_LoadedVertices + g_VertexCount;
      g_LoadedVertices[g_VertexCount].vertex.x = g_LoadedVertices[uVar1].vertex.x;
      (pSVar2->vertex).y = g_LoadedVertices[uVar1].vertex.y;
      g_LoadedVertices[iVar4].vertex.z = g_LoadedVertices[uVar1].vertex.z;
      g_LoadedVertices[iVar4].u = g_LoadedVertices[uVar1].u;
      g_LoadedVertices[iVar4].v = g_LoadedVertices[uVar1].v;
      g_ModelPolygonData[local_20].vertex_indices[local_1c] = g_VertexCount - iVar3;
      g_VertexCount = g_VertexCount + 1;
      if (20000 < g_VertexCount) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("Ran out of verticies!",0,0);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
        return;
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}
