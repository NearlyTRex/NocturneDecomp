// Name: core_dpart.cpp_findEdgeByYStart_FUN_00483330
// Address: 00483330
// Address Range: [[00483330, 00483365]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl core_dpart_cpp_findEdgeByYStart_FUN_00483330(int scanline_y,SSoftwareEdge *exclude_edge)

#include "nocturne.h"

SSoftwareEdge * __cdecl core_dpart_cpp_findEdgeByYStart_FUN_00483330(int scanline_y,SSoftwareEdge *exclude_edge)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = g_EdgeInterpolationArray;
  iVar2 = 0;
  if (0 < g_RenderTriangleEdgeCount) {
    do {
      if ((scanline_y == (pSVar1->base).y_min) && (pSVar1 != exclude_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_RenderTriangleEdgeCount);
  }
  return (SSoftwareEdge *)0x0;
}
