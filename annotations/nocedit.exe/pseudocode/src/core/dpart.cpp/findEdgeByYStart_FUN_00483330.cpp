// Name: core_dpart.cpp_findEdgeByYStart_FUN_00483330
// Address: 00483330
// Address Range: [[00483330, 00483365]]
// Convention: __cdecl
// Signature: SEdgeData * __cdecl core_dpart_cpp_findEdgeByYStart_FUN_00483330(int scanline_y,SEdgeData *exclude_edge)

#include "nocturne.h"

SEdgeData * __cdecl core_dpart_cpp_findEdgeByYStart_FUN_00483330(int scanline_y,SEdgeData *exclude_edge)

{
  SEdgeData *pSVar1;
  int iVar2;
  
  pSVar1 = g_EdgeInterpolationArray;
  iVar2 = 0;
  if (0 < g_RenderTriangleEdgeCount) {
    do {
      if ((scanline_y == pSVar1->y_start) && (pSVar1 != exclude_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_RenderTriangleEdgeCount);
  }
  return (SEdgeData *)0x0;
}
