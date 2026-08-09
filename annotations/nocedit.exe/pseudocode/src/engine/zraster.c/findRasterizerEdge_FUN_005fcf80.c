// Name: engine_zraster.c_findRasterizerEdge_FUN_005fcf80
// Address: 005fcf80
// Address Range: [[005fcf80, 005fcfb5]]
// Convention: __cdecl
// Signature: SSoftwareEdge * __cdecl engine_zraster_c_findRasterizerEdge_FUN_005fcf80(int y_start,SSoftwareEdge *exclude_edge)

#include "nocturne.h"

SSoftwareEdge * __cdecl engine_zraster_c_findRasterizerEdge_FUN_005fcf80(int y_start,SSoftwareEdge *exclude_edge)

{
  SSoftwareEdge *pSVar1;
  int iVar2;
  
  pSVar1 = g_RasterizerEdgeArray;
  iVar2 = 0;
  if (0 < g_RasterizerEdgeCount) {
    do {
      if ((y_start == (pSVar1->base).y_min) && (pSVar1 != exclude_edge)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_RasterizerEdgeCount);
  }
  return (SSoftwareEdge *)0x0;
}
